Problem URL : https://www.acmicpc.net/problem/14425

You are given a set of **N strings** and asked to check how many strings from a second list of **M strings** exist in the original set.

---
* Input:

1. The first line contains two integers **N** and **M** (1 ≤ N, M ≤ 10,000).
2. The next **N lines** each contain a string — the strings that make up the original set **S**.
3. The following **M lines** each contain a string — these are the query strings.

Each string consists only of lowercase English letters and has a length of at most 500.

---
* Output:

- Print a single integer — the number of strings from the second list that appear in the original set **S**.

---
* Example Input/Output:

In:
```
5 11
baekjoon
startlink
codeplus
sundaycoding
codingsh
baekjoon
codeplus
codeminus
startlink
starlink
sundaycoding
codingsh
codinghs
```

Out:
```
5
```