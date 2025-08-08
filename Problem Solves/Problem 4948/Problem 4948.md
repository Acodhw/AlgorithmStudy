Problem URL : https://www.acmicpc.net/problem/4948

Given a natural number **n**, your task is to count how many **prime numbers** exist in the range **(n, 2n]** (i.e., greater than n and less than or equal to 2n).

This is related to **Bertrand's postulate**, which states that for any integer \(n > 1\), there is always at least one prime between \(n\) and \(2n\).

---
* Input:

The input consists of multiple test cases. Each line contains a single integer **n** (1 ≤ n ≤ 123,456).  
The input ends when a line with `0` is encountered, which should **not** be processed.

---
* Output:

For each test case, output the count of prime numbers \(p\) such that:
```
n < p ≤ 2n
```

Print each result on its own line.

---
* Example Input/Output:

In:
```
1
10
13
100
1000
10000
100000
0
```

Out:
```
1
4
3
21
135
1033
8392
```