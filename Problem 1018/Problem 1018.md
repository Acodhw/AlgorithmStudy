Problem URL : https://www.acmicpc.net/problem/1018

Jimin found a board in his mansion that consists of MN unit squares and has a size of M×N. Some squares are painted black, while the rest are painted white. Jimin wants to cut the board into 8×8 chessboards.

The chessboards should be painted in a pattern of alternating black and white squares. Specifically, each square should be colored either black or white, and any two squares sharing an edge should have different colors. Therefore, there are only two possible ways to paint the chessboard: one with the top-left square white, and the other with the top-left square black.

Since there is no guarantee that the board is painted like a chessboard, Jimin decided to cut it into 8×8 chessboards and determine how many squares need to be repainted. Naturally, he can choose any 8×8 square on the board. He wants to write a program that calculates the minimum number of squares he needs to repaint.

---
* Input:
  
The first line contains two integers, N and M. N and M are natural numbers greater than or equal to 8 and less than or equal to 50. The following N lines represent the state of each row of the board. The letter B denotes a black square, and the letter W denotes a white square.

---
* Output:
  
Print the minimum number of squares Jimin needs to repaint.

---
* Example Input/Output:

In:
```
10 13
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
BBBBBBBBWBWBW
BBBBBBBBBWBWB
WWWWWWWWWWBWB
WWWWWWWWWWBWB
```

Out:
```
12
```
