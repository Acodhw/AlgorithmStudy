Problem URL : https://www.acmicpc.net/problem/2903

Every morning at 9 AM the temperature is measured, producing an integer sequence over N days. You want to find the largest sum of temperatures over K consecutive days.

<img src="https://upload.acmicpc.net/563b6bfd-12ff-4275-a869-90fdd43b6deb/-/preview/">
In Example 1, with 𝐾=2, you look at all pairs of 2 consecutive days, compute their sums, and the largest sum among them is 21. That occurs for days 8-9 (temperatures 13+8). 

<img src="https://upload.acmicpc.net/cb8d846c-2f90-475a-8901-1fb69de87397/-/preview/">
In Example 2, with 𝐾=5, you look at all sums of 5 consecutive days. The maximum of those sums is 31.

---
* Input:
  
The first and only line of input contains one integer N (1 ≤ N ≤ 15), number of iterations

---
* Output:
  
The first and only line of output should contain one number, the number of points stored after N iterations.

---
* Example Input/Output:
* 
In:
```
10 2
3 -2 -4 -9 0 3 7 13 8 -3
```

Out:
```
21
```
