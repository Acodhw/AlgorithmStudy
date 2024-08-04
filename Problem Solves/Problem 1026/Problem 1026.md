Problem URL : https://www.acmicpc.net/problem/1024

Once upon a time, in a country where mathematics was always a major headache, the king, Kim Ji-min, proposed a problem with a large reward.

Given two integer arrays A and B of length N, define the function S as follows:

S=A[0]×B[0]+A[1]×B[1]+…+A[N−1]×B[N−1]

Rearrange the numbers in A to make the value of S as small as possible. The numbers in B must not be rearranged.

Write a program that outputs the minimum value of S.

---
* Input:
  
The first line contains N, the length of the arrays A and B.

The second line contains N integers representing the elements of array A.

The third line contains N integers representing the elements of array B.

---
* Output:
  
Print the minimum value of S on the first line.

---
* Example Input/Output:

In:
```
9
5 15 100 31 39 0 0 3 26
11 12 13 2 3 4 5 9 1
```

Out:
```
528
```
