# Unit 2 Mathematical Foundations and PUblic Key Cryptography #

## Index ##

Mathematics for Security:

    - Modular Arithmetic
    - Euler's Theorem
    - Fermat Theorem
    - Euclidiean Algorithm
    - Miller-Rabin Algotrithm
    - Primality Test
    - Chinese remainder Theorem
    - Discrete Logarithm

Asymmetric Key Cryptography:

    - RSA algortithms

Hash Algorithm:

    - MD5
    - SHA1 (Secure Hash Algorithm Version 1)

## Lab Assignments ##

- Write a program to implement RSA asymmetric key algorithm
- Write a program to implement integrity of message using MD5 or SHA1

## Number Theory ##

Prime Numbers

    - If the prime number is used as the initail input value the encrypted text will be more secure than with a composite number. 

Relative Prime Numbers

    - Two numbers are called relatively prime if the greatest common divisor (GCD) of those number is 1.
    - 8 and 15 are relatively prime numbers
    - factors of 8: 1, 2, 4, 8
    - factors of 15: 1, 3, 5, 15
    - as the GCD of 8 and 15 is 1 therefore they are relatively prime numbers
    - The GCD of two numbers can be determinded by comparing their prime factors and selecting the least powers of the factor.
    - For example, the two numbers are 81 and 99.

## Modular Arithmetic ##

- m mod n
- The mod with respect to n is (0,1,2,...n-1)
- Suppose m = 23 and n = 9, then
- 23 mod 9 - 5
- For any value of m, hte value of m mod 9 is from (0,1,2,...8)

1. Addition of modular number

        - The addtion of two numbers p and q with same modular base n is: 
            (p mod n + q mod n) mod n = (p + q) mod n

2. Subtraction of modular number

        - The subtraction of two numbers p and q with same modular base n is:
            (p mod n - q mod n) mod n = (p - q) mod n

3. Multiplication of modular number

        - The multiplication of two numbers p and q with same modular base n is: 
            (p mod n * q mod n) mod n = (p * q) mod n

## Fermat's Little Theorem ##

- If p is prime and 'a' is an integer not divisible by p, then...

        - a^p = a (mod p)
        - a^p-1 = (mod p)
        - Hence, a^p-1 mod p = 1    where, p is prime and GCD (a, p) = 1
- E.g. 8^12 mod 13 = 1 mod 13 = 1
- 8 ^103 mod 103 = 8 mod 103 = 8
- This theorem is useful in public key (RSA) and primality testing.

E.g. Suppose a = 7 and p = 19 then prove Fermat's Little Theorem

a is some integer which is not divisible by p and p is a prime number.
Thus, 7^18 mod 19 = 1

E.g. Compute the value of 12345^23456789 mod 101 using Fermat's Little Theorem

## Euler Totient Function Φ(n) ##

- Φ (n) = how many numbers there are between 1 and n-1 that are relatively prime to n.
- Φ (4) = 2(1,3 are realtively prime to 4)
- Φ (5) = 4(1,2,3,4 are relatively prime to 5)
- Φ (6) = 2(1,5 are relatively prime to 5)
- Φ (7) = 6(1,2,3,4,5,6 are relatively prime to 7)
- This theorem generalizes Fermat's theorem and is animportant key to the RSA algorithm.
-
