Problem URL : https://www.acmicpc.net/problem/24511

Mirko is experimenting with a data structure made up of **N connected containers**.  
Each container behaves as either a **stack** (Last-In-First-Out, LIFO) or a **queue** (First-In-First-Out, FIFO).  
The containers are arranged in a sequence, and values pass through them from the **last to the first**.

Each container contains **one initial value**, and new values can only be inserted at the end (N-th container).  
When a new value is inserted, it **passes backward** through the containers, possibly being transformed depending on the behavior of each container.

However, only **queue-type containers** actually allow values to pass through.  
Stack-type containers **ignore** inserted values and always return their original initial value.

---

* Core Passing Process:

The exact process of how a value passes through the data structure is as follows:

- Let `x₀` be the input value.
- Insert `x₀` into the N-th container. Then immediately pop a value from the same container. Let the popped value be `x₁`.
- Insert `x₁` into the (N−1)-th container. Then pop from it. Let the result be `x₂`.
- Repeat this process:
  - Insert `xᵢ` into the (N−i)-th container, pop the result as `xᵢ₊₁`.
- Continue until the value reaches the 1st container.
- Return `xₙ` as the final result.

This simulates a value moving from the last container to the first, passing through each one and being potentially transformed.

---

* Input:

1. The first line contains an integer **N** (1 ≤ N ≤ 100,000) — the number of containers.
2. The second line contains **N integers**:
   - Each integer is either `0` (queue-type) or `1` (stack-type).
3. The third line contains **N integers** — the initial values for the containers.
4. The fourth line contains an integer **M** (1 ≤ M ≤ 100,000) — the number of values to be passed through the system.
5. The fifth line contains **M integers** — the values to be inserted into the N-th container.

---

* Output:

- Print **M integers**, separated by spaces.
- Each number represents the final output value (`xₙ`) of the process described above for each input value.

---

* Example Input/Output:

In:
```
4
0 1 1 0
1 2 3 4
3
2 4 7
```

Out:
```
4 1 2
```
