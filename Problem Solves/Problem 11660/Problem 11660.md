Problem URL : https://www.acmicpc.net/problem/11660

You are given an 𝑁×𝑁grid of integers.
Afterward, you will be asked to answer 𝑀 queries.

|   |   |   |   |
| - | - | - | - |
| 1 | 2 | 3 | 4 |
| 2 | 3 | 4 | 5 |
| 3 | 4 | 5 | 6 |
| 4 | 5 | 6 | 7 |


Each query gives four integers (𝑥1,𝑦1,𝑥2,𝑦2), which represent the coordinates of the top-left corner 
(𝑥1,𝑦1)
(x1	​,y1) and the bottom-right corner (𝑥2,𝑦2)  of a sub-rectangle within the grid.

Your task is to compute the sum of all numbers contained in that sub-rectangle.
---
* Input:

- The first line contains two integers **N** and **M**.
  * $1 \leq N \leq 1024$
  * $1 \leq M \leq 100,\!000$

- The next **N lines** each contain **N integers**: the elements of the grid.
  * Each integer is between $-1000$ and $1000$.

- The following **M lines** each contain four integers $x_1, y_1, x_2, y_2$.
  * $1 \leq x_1 \leq x_2 \leq N$
  
---
* Output:

- For each query, print the sum of the numbers inside the specified rectangle.


---
* Example Input/Output:

In:
```
4 2
1 2 3 4
2 3 4 5
3 4 5 6
4 5 6 7
2 2 3 4
3 4 4 4
```

Out:
```
27
6
64
```
