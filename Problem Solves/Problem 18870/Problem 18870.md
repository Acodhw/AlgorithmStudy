Problem URL : https://www.acmicpc.net/problem/18870

Given a list of **N integers**, your task is to **compress** their coordinates.

Coordinate compression means replacing each number with its **relative ranking** among all unique values in the list.  
Specifically, for each number, you must count how many **distinct numbers** are strictly less than it.

For example:
- In the list `[2, 4, -10, 4, -9]`, the unique sorted values are `[-10, -9, 2, 4]`.
- The rankings (starting from 0) are:
  - `-10` → 0
  - `-9` → 1
  - `2` → 2
  - `4` → 3
- The compressed list becomes `[2, 3, 0, 3, 1]`.

---
* Input:

1. The first line contains an integer **N** (1 ≤ N ≤ 1,000,000) — the number of values.
2. The second line contains **N space-separated integers** `x₁, x₂, ..., xₙ`,  
   where each `xᵢ` satisfies: −10⁹ ≤ xᵢ ≤ 10⁹.

---
* Output:

- Print **N space-separated integers** — the compressed coordinate of each number in the same order as input.

---
* Example Input/Output:

In:
```
5
2 4 -10 4 -9
```

Out:
```
2 3 0 3 1
```

---
* Explanation (Coordinate Compression Process):

| Original Value | Sorted Unique Values | Rank (Compressed Value) |
|----------------|----------------------|--------------------------|
| -10            | -10                  | 0                        |
| -9             | -9                   | 1                        |
| 2              | 2                    | 2                        |
| 4              | 4                    | 3                        |

We replace each original number with its corresponding rank from the table above.

Final compressed output: `[2, 3, 0, 3, 1]`