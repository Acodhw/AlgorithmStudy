Problem URL : https://www.acmicpc.net/problem/20920

You're given **N** words, and you must filter and sort them according to specific criteria:

**Criteria:**
1. Only consider words whose length is **at least M**.
2. Sort the filtered words by:
   - **Frequency** (descending)
   - **Length** (descending)
   - **Lexicographical order** (ascending)

Print the resulting words, one per line.

---
* Input:

1. The first line contains two integers **N** and **M** (1 ≤ N ≤ 100,000, 1 ≤ M ≤ 10).
2. The next **N lines** each contain a word (lowercase English letters only, length ≤ 10).

---
* Output:

- Print each qualifying word (length ≥ M) exactly once, in the sorted order based on the criteria above.

---
* Example Input/Output:

In:
```
7 4
apple
ant
banana
apple
banana
grape
pear
```

Out:
```
banana
apple
grape
pear
```