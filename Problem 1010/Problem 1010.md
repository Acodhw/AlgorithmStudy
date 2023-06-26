Problem URL : https://www.acmicpc.net/problem/1010

Jaewon has become the mayor of a city. In this city, there is a large straight river that divides the city into the east and west. However, Jaewon realizes that the citizens are facing great inconvenience in crossing the river due to the lack of bridges. Determined to solve this issue, Jaewon decides to build bridges. The suitable locations for building bridges along the river are called sites. After conducting a thorough survey of the river area, Jaewon discovers that there are N sites on the west side of the river and M sites on the east side of the river. (N ≤ M)

Jaewon wants to connect the sites on the west side with the sites on the east side using bridges. (Each site can have at most one bridge connected to it.) Since Jaewon wants to build as many bridges as possible, he plans to build N bridges, which is the same as the number of sites on the west side. It is important to note that the bridges cannot overlap. Write a program to calculate the number of possible ways to build the bridges under the given conditions.

---
* Input:
  
The first line of input contains the number of test cases, T. Each test case is described on a separate line and consists of two integers, N and M, representing the number of sites on the west side and the number of sites on the east side, respectively. (0 < N ≤ M < 30)

---
* Output:
  
For each test case, print the number of possible ways to build the bridges under the given conditions.

---
* Example Input/Output:
```
3
2 2
1 5
13 29
```

Out:
```
1
5
67863915
```
