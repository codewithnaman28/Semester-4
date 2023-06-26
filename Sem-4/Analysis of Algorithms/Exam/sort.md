# Imp Questions #

## Merge Sort ##

1. *The average no of comparison performed by merge sort algorithm in managing 2 sorted lists of length of 2 is:*

*Solution:*

There can be three cases in this:

1. when the first sorted list is: 1,2 and the second sorted list is: 3,4
2. when the first sorted list is: 1,3 and the second sorted list is: 2,4
3. when the first sorted list is: 1,4 and the second sorted list is: 2,3

- Now, for the first case:

1. 1 is compared with 3
now we'll shift the pointer of the first sorted list to 2
2. 2 is compared with 3
now 3 and 4 will be copied to the new list

The total no. of comaparisions performed in this case is 2.

- Now, for the second case:

1. 1 is compared with 2
now we'll shift the pointer of the first sorted list to 3
2. 3 is compared with 2
we'll add 2 to the new list
3. 3 is compared with 4
now 3 and 4 will be copied to the new list

The total no. of comaparisions performed in this case is 3.

- Now, for the third case:

1. 1 is compared with 2
now we'll shift the pointer of the first sorted list to 4
2. 4 is compared with 2
we'll add 2 to the new list
3. 4 is compared with 3
we'll add 3 to the new list and 4 will also be added to the new list

The total no. of comaparisions performed in this case is 3.

Now, to calculate the average no. of comparisons the fromula is $\frac{m + n -1}{no. of cases}$ where m and n are the length of the two sorted lists.

So, the average no. of comparisons performed by the merge sort algorithm is $\frac{2 + 3 + 3 = 8}{3}$ which is equal to 2.67.

## Heap ##

*Consider a binary max-heap iplemented using an array. Which of the following array represents a binary max-heap?*

- 25, 12, 16, 13, 10, 8, 14
- 25, 14, 13, 16, 10, 8, 12
- 25, 14, 16, 13, 10, 8, 12
- 25, 14, 12, 16, 10, 8, 13

*Solution:*

For the first option:

- 25 is the root node
- 12 and 16 are the children of 25
- 13 and 10 are the children of 12
- 8 and 14 are the children of 16
- This is not a max-heap as 14 is the child of 16 and 16 is the child of 25
- So, this option is incorrect

For the second option:

- 25 is the root node
- 14 and 13 are the children of 25
- 16 and 10 are the children of 14
- 8 and 12 are the children of 13
- This is not a max-heap as 16 is the child of 14 and 14 is the child of 25

For the third option:

- 25 is the root node
- 14 and 16 are the children of 25
- 13 and 10 are the children of 14
- 8 and 12 are the children of 16
- This is a max-heap as 16 is the child of 25 and 14 is the child of 25

For the fourth option:

- 25 is the root node
- 14 and 12 are the children of 25
- 16 and 10 are the children of 14
- 8 and 13 are the children of 12
- This is not a max-heap as 13 is the child of 12 and 12 is the child of 25

So, the correct option is option 3.

*What is the content of array after 2 delete operations on correct answer of the earlier question:*

*Solution:*

Performing the first delete operation:

- 25 is the root node
- 14 and 16 are the children of 25
- 13 and 10 are the children of 14
- 8 and 12 are the children of 16
- After deleting 25, 16 will be the root node
- 14 and 12 will be the children of 16
- 13 and 10 will be the children of 14
- 8 will be the child of 12
- So, the array will be 16, 14, 12, 13, 10, 8

Performing the second delete operation:

- 16 is the root node
- 14 and 12 are the children of 16
- 13 and 10 are the children of 14
- 8 is the child of 12
- After deleting 16, 14 will be the root node
- 12 and 8 will be the children of 14
- 13 and 10 will be the children of 12
- So, the array will be 14, 12, 8, 13, 10
- This is the correct answer

