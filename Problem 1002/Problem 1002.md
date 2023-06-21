Problem URL : https://www.acmicpc.net/problem/1002

Cho Gyu-hyun and Baek Seung-hwan are employees working at a turret. However, they have such a low presence that they don't contribute to the population count. The following are pictures of Cho Gyu-hyun and Baek Seung-hwan.

Lee Seok-won has ordered Cho Gyu-hyun and Baek Seung-hwan to calculate the position of the opposing marine (Ryu Jae-myeong). Cho Gyu-hyun and Baek Seung-hwan each calculated the distance from their respective turret positions to the current enemy.

Given the coordinates (x1, y1) of Cho Gyu-hyun and (x2, y2) of Baek Seung-hwan, as well as the distances r1 between Cho Gyu-hyun and Ryu Jae-myeong, and r2 between Baek Seung-hwan and Ryu Jae-myeong, write a program to determine the number of possible coordinates where Ryu Jae-myeong could be.

---
* Input:

The first line contains the number of test cases, T. Each test case consists of the following:

One line containing x1, y1, r1, x2, y2, r2. x1, y1, x2, y2 are integers between -10,000 and 10,000 (inclusive), and r1, r2 are non-negative integers less than or equal to 10,000.

---
* Output:

For each test case, print the number of possible positions where Ryu Jae-myeong could be. If the number of possible positions is infinite, print -1.

---
* Example Input/Output

in : 
```
3 
0 0 13 40 0 ​​37 
0 0 3 0 7 4 
1 1 1 1 1 1 5
```

out : 
```
2 
1 
0
```
