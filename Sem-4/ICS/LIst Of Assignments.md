# List Of Assignments #

    - Write a program using java or python C++ to implement any classical cryptographic technique.
    - Write a program using JAVA or Python or C++ to implement feisal cypher.

## Lab Assignment 2 ##

Write a program using JAVA or Python or C++ to implement feisal cypher.

    - Simplified DES(S-DES) was developed by proffesor edward schaefer of Santa Clara University.

### Simplified DES (Overview) ###

- The S-DES encryption algortithm takes an 8-bit block of plaintext and a 10-bit key as input and produces an 8-bit block of cipher text as output.
- The S-DES decryption algorithm takes an 8-bit block of ciphertext and the same 10-bit key used to decrypt the plaintext.

The DES encryption algorithm involves five functions:
    - An initial permutation (IP);
    - A complex function called fk, which incolves both permutation and substitution operations and depends on a key input;
    - A simple permutation function that switches (SW) the two halves of the data;
    - The function fk again;
    - A permutation function that is the inverse of the initial permutation (IP^-1).

Steps for key generation:

- Initial permutation P10.
-

Plaintext: 1 1 1 1 0 0 1 1
Key:       1 0 1 0 0 0 0 0 1 0
IP:        2 6 3 1 4 8 5 7
IP^-1:     4 1 3 5 7 2 8 6

S0 =      0 1 2 3
       0 [1 0 3 2]
       1 [3 2 1 0]
       2 [0 2 1 3]
       3 [3 1 3 2]
