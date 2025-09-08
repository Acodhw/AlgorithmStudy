
Problem URL : https://www.acmicpc.net/problem/2563

There are two vertical poles, A and B. Electric wires connect points on these poles such that each wire connects one unique position on pole A to one unique position on pole B. The positions along each pole are numbered from top to bottom with natural numbers.

As more wires are added, some wires begin to cross. To avoid electrical hazards, you want to remove as few wires as possible so that no remaining wires cross each other.

<img src="https://upload.acmicpc.net/d90221dd-eb80-419f-bdfb-5dd4ebac23af/-/preview/">

Given the number of wires and the connection points on both poles, determine the minimum number of wires to remove to ensure that the remaining wires do not cross.

---
* Input:

- The first line contains an integer n (1 ≤ n ≤ 100), the number of wires.
- Each of the next n lines contains two integers A and B, indicating a wire connects position A on pole A with position B on pole B. Positions are natural numbers up to 500, and no two wires share the exact same endpoint.

---
* Output:

- Print a single integer: the minimum number of wires that must be removed so that no two remaining wires cross.

---
* Example Input/Output:

In:
```
8
1 8
3 9
2 2
4 1
6 4
10 10
9 7
7 6
```

Out:
```
3
```

---
