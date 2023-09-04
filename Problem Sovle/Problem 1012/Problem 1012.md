Problem URL : https://www.acmicpc.net/problem/1012

Hanna, a next-generation farmer, decides to cultivate organic cabbage in the highlands of Gangwon Province. Protecting the cabbage from pests is crucial for organic farming, so Hanna decides to purchase ladybugs, which are effective in pest control. These ladybugs inhabit the vicinity of the cabbage and protect it by feeding on pests. In particular, if there is at least one ladybug in a cabbage, it can move to adjacent cabbages, providing protection to those cabbages as well. Cabbages are considered adjacent if they are located in the north, south, east, or west direction of each other.

Since the land where Hanna cultivates cabbage is uneven, she plants them in various locations. By investigating how many groups of adjacent cabbages exist, where each group requires only one ladybug, Hanna can determine the total number of ladybugs needed. For example, in the cabbage field below, a minimum of 5 ladybugs are required. Here, 0 represents unplanted land, and 1 represents a cabbage.

---
* Input:
  
The first line of input contains the number of test cases, T. Each test case is described as follows:

The first line of each test case contains three integers: M (1 ≤ M ≤ 50), the width of the cabbage field; N (1 ≤ N ≤ 50), the height of the cabbage field; and K (1 ≤ K ≤ 2500), the number of cabbages planted. The next K lines contain the coordinates of the cabbages, X (0 ≤ X ≤ M-1), and Y (0 ≤ Y ≤ N-1). There are no duplicate cabbage locations.

---
* Output:
  
For each test case, print the minimum number of ladybugs needed to protect all the cabbages.

---
* Example Input/Output:
```
1
5 3 6
0 2
1 2
2 2
3 2
4 2
4 0
```

Out:
```
2
```
