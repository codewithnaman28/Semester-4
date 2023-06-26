# Analysis of ALgorithm #

## 1. Recurrence Relation ##

### 1.1. Definition ###

A `recurrence relation` is an equation that recursively defines a sequence or multidimensional array of values, once one or more initial terms are given: each further term of the sequence or array is defined as a function of the preceding terms.

### 1.2. Example ###

We are given a binary search algorithm:

```c++
BS(a, i, j, k)
    mid = (i + j) / 2
    if a[mid] = k then return mid
    if i >= j then return -1
    if k < a[mid] then return BS(a, i, mid - 1, k)
    else return BS(a, mid + 1, j, k)
```

In this algorithm,

- `a` is an array of integers
- `i` is the lower bound of the array
- `j` is the upper bound of the array
- `k` is the key to be searched

The recurrence relation for this algorithm is:

$$T(n) = T(n/2) + C$$

Where $C$ is a constant.

## 1.3. Solving Recurrence Relations ##

There are two methods to solve recurrence relations:

1. Substitution Method
2. Recursion Tree Method

### 1.3.1. Substitution Method ###

$ T(n) = T(n/2) + C $ if n>1

This is the recurrence relation for the binary search algorithm given to us and we have to solve it using the substitution method.

$ T(n) = T(n/2) + C $
$ T(n/2) = T(n/4) + C $
$ T(n/4) = T(n/8) + C $

We can see that the function is decrementing by a factor of 2. So, we can write:

$ T(n) = T(n/2^2) + 2C $
$ T(n) = T(n/2^3) + 3C $

This is where we can find the iteration pattern. We can write:

$ T(n) = T(n/2^k) + kC $

Now, to get n = 1, we can write:

$ n = 2^k $
$ T(n) = T(n/2^k) + kC $

where we can cancel out the $n/2^k$ term as they are equal so we get:

$ T(n) = T(1) + kC $

Now to calculate the value of k, we can write:

$ n = 2^k $
$ log(n) = log(2^k) $
$ log(n) = klog(2) $
$ k = log(n) $

Now, we can write:

$\frac{1 + kC}{1 + lognC}$

&therefore; time complexity of binary search algorithm is $O(logn)$

**Example:**

*Question:*
$T(n) = 1  if n = 1$
$T(n) = n*T(n-1) if n > 1$

*Solution:*
$T(n) = n*T(n-1)$

Now, solving it using the substitution method:

$T(n) = n*T(n-1)$   -1
$T(n-1) = (n-1)*T(n-2)$ -2
$T(n-2) = (n-2)*T(n-3)$ -3

Now, substituting 2 and 3 in 1

$ T(n) = n*(n-1)*(n-2)*T(n-3)$

Now, we'll take it to n-1 steps:

$ T(n) = n*(n-1)*(n-2)*...*3*2*T(1)$

Now, taking n common from the above equation:

$n *n(1 - \frac{1}{n})* n(1 - \frac{2}{n}) *...* n(1 - \frac{3}{n}) *n(1 - \frac{2}{n})* n(1 - \frac{1}{n}) * T(1)$

Now, we can see that the terms in the bracket are tending to 1 as n tends to infinity. So, we can write:

$T(n) = n! * T(1)$

Now, we can see that the time complexity of the above equation is $O(n!)$


### 1.3.2. using backward substitution ###

$T(n) = 1 if n = 1 $
$T(n) = 2T(n/2) + n$

Now, solving it using backward substitution:

$T(n) = 2T(n/2) + n$     -1
$ T(n/2) = 2T(n/4) + n/2 $  -2
$ T(n/4) = 2T(n/8) + n/4 $  -3

Now, substituting 2 in 1:

$T(n) = 2^2T(n/2^2) +2n$
