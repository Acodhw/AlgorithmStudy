Problem URL : https://www.acmicpc.net/problem/1912

You are given a sequence of n integers. Your goal is to select one or more consecutive elements from this sequence such that the sum of these selected elements is as large as possible. Output the maximum sum that can be obtained.

For the sequence:
10 -4 3 1 5 6 -35 12 21 -1
The maximum continuous subsequence sum is 12 + 21 = 33.

---
* Input:

- The first line contains an integer n (1 ≤ n ≤ 100,000), representing the length of the sequence.

- The second line contains n integers separated by spaces. Each integer aᵢ satisfies −1,000 ≤ aᵢ ≤ 1,000.

---
* Output:

Print a single integer representing the maximum sum obtainable by selecting a consecutive subsequence of length at least one.

---
* Example Input/Output:

In:
```
10
10 -4 3 1 5 6 -35 12 21 -1
```

Out:
```
33
```