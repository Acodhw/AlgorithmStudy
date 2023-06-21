Problem URL : https://www.acmicpc.net/problem/1004

The Little Prince lives on asteroid B-664, living for a single rose that he loves. One day, when he discovers that the rose is in danger, the Little Prince starts a long journey along the Milky Way to save the rose. However, his spaceship is not in the best condition, so he needs to avoid planetary systems as much as possible during his travels. The image below represents a partial map of the Milky Way that the Little Prince unfolds.

The red solid line represents the path that minimizes the number of planetary system entries/exits for the Little Prince to reach the destination from the starting point. The circles represent the boundaries of the planetary systems. Multiple paths like this can exist, but it is evident that at least three planetary system entries/exits are necessary.

Given the Milky Way map, the starting point, and the destination, your task is to write a program that calculates the minimum number of planetary system entries/exits required for the Little Prince. The boundaries of the planetary systems will not overlap or intersect. Additionally, the starting point and destination will not lie on the boundary of any planetary system.

---
* Input:

The first line of input contains the number of test cases, T. Each test case is described as follows:


The first line of each test case contains the coordinates of the starting point (x1, y1) and the destination point (x2, y2).

The second line contains the number of planetary systems, n.

The following n lines describe the planetary systems, each line containing the coordinates of the center (cx, cy) and the radius (r).

---
* Output:

For each test case, print the minimum number of planetary system entries/exits the Little Prince must go through.

---
* Constraints:
1. -1000 ≤ x1, y1, x2, y2, cx, cy ≤ 1000
2. 1 ≤ r ≤ 1000
3. 1 ≤ n ≤ 50
4. All coordinates and radii are integers.

---
* Example Input/Output:
In :
```
2
-5 1 12 1
7
1 1 8
-3 -1 1
2 2 2
5 5 1
-4 5 1
12 1 1
12 1 2
-5 1 5 1
1
0 0 2
```
Out : 
```
3
0
```
