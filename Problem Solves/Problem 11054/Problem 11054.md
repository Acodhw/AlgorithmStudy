Problem URL : https://www.acmicpc.net/problem/11478

Given a sequence **A** of **N** integers, find the length of the longest *bitonic subsequence*. A bitonic subsequence is defined as a subsequence that first strictly increases and then strictly decreases, with a single peak element $S_k$. In other words:

$$
S_1 < S_2 < \dots < S_{k-1} < S_k > S_{k+1} > \dots > S_m
$$

Both purely increasing or purely decreasing subsequences are also considered bitonic.

---
* Input:

- First line: integer **N** (1 ≤ N ≤ 1,000), the length of the sequence.
- Second line: **N** space-separated integers **A₁, A₂, …, Aₙ** (each $1 \leq A_i \leq 1,000$).

---
* Output:

- Print a single integer — the length of the longest bitonic subsequence in **A**.

---
* Example:

In:
```
10
1 5 2 1 4 3 4 5 2 1
```

Out:
```
7
```