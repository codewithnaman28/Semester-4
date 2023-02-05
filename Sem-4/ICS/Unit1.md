# Foundations of Information Security #

## Key Security Concepts ##

    Elements of Information Security:
    - Confidentiality: auhtorised user can access data
    - Integrity: validity of data
    - Availability

## Security Policies, Procedures, Gudielines ##

    What is a security policy? 
    - A security policy is a document that states inwriting how a company plans to protect its physical and information technology (IT) assets.
    - Security policies are living documents that are continuously updated and changing as technologies, vulnerablilities and security requirements.

## Design of Feistel cipher depends on following parameters ##

    - Block Size: (larger block means greater security) 64 bits

## Data Encryption Standard (DES) ##

    - IBM developed Lucifer Cipher: -> by team led by Feistel -> used 64-bit data blocks with 128-bit key.
    - then redeveloped as a commercial cipher with input from NSA and others in 1973 NBS issued request for proposals for a national cipher standard.
    - IBM submitted their revised Lucifer which was eventuall accepted as DES.

## Conceptual View of DES ##

- Every 8th bit of the key is discarde to produce a 56-bit key
- Same algorithm and key are used for encryption and decryption.

## Broad Level Streps in DES ##

- EDS is based on substitution (called as confusion) and transposiition (called as diffusion).
- Each round performs the steps osf substitution and transposition.

## Initial Permutation ##

The first bit of the output is taken from the 58th bit of the input; the second bit from the 50th bit, and so on, with the last bit of the output.

## 