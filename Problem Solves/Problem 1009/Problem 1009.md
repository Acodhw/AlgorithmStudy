Problem URL : https://www.acmicpc.net/problem/1006

Jaeyong has 10 latest computers. One day, Jaeyong needs to process a large amount of data. He assigns numbers from 1 to 10 to each computer and decides to process the data on these 10 computers using the following method:

1. Data 1 is processed on Computer 1, Data 2 on Computer 2, Data 3 on Computer 3, and so on.

2. Data 10 is processed on Computer 10, Data 11 on Computer 1, Data 12 on Computer 2, and so on.

The total number of data is always given in the form of ab. Jaeyong suddenly becomes curious about the number of the computer on which the last data will be processed. Write a program to solve this problem.

---
* Input:
  
The first line of input contains the number of test cases, T. Each test case is described on a separate line and consists of two integers, a and b. (1 ≤ a < 100, 1 ≤ b < 1,000,000)

---
* Output:
  
For each test case, print the number of the computer on which the last data will be processed.

---
* Example Input/Output:
```
5
1 6
3 7
6 2
7 100
9 635
```

Out:
```
1
7
6
1
9
```

