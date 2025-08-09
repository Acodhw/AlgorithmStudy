Problem URL : https://www.acmicpc.net/problem/13909

You have **N windows** initially closed. There are **N people** numbered from 1 to N.  
- The 1st person toggles (open ↔ close) every window numbered as a multiple of 1.  
- The 2nd person toggles every window numbered as a multiple of 2.  
- This continues up to the N-th person, who toggles windows numbered as multiples of N.

- Initial state: all closed → `[0, 0, 0]` (0 = closed, 1 = open)
- 1st person toggles windows 1, 2, 3 → `[1, 1, 1]`
- 2nd person toggles windows 2 → `[1, 0, 1]`
- 3rd person toggles window 3 → `[1, 0, 0]`
- Only window 1 remains open → result is **1**.

After all N people have performed the action, determine how many windows remain open.

---
* Input:

- A single integer **N** (1 ≤ N ≤ 2,100,000,000).

---
* Output:

- Print one integer: the number of windows that remain open after all toggle operations.

---
* Example:

In:
```
3
```

Out:
```
1
```
