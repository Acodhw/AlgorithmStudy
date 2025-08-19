Problem URL : https://www.acmicpc.net/problem/2580

Sudoku is a popular puzzle derived from the "Latin square" concept invented by an 18th-century Swiss mathematician. The game is played on a 9×9 grid (81 cells in total), where some cells are pre-filled with numbers from 1 to 9.

To fill the remaining blank cells, the following rules must be followed:

Each row and each column must contain every number from 1 to 9 exactly once.

Each of the nine 3×3 subgrids (marked by bold lines) must also contain each number from 1 to 9 exactly once. 

In the example:

|   |   |   |   |   |   |   |   |   |
|---|---|---|---|---|---|---|---|---|
| 0 | 3 | 5 | 4 | 6 | 9 | 2 | 7 | 8 |
| 7 | 8 | 2 | 1 | 0 | 5 | 6 | 0 | 9 |
| 0 | 6 | 0 | 2 | 7 | 8 | 1 | 3 | 5 |
| 3 | 2 | 1 | 0 | 4 | 6 | 8 | 9 | 7 |
| 8 | 0 | 4 | 9 | 1 | 3 | 5 | 0 | 6 |
| 5 | 9 | 6 | 8 | 2 | 0 | 4 | 1 | 3 |
| 9 | 1 | 7 | 6 | 5 | 2 | 0 | 8 | 0 |
| 6 | 0 | 3 | 7 | 0 | 1 | 9 | 5 | 2 |
| 2 | 5 | 8 | 3 | 9 | 4 | 7 | 6 | 0 |

In the first row, all numbers except 1 are already present, so the blank must be filled with 1.

|   |   |   |   |   |   |   |   |   |
|---|---|---|---|---|---|---|---|---|
| 0 | 3 | 5 | 4 | 6 | 9 | 2 | 7 | 8 |


In the top-center 3×3 subgrid, all numbers except 3 are present, so the central blank there must be filled with 3.
Following these steps sequentially leads to the completed Sudoku grid.
|   |   |   |
|---|---|---|
| 4 | 6 | 9 |
| 1 | 0 | 5 |
| 2 | 7 | 8 |

Your task is to write a program that, given the initial Sudoku board, fills in all blank cells and outputs the completed board.


|   |   |   |   |   |   |   |   |   |
| - | - | - | - | - | - | - | - | - |
| 1 | 3 | 5 | 4 | 6 | 9 | 2 | 7 | 8 |
| 7 | 8 | 2 | 1 | 3 | 5 | 6 | 4 | 9 |
| 4 | 6 | 9 | 2 | 7 | 8 | 1 | 3 | 5 |
| 3 | 2 | 1 | 5 | 4 | 6 | 8 | 9 | 7 |
| 8 | 7 | 4 | 9 | 1 | 3 | 5 | 2 | 6 |
| 5 | 9 | 6 | 8 | 2 | 7 | 4 | 1 | 3 |
| 9 | 1 | 7 | 6 | 5 | 2 | 3 | 8 | 4 |
| 6 | 4 | 3 | 7 | 8 | 1 | 9 | 5 | 2 |
| 2 | 5 | 8 | 3 | 9 | 4 | 7 | 6 | 1 |


---
* Input:

Nine lines follow, each containing nine integers separated by spaces. These represent the initial Sudoku board. Blank cells are indicated by 0. You may assume that the given Sudoku configuration can always be successfully completed.

---
* Output:

Print the completed Sudoku board in nine lines, each with nine numbers separated by spaces. If there are multiple valid solutions, you may output any one of them.

---
* Example Input/Output:

In:
```
0 3 5 4 6 9 2 7 8
7 8 2 1 0 5 6 0 9
0 6 0 2 7 8 1 3 5
3 2 1 0 4 6 8 9 7
8 0 4 9 1 3 5 0 6
5 9 6 8 2 0 4 1 3
9 1 7 6 5 2 0 8 0
6 0 3 7 0 1 9 5 2
2 5 8 3 9 4 7 6 0
```

Out:
```
1 3 5 4 6 9 2 7 8
7 8 2 1 3 5 6 4 9
4 6 9 2 7 8 1 3 5
3 2 1 5 4 6 8 9 7
8 7 4 9 1 3 5 2 6
5 9 6 8 2 7 4 1 3
9 1 7 6 5 2 3 8 4
6 4 3 7 8 1 9 5 2
2 5 8 3 9 4 7 6 1
```