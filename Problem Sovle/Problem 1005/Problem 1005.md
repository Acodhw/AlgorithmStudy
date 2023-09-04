Problem URL : https://www.acmicpc.net/problem/1005

In the year 2012, the game ACM Craft (Association of Construction Manager Craft) was finally released after keeping numerous citizens waiting for two years.

Unlike previous games, ACM Craft has a dynamic gameplay where the order of building construction is not fixed. In other words, the construction order can be different for each game. At the start of each game, the construction order of buildings is given. Additionally, each building has a delay until its construction is completed.

Let's consider the following example:

In this game, the construction order is as follows: After the completion of building 1, construction can begin for buildings 2 and 3 simultaneously. Building 4 can only be constructed when both buildings 2 and 3 are completed.

To complete the construction of building 4, we first start by constructing building 1, which takes 10 seconds. Then, if we begin constructing buildings 2 and 3 simultaneously, building 2 will be completed after 1 second, but building 3 will not be completed yet, preventing us from starting the construction of building 4. Once building 3 is completed, we can begin constructing building 4. Therefore, it takes a total of 120 seconds for building 4 to be completed.

Pro gamer Choi Baekjoon participated in the ACM Craft tournament at Sogang University to earn money for a date with his significant other! Since Choi Baekjoon has excellent control skills, he can win every game if he focuses on constructing a specific building. However, the construction order for the specific building changes in each game, which has been causing frustration for Choi Baekjoon. Let's write a program to help Choi Baekjoon find the minimum time required to construct the specific building.

---
* Input:
* 
The first line of input contains the number of test cases, T. Each test case is described as follows:


The first line of each test case contains the number of buildings, N, and the total number of construction order rules, K. (The building numbers range from 1 to N)

The second line contains the time required for each building's construction, D1, D2, ..., DN, separated by spaces.

From the third line to the K+2 line, the construction order rules X Y are given. (This means that building X can be constructed before building Y)

The last line contains the number W of the building Choi Baekjoon needs to construct to win.

---
* Output:

Print the minimum time required to complete the construction of building W. For convenience, it is assumed that no time is required to give construction commands.


The construction order allows all buildings to be constructible.

---
* Constraints:
1. 2 ≤ N ≤ 1000
2. 1 ≤ K ≤ 100,000
3. 1 ≤ X, Y, W ≤ N
4. 0 ≤ Di ≤ 100,000 (Di is an integer)

---
* Example Input/Output

In:
```
5
3 2
1 2 3
3 2
2 1
1
4 3
5 5 5 5
1 2
1 3
2 3
4
5 10
100000 99999 99997 99994 99990
4 5
3 5
3 4
2 5
2 4
2 3
1 5
1 4
1 3
1 2
4
4 3
1 1 1 1
1 2
3 2
1 4
4
7 8
0 0 0 0 0 0 0
1 2
1 3
2 4
3 4
4 5
4 6
5 7
6 7
7
```
Out:
```
6
5
399990
2
0
```
