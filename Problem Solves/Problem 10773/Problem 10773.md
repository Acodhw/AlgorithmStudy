Problem URL : https://www.acmicpc.net/problem/10773

Mirko is doing financial accounting using a stack.  
Each time he receives a number:
- If the number is **not zero**, he **pushes** it onto a stack.
- If the number is **zero**, he **removes (pops)** the most recent number from the stack.

After processing all numbers, he calculates the **sum of the remaining numbers** in the stack.

---
* Input:

- The first line contains an integer **K** (1 ≤ K ≤ 100,000), the number of operations.
- The following **K** lines each contain an integer:
  - A non-zero integer **X** (1 ≤ X ≤ 100,000): push X onto the stack.
  - A **0**: pop the most recent number from the stack.

---
* Output:

- Print the sum of the numbers left in the stack after all operations.

---
* Example Input/Output:

In:
```

4
3
0
4
0

```

Out:
```

0

```

