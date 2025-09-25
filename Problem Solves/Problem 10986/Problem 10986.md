Problem URL : https://www.acmicpc.net/problem/10986

You are given **N** integers $A_1, A_2, \dots, A_N$. Count the number of pairs $(i, j)$ with $1 \le i \le j \le N$ such that the sum of elements from $A_i$ to $A_j$ (inclusive) is divisible by **M**.

In other words, count how many contiguous subarrays have a sum that is a multiple of **M**.


---
* Input:

* The first line contains two integers **N** and **M**, with
  $1 \le N \le 10^6,\; 2 \le M \le 10^3$. ([ACM ICPC][1])
* The second line contains **N** integers $A_1, A_2, \dots, A_N$, each satisfying $0 \le A_i \le 10^9$.

---
* Output:

* Print a single integer: the number of contiguous subarrays whose sum is divisible by **M**.

---
* Example Input/Output:

In:
```
5 3
1 2 3 1 2
```

Out:
```
7
```

