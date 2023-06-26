# Assignment 7 - ICS #

## Problem Statement ##

Write a program to implement Digital Signature using DSA.

## Digital Signature Techniques ##

- Digital Signature Standard (DSS) uses SHA-1.
- RSA and DSA

## DSA Key Generation ##

have shared global public key values(p,q,g):

    - choose a large prime p with 2^L-1 < p < 2^L
       <!-- where L = 512 to 1024 bits and is a multiple of 64 -->
    - Choose a 160-bit prime divvisor q of (p-1)
    - choose g = h^((p-1)/q)
       <!-- where 1 < h < p-1 and h^(p-1)/q mod p >1 -->

Users choose private key and compute public key:

    - choose random private key: x < q
    - comopute public key: y = g^x mod p

## DSA Signature Creation ##

to sign a message M the sender:

    - generates a rondom signature key k, k < q

then computes signature pair:

    - r = (g^k mod p) mod q
    - s = (k^-1)(SHA(M) + x*r) mod q

sends signature (r,s) with message M.

## DSA Signature Verification ##

- having received M and signature (r,s)
