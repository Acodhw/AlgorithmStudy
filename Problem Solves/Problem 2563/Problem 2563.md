
Problem URL : https://www.acmicpc.net/problem/2563

Mirko is decorating a large white board of size 100 × 100 using black square papers, each of size 10 × 10.  
Whenever he pastes a black square paper onto the board, it covers that 10 × 10 area.  
If some parts of the black papers overlap, they still count only once as covered area.

Given the positions where the black papers are pasted, calculate the **total black-covered area** on the white board.

---
* Input:

- The first line contains an integer **N** (1 ≤ N ≤ 100), the number of black papers.
- The next **N** lines each contain two integers **x** and **y** (0 ≤ x, y ≤ 90), representing the coordinate of the **bottom-left corner** of the black paper.

---
* Output:

- Print the total area of the board covered by black papers.

---
* Example Input/Output:

In:
```
3
3 7
15 7
5 2
```

Out:
```
260
```

---
