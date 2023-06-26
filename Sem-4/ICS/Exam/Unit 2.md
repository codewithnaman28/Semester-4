# Unit 2 #

## 2.1 Eulers Totient Function ##

- &phi;(n) for [n>=1] is defined as the number of integers less than `n` that are coprime to `n`.

&phi;(5) = {1, 2, 3, 4} = 4
&phi;(6) = {1, 5} = 2

- when `n` is a prime number

&phi;(n) = n - 1
&phi;(23) = 23 - 1 = 22

- &phi;(a \* b) = &phi;(a) \* &phi;(b) if a and b are coprime

&phi;(35) = &phi;(7 \* 5) = &phi;(7) \* &phi;(5) = 6 \* 4 = 24

## 2.2 Multiplicative Inverse ##

- x &#8802; 0 mod n ( n is a prime number)

x.y = 1 mod n [`y` is the multiplicative inverse of `x`]
y = x^-1^ mod n

*Example:*
3 &#8802; 0 mod 5
3 * 2 = 1 mod 5
2 = 3^-1^ mod 5
&therefore; `2` is multiplicative inverse of `3`.
&therefore; `2` is multiplicative inverse of `3 mod 5`.

## 2.3 Euler's Theorem ##

- x^&phi;(n)^ = 1 mod n (if x and n are coprime)

*Example:*

x = 4, n = 165
gcd (4, 165) = 1
4^&phi;(165)^ = 1 mod 165
&phi;(165) = &phi;(15) \* &phi;(11) = &phi;(3) \* &phi;(5) \* &phi;(11)= 2 \* 4 \* 10 = 80

## 2.4 Fermat's Theorem ##

- x^n-1^ &equiv; 1 mod n (n is a prime no. and x is not divisible by n)
- `&phi;(n) = n-1` if n is a prime number

*Example:*

x = 3 and n = 5
3^5-1^ = 3^4^ = 81
&therefore; 81 &equiv; 1 mod 5

- x^&phi;(n) + 1^ = x mod n (n is a prime no. and x is not divisible by n)
- x^(n-1) + 1^ = x mod n
- x^n^ = x mod n (gcd(x, n) = 1)

## 2.5 RSA Algorithm ##

- Choose 2 prime nos, p & q. p = 61, q = 53
- Compute: n = p \* q = 61 \* 53 = 3233
- &phi;(n) = &phi;(p \* g) = &phi;(p) \* &phi;(q) = (p-1) \* (q-1) = 60 \* 52 = 3120
- Choose `e`; 1<= e < &phi;(n), coprime to &phi;(n) `e = 17`
- (e, n) = public key (17, 3233)
- Determine `d` as ed &equiv; 1 mod &phi;(n) d = e^-1^ mod &phi;(n) (d is MI of e)
- 17 \* d = 1 mod 3120
- d = 2753
- (d, n) = private key (2753, 3233)
- Finding `d`
$ d = \frac{(3120 *1) + 1}{17} = 183.58 $
$ d = \frac{3120* 2 + 1}{17} = 367.11 $
$ d = \frac{3120*3 + 1}{17} = 550.64 $
$ d = \frac{3120* 4 + 1}{17} = 734.17 $
$ d = \frac{3120*5 + 1}{17} = 917.70 $
$ d = \frac{3120* 6 + 1}{17} = 1101.23 $
$ d = \frac{3120*7 + 1}{17} = 1284.76 $
$ d = \frac{3120* 15 + 1}{17} = 2753 $

## 2.6 Digital Signature ##

