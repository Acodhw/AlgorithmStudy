Problem URL : https://www.acmicpc.net/problem/24511

Mirko is experimenting with data structures and has prepared a sequence of **N** containers.  
Each container functions either as:
- A **stack** (Last-In-First-Out), or  
- A **queue** (First-In-First-Out).

The containers are connected sequentially, and data is inserted through the last container and exits through the first.

Each container either **reverses** the order of data or **keeps it** depending on its type.

Given the type and initial content of each container, and a list of incoming values, simulate and print the values that come out of the first container after passing through the system.

---
* Input:

1. The first line contains an integer **N** (1 ≤ N ≤ 100,000) — the number of containers.
2. The second line contains N integers:
   - `0` for queue-like containers
   - `1` for stack-like containers
3. The third line contains N integers, the initial data in each container.
4. The fourth line contains an integer **M** (1 ≤ M ≤ 100,000) — the number of new input values.
5. The fifth line contains M integers — the values to be inserted through the last container.

---
* Output:

- Print M space-separated integers — the values that come out of the **first container** after simulation.

---
* Example Input/Output:

In:
```
5
0 1 0 1 0
1 2 3 4 5
2
100 200
```

Out:
```
3 1
```

---
* Explanation Table (Container Setup):

| Index | Type (0=Queue, 1=Stack) | Initial Value |
|-------|-------------------------|----------------|
| 1     | Queue                   | 1              |
| 2     | Stack                   | 2              |
| 3     | Queue                   | 3              |
| 4     | Stack                   | 4              |
| 5     | Queue                   | 5              |

New values (`100`, `200`) are inserted from the last container (index 5) and passed in reverse if stack, or as-is if queue.  
Final output values are what emerge from the first container after passing through the system.