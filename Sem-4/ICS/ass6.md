# ICS Assignment 6 #

Write a program to implement Diffie Hellman Key Exchange Algorithm

## Algorithm ##

- Choose prime number n and g where g is a primitive root of n
- User A selects Xa as his private key randomly. i.e. Xa < n
- User b selects Xb as his private key randomly. i.e. Xb < n
- User A computes his public key i.e. Ya = (g^Xa) mod n
- User B computes his public key i.e. Yb = (g^Xb) mod n
- Exchahnge their public keys
- User A computes his secret key i.e. Ka = (Yb^Xa) mod n
- User B computes his secret key i.e. Kb = (Ya^Xb) mod n
- Both user communicate using one of the symmertric encryption technique.

        They use shared secret key as the enctyption key for selected algorithm.
