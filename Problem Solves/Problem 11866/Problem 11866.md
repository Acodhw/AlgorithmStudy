Problem URL : https://www.acmicpc.net/problem/11866

The Josephus problem is a theoretical problem related to a certain counting-out game.

There are **N** people standing in a circle, numbered from 1 to N. Starting from the first person, you count **K** people (including the current one), and the K-th person is removed from the circle.  
Then the counting continues from the next person, and the same rule is applied repeatedly until no one remains.

Your task is to simulate this process and print the order in which people are removed from the circle.

---
* Input:

- The input contains two integers **N** and **K** (1 ≤ K ≤ N ≤ 1,000), separated by a space.

---
* Output:

- Print the Josephus permutation as a list enclosed in angle brackets (`<` and `>`), with numbers separated by a comma and space.
  - For example: `<3, 6, 2, 7, 5, 1, 4>`

---
* Example Input/Output:

In:
```
7 3
```

Out:
```
<3, 6, 2, 7, 5, 1, 4>
```

---
* Example Explanation (Simulation):

| Step | Circle               | Removed |
|------|----------------------|---------|
| 1    | [1, 2, 3, 4, 5, 6, 7] | 3       |
| 2    | [4, 5, 6, 7, 1, 2]    | 6       |
| 3    | [7, 1, 2, 4, 5]       | 2       |
| 4    | [4, 5, 7, 1]          | 7       |
| 5    | [1, 4, 5]             | 5       |
| 6    | [1, 4]                | 1       |
| 7    | [4]                   | 4       |

Final output: `<3, 6, 2, 7, 5, 1, 4>`