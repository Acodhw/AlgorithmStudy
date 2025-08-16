Problem URL : https://www.acmicpc.net/problem/15649

Given two natural numbers N and M, write a program to generate and print all sequences of length M consisting of distinct numbers selected from the range 1 to N (inclusive).

Each sequence must contain unique numbers (no duplicates).

Sequences should be printed one per line.

Numbers within each sequence must be separated by spaces.

Sequences must be printed in lexicographical (dictionary) order

---
* Input:

A single line containing two integers N and M, where 
1≤𝑀≤𝑁≤8

---
* Output:

Print all possible sequences of length M that meet the conditions above. Each sequence should be on its own line, with no duplicates, and in lexicographical order

---
* Example Input/Output:

In:
```
4 4
```

Out:
```
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2
2 1 3 4
2 1 4 3
2 3 1 4
2 3 4 1
2 4 1 3
2 4 3 1
3 1 2 4
3 1 4 2
3 2 1 4
3 2 4 1
3 4 1 2
3 4 2 1
4 1 2 3
4 1 3 2
4 2 1 3
4 2 3 1
4 3 1 2
4 3 2 1
```