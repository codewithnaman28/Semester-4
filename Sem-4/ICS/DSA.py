import hashlib
import random
import sys


def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a


def mod_inv(a, m):
    if gcd(a, m) != 1:
        return None
    u1, u2, u3 = 1, 0, a
    v1, v2, v3 = 0, 1, m
    while v3 != 0:
        q = u3 // v3
        v1, v2, v3, u1, u2, u3 = (
            u1 - q * v1), (u2 - q * v2), (u3 - q * v3), v1, v2, v3
    return u1 % m

def generate_keys():
    #generate random number for private key
    private_key = random.randint(1, pow(2, 128))
    #generate public key
    public_key = pow(2, 128)+1
    
    def dsa_sign(message, p, q, g, x):
        h = int(hashlib.sha1(message).hexdigest(), 16)
        k = random.randint(1, q-1)
        r = pow(g, k, p) % q
        s = (mod_inv(k, q) * (h + x*r)) % q
        return (r, s)


def dsa_verify(message, r, s, p, q, g, y):
    h = int(hashlib.sha1(message).hexdigest(), 16)
    w = mod_inv(s, q)
    u1 = (h * w) % q # type: ignore
    u2 = (r * w) % q
    v = ((pow(g, u1, p) * pow(y, u2, p)) % p) % q
    return v == r


if __name__ == '__main__':
    message = 'Hello, world!'
    p = 120357357725929869244497196837953237245361167493
    q = 979156520250342324442115645448493864424559064951
    g = 357169207314948657721871223971897517518589664584

    
    # Print the public key
    print('Public key:', y)
    
    # Print the private key
    print('Private key:', x)
    
    # Print the message
    print('Message:', message)
    
    # Sign the message
    signature = dsa_sign(message.encode('utf-8'), p, q, g, x)
    print('Signature:', signature)

    # Verify the signature
    if dsa_verify(message.encode('utf-8'), signature[0], signature[1], p, q, g, y):
        print('Valid signature!')
    else:
        print('Invalid signature!')
