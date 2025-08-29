Problem URL : https://www.acmicpc.net/problem/2156

Hyoju attends a wine tasting event where n glasses of wine are arranged in a row, numbered from 1 to n. Each wine glass contains a certain amount of wine. She wants to taste as much wine as possible, but with the following rules:

If she chooses to drink from a glass, she must drink all the wine in it and place the glass back in its original position.

She cannot drink from three consecutive glasses.

Given the amount of wine in each of the n glasses, write a program to determine the maximum total amount of wine she can drink.

---
* Input:

- The first line contains an integer n (1 ≤ n ≤ 10,000), the number of wine glasses.
- Each of the next n lines contains an integer representing the amount of wine in each glass, in order. Each amount is a non-negative integer not exceeding 1,000.

---
* Output:

Print a single integer: the maximum amount of wine Hyoju can drink under the given constraints.

---
* Example Input/Output:

In:
```
6
6
10
13
9
8
1
```

Out:
```
33
```