Problem URL : https://www.acmicpc.net/problem/12789

At a school event, students are standing in a line to receive snacks. The students are numbered from 1 to N, but they are not standing in numerical order.

The snack distributor wants to serve them in the correct order: from 1 to N.

To help with this, a **side waiting line** is used (acting like a stack). The rules are:
- If the front student has the next number in sequence, they get the snack.
- Otherwise, they can wait in the side line.
- Students can only wait or leave the side line in **stack order** (last in, first out).

Determine whether **all students** can receive their snacks in order from 1 to N using this system.

---
* Input:

- The first line contains an integer **N** (1 ≤ N ≤ 1,000), the number of students.
- The second line contains **N integers**, representing the current order of students in line. All numbers from 1 to N appear exactly once.

---
* Output:

- If it's possible to serve all students in the correct order using the side line, print:
  ```
  Nice
  ```
- Otherwise, print:
  ```
  Sad
  ```

---
* Example Input/Output:

In:
```
5
5 4 1 3 2
```

Out:
```
Nice
```

---
* Example Explanation (Simulation):

| Step | Main Line     | Side Line | Next Expected | Action         |
|------|---------------|-----------|----------------|----------------|
| 1    | 5 4 1 3 2     |           | 1              | 5 → side       |
| 2    | 4 1 3 2       | 5         | 1              | 4 → side       |
| 3    | 1 3 2         | 5 4       | 1              | 1 → served     |
| 4    | 3 2           | 5 4       | 2              | 3 → side       |
| 5    | 2             | 5 4 3     | 2              | 2 → served     |
| 6    |               | 5 4 3     | 3              | 3 → served     |
| 7    |               | 5 4       | 4              | 4 → served     |
| 8    |               | 5         | 5              | 5 → served     |

All students served in correct order → `Nice`
```