# Unit 1 Analysis of Algorithms #

## Divide and Conquer ##

Control Abstraction

    ```
    DANDC (P)
    {
        if SMALL (P) then return S (p);
        else
        {
            divide p into smaller instances p1, p2,...Pk, k>=1;
            apply DANDC to each of these sub problems;
            return (COMBINE (DANDC (p1), DANDC (P2),...,DANDC (pk)));
        }
    }
    ```
Time Complexity of the general algorithm

    A recurrence is an equation or inequality that describes a function in terms of its value on smaller inputs.
    Special techniques are required to analyze the space and time required.
    Time Complexity (recurrence relation):
    where D(n): time for splitting 
    C(n): time for conquer
    c: a constant

Methods for Solving recurrences

    Substitution Method: We guess a bound and then use mathematical induction method

Math you need to Review

    log_b (xy) = log_b(x) + log_b(y)
