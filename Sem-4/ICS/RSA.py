'''
Naman Soni
Batch A-1
Roll No. PA-10
'''

import math


def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)


def isPrime(a):
    for i in range(2, int(math.sqrt(a)) + 1):
        if a % i == 0:
            return False
    return True


def extEuc(a, b):
    old_r, r = a, b
    old_s, s = 1, 0
    old_t, t = 0, 1
    while r != 0:
        quotient = old_r // r
        old_r, r = r, (old_r - (quotient * r))
        old_s, s = s, (old_s - (quotient * s))
        old_t, t = t, (old_t - (quotient * t))

    return old_t


p, q = [int(i) for i in input("Enter Prime number p and q: ").split(" ")]

if isPrime(p) and isPrime(q):
    n = p * q
    totient_n = (p - 1) * (q - 1)
    e = 2
    while e < totient_n:
        if gcd(totient_n, e) == 1:
            break
        e += 1
    print("Value of e: ", e)
    # calculating e inv
    d = extEuc(totient_n, e) % totient_n
    print("Value of d: ", d)
    message = int(input("Enter message for encrypting"))
    cypherText = pow(message, e) % n
    print("Cypher text is ", cypherText)
    messageDecrypt = pow(cypherText, d) % n
    print("Message text is ", messageDecrypt)
else:
    print("Entered number is not prime numbers")
