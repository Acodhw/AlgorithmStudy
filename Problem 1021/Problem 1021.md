Problem URL : https://www.acmicpc.net/problem/1021

Jimin has a bidirectional circular queue that contains N elements. Jimin wants to extract several elements from this queue.

Jimin can perform the following three operations on the queue:

1. Remove the first element. After this operation, the original elements of the queue, a1, ..., ak, become a2, ..., ak.
2. Move one position to the left. After this operation, a1, ..., ak becomes a2, ..., ak, a1.
3. Move one position to the right. After this operation, a1, ..., ak becomes ak, a1, ..., ak-1.

The queue initially contains the number N. Jimin wants to extract the elements in the given order, starting from the initial position of the queue. In this process, Jimin wants to minimize the total number of operations (2nd and 3rd) required.

---
* Input:
  
The first line contains two integers, N and M. N is a natural number less than or equal to 50, and M is a natural number less than or equal to N. The second line contains the positions of the elements that Jimin wants to extract in the specified order. The positions are natural numbers between 1 and N (inclusive).

---
* Output:
  
Print the minimum number of operations (2nd and 3rd) required to extract the elements in the given order.

---
* Example Input/Output:

In:
```
10 10
1 6 3 2 7 9 8 4 10 5
```

Out:
```
14
```
