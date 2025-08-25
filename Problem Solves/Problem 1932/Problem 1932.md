Problem URL : https://www.acmicpc.net/problem/1932

```
        7
      3   8
    8   1   0
  2   7   4   4
4   5   2   6   5 (Figure 1)
```

Figure 1 shows a number triangle. Write a program that calculates the highest sum of numbers passed on a route that starts at the top and ends somewhere on the base.

- Each step can go either diagonally down to the left or diagonally down to the right.
- The number of rows in the triangle is ≥ 1 but ≤ 500.
- The numbers in the triangle, all integers, are between 0 and 9999 (inclusive).

---
* Input:

Data about the number of rows in the triangle are first read from the input.

---
* Output:

The highest sum is written as an integer in the output.

---
* Example Input/Output:

In:
```
5
7
3 8
8 1 0
2 7 4 4
4 5 2 6 5
```

Out:
```
30
```