Problem URL : https://www.acmicpc.net/problem/1015

Given a sequence P[0], P[1], ..., P[N-1], which includes the numbers from 0 to N-1 (inclusive) exactly once, we can apply sequence P to an array A of length N to obtain a new array B of length N. The application is defined as B[P[i]] = A[i].

Write a program that, given array A, finds a sequence P such that applying P to A results in a non-decreasing sequence. A non-decreasing sequence means that each element is greater than or equal to the element that precedes it. If multiple sequences satisfy this condition, output the lexicographically smallest one.

---
* Input:
  
The first line contains the size of array A, N. The second line contains the elements of array A in order from index 0 to N-1. N is a natural number less than or equal to 50, and the elements of the array are natural numbers less than or equal to 1,000.

---
* Output:
  
Print the sequence P that transforms array A into a non-decreasing sequence.

---
* Example Input/Output:

In:
```
8
4 1 6 1 3 6 1 4
```

Out:
```
4 0 6 1 3 7 2 5
```
