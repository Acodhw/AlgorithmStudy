
Problem URL : https://www.acmicpc.net/problem/1316

A **group word** is defined as a word where each letter appears consecutively.  
In other words, once a letter stops appearing, it must not appear again later in the word.

For example:
- `ccazzzzbb` is a group word (each letter appears in a consecutive block).
- `aabbbccb` is **not** a group word (the letter `b` appears, then `c`, and then `b` again).

Given N words, your task is to count how many of them are group words.

---
* Input:

- The first line contains an integer **N** (1 ≤ N ≤ 100).
- Each of the next N lines contains a lowercase word (length ≤ 100).

---
* Output:

- Print the number of group words among the given N words.

---
* Example Input/Output:

In:
```
3
happy
new
year
```

Out:
```
3
```
