Problem URL : https://www.acmicpc.net/problem/2903

Mirko and Slavko are filming a movie adaptation of the popular SF novel "Chicks in space 13". The script requires them to present a lot of different worlds so they decided to film the entire movie in front of a green screen and add CGI backgrounds later. Mirko heard that the best way to generate artificial terrain is to use midpoint displacement algorithm.

To start the algorithm, Mirko selects 4 points forming a perfect square. He then performs the following steps:

1. On each side of the square, he adds a new point in the exact middle of the side. The height of this new point is the average height of the two points on that side.
2. In the exact center of the square he adds a new point whose height is the average height of all 4 square vertices, plus a small random value.

After those two steps are performed, he now has 4 new squares. He performs the same steps on the newly created squares again and again until he is pleased with the results.

Mirko noticed that some of the points belong to more than one square. In order to decrease memory consumption, he stores calculates and stores such points only once. He now wonders how many points in total will he need to store in memory after N iterations.

---
* Input:
  
The first and only line of input contains one integer N (1 ≤ N ≤ 15), number of iterations

---
* Output:
  
The first and only line of output should contain one number, the number of points stored after N iterations.

---
* Example Input/Output:
* 
In:
```
5
```

Out:
```
1089
```
