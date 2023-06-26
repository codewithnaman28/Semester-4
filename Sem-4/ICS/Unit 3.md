# Unit 3 Authentication and Digital Signatures #

- Use of cryptography for authentication
- Secure Hash Function
- Key Management and Distribution: Symmetric key distribution using Symmetric Encryption, Symmetric Key Distribution using Asymmetric Encryption, Distribution of Public Keys.
- Cryptographic Key Infrastructures, Diffie-Hellman Key Exchange,Digital Certificates X.509

## Digital Signature Techniques ##

- Digital Signature Standard (DSS) uses SHA-1
- RSA and DSA

Digital Signature is used for comunication to verify:

    - Authentication of the sender 
    - Integrity of the message received 
    - Non-Reputation

## Digital Signature Algorithm (DSA) ##

- creates a 320 bit signature
- smaller and faster than RSA
- security depends on difficulty of computing discrete logarithms.

DSA key generation:

    - choose a large prime p with 2^L-1 < p < 2^L
    - where L = 512 to 1024 bits and is a multiple of 64
    - choose q
    - such that q is a 160 bit prime divisor of (p-1)
    - choose g = h^((p-1)/q) 
    - where 1<h<p-1 and h^((p-1)/q) mod p > 1

NOTE: L will be one memeber of the set {512, 576, 640, 704, 768, 832, 896, 960, 1024}

users choose private key and compute public key:

    - choose random private key: x < q
    - compute public key: y = g^x mod p

DSA Signature Verification:

    - having recieved a message M and signature (r,s)
    - to verify signature, recipient computes:
    - w = s^-1 mod q
    - u1 = [SHA(M)*w] mod q
    - u2 = [r*w] mod q
    - v = [g^u1 * y^u2 mod p] mod q

if v = r, then signature is verified

## Secure Hash Function ##

- a hash function H accepts a variable-length block of data as input and produces a fixed-size hash value h = H(M)
- Does not take a secret key as input

Types of keys:

    - Secret key: used to encrypt and decrypt messages
    - Private key: used to sign messages
    - Public key: used to verify signatures
    - Session key: used to encrypt data transmitted between client and server
    - One-time key: used to encrypt and decrypt messages

**Key Hierarchy:**

- The use of a KDC is based on the use of hierarchy of keys

        - typically have a hierarchy of keys
        - session key
        - **temporary key:**
            - used for encryption of data between users
            - for one logical session then discarded
        -**Master key:**
            - used to encrypt session keys
            - shared by user an dkey distribution center

**Key Distribution Issues:**

- hierarchies of KDC's reequired for large networks, but must trust eachother
- session key lifetimes should be limited for greater security
- use of automatic key distribution systems is required for large networks (e.g. Kerberos).

## Symmetric Key Distribution using Public Keys ##

- public key cryptosystems are inefficient

    1. so almost never use for direct data encrytion
    2. rather use to encrypt secret key for distribution
- Merkle proposed this very simple scheme

    1. allows secure communications
    2. no keys before/after exist

## Diffie-Hellman Key Exchange ##

- Choose two prime numbers n and g where g is a primitive root of n.
- User A selects X~A~ as his private key randomly. i.e. X~A~ < n.
- User B selects X~B~ as his private key randomly. i.e. X~B~ < n.
- User A computes his public key i.e. = Y~A~ = g^(X~A~)^ mod n.
- User B computes his public key i.e. = Y~B~ = g^(X~B~)^ mod n.
- Exchange their public keys.
- User A computes key called shared key. i.e. = k = (Y~B~^X~A~^) mod n.
- User B computes key called shared key. i.e. = k = (Y~A~^X~B~^) mod n.
- Both user communicate with each other using one of the symmetric encryption technique.
- They use shared secret key as the encryption keyfor selected algorithm.

**Problem Statement:** If generator g = 2 and n or p = 11 using diffie-hellman algorithm, solve the following:

1. Show that 2 is primitive root of 11.
2. If A has private key 9 what is A's public key?
3. If B has private key 3 what is B's public key?
4. Calculate shared secret key.

Here are the steps to solve the problem using the Diffie-Hellman algorithm:

1. To show that 2 is a primitive root of 11, we need to verify that the powers of 2 modulo 11 generate all possible residues from 1 to 10. We can do this by calculating:
2^1^ mod 11 = 2
2^2^ mod 11 = 4
2^3^ mod 11 = 8
2^4^ mod 11 = 5
2^5^ mod 11 = 10
2^6^ mod 11 = 9
2^7^ mod 11 = 7
2^8^ mod 11 = 3
2^9^ mod 11 = 6
2^10 mod 11 = 1
Since the powers of 2 generate all possible residues from 1 to 10, we can conclude that 2 is a primitive root of 11.
2. A's public key is calculated as g^a mod p, where g is the generator (2), a is A's private key (9), and p is the prime modulus (11). Thus, A's public key is:
2^9 mod 11 = 6
3. B's public key is calculated in the same way as A's public key, using B's private key (3):
2^3 mod 11 = 8
4. To calculate the shared secret key, each party raises the other party's public key to their own private key, and then takes the result modulo the prime modulus. Thus, A calculates:
B's public key ^ A's private key mod p = 8^9 mod 11 = 7
And B calculates:
A's public key ^ B's private key mod p = 6^3 mod 11 = 7
Both parties obtain the same result (6), which is their shared secret key.
Therefore, the shared secret key between A and B is 7.

**Problem Statement:** User Alice and Bob use the Diffie-Hellman key exchange technique with a common prime q = 83 and a primitive root &alpha; = 5.

a. if Alice has a primitive key = X~A~ = 6

## Digital Certificate ##

- A digital certificate is simply a small computer file.
- Certificates are the frameework for indentification information, and bind identities with public keys. e.g. passport, driving liscence, etc.
- They provide a foundation for:

		1.identification
        2.authentication
        3.non-repudiation

## Structure of X.509 Digital Certificates ##

- Trusted organization that issues certificates and maintains status information about certificates.
- The most popular CA's are *Verisign* and *Entrust*.
- A standard called X.509 define structure of a digital certificate.
- CA issues new certificates, maintain old ones, and revoke the certificate that has become invalid for some sort of reasons.
- The CA can delegate some of its tasks to this third-party called as a *Registration Authority* (RA).

## Certificate Creation Steps ##

**Key Generation:**

- It starts with the creation of the subject's public and private keys using some software.
- The subject then sends the public key along with the other information like evidence about himself/herself to the **RA (Registration Authority)**.

**Registration:**

- Suppose the user has created the key pair, the user now sends the public key and the related registration information.
- THe format for the certificate requests has been standardized and is called **certificate signing request (CSR)**. This is one of the public key cryptography standards (PKCS).

**Verification:**

- When the registration process is completed, the RA has to check the user's credentials such as the provided informaition is correct and acceptable or not.
- RA checking the **Proof of Possession (POP)** of the private key.

**Certificate creation:**

- The RA accepts all the details of the user and send to the CA. The CA dous its own verification and creates a digital certificate.
- There are programs for creating certificates in the **X.509 standard** format.The CA delivers the certificate to the user and also keep a copu of the certificate for its own record.
- The CA's copy of the certificate is maintained in a **certificate directory**.
