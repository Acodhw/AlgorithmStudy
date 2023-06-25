Problem URL : https://www.acmicpc.net/problem/1007

There are N points on a plane, and let's call these points set P. The vector matching of set P is a set of vectors where each vector starts at one point in set P and ends at another point in set P. Additionally, every point in P must be used exactly once.

The number of vectors in the vector matching is half the number of points in P.

Given the points on a plane, write a program to find the minimum length of the sum of vectors in the vector matching of set P.

---
* Input:
  
The first line of input contains the number of test cases, T. Each test case is formatted as follows:

The first line of each test case contains the number of points, N. N is an even number. The following N lines contain the coordinates of the points. N is a natural number less than or equal to 20, and the coordinates are integers with absolute values less than or equal to 100,000. All points are distinct.

---
* Output:
  
For each test case, print the answer. An absolute/relative error up to 10^(-6) is allowed.

---
* Example Input/Output:
```
1
10
26 -76
65 -83
78 38
92 22
-60 -42
-27 85
42 46
-86 98
92 -47
-41 38
```

Out:
```
13.341664064126334
```
