Problem URL : https://www.acmicpc.net/problem/2447

Print stars in a recursive pattern. Given an integer **N**, which is a power of 3 (i.e., $3, 9, 27, \ldots$), the task is to print an $N \times N$ square composed of stars ('\*') and spaces. The basic pattern when $N = 3$ is:

```
***
* *
***
```

For larger $N$, the pattern is formed by surrounding a **center block** of size $(N/3) \times (N/3)$ filled with spaces by eight smaller patterns of size $N/3$. In other words, you divide the $N \times N$ square into a $3 \times 3$ grid of blocks, and:

* Draw the star pattern recursively in every sub-block except the center one,
* Fill the center block with spaces.

---
* Input:

A single integer, **N**, where $N = 3^k$ for some integer $k$, and $1 \le k < 8$. That is, $N$ can be $3, 9, 27, 81, 243, 729, $ or $2187$.

---
* Output:

Print the desired star pattern consisting of $N$ lines, each containing $N$ characters (either '\*' or space).

---
* Example Input/Output:

In:
```
27
```

Out:
```
***************************
* ** ** ** ** ** ** ** ** *
***************************
***   ******   ******   ***
* *   * ** *   * ** *   * *
***   ******   ******   ***
***************************
* ** ** ** ** ** ** ** ** *
***************************
*********         *********
* ** ** *         * ** ** *
*********         *********
***   ***         ***   ***
* *   * *         * *   * *
***   ***         ***   ***
*********         *********
* ** ** *         * ** ** *
*********         *********
***************************
* ** ** ** ** ** ** ** ** *
***************************
***   ******   ******   ***
* *   * ** *   * ** *   * *
***   ******   ******   ***
***************************
* ** ** ** ** ** ** ** ** *
***************************
```
