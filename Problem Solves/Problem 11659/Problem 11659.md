Problem URL : https://www.acmicpc.net/problem/11866

You are given N numbers and you need to answer M queries. Each query asks for the sum of numbers in a certain interval (from index i to j) of the array.

---
* Input:

- The first line has two integers N and M, where1≤𝑁,𝑀≤100,0001≤N,M≤100,000. 
- The second line contains N natural numbers (each ≤ 1000). 
- Then follow M lines, each line containing two integers i and j, representing a query asking for the sum of the numbers from index i to index j, inclusive. 


---
* Output:

- For each of the M queries, print the sum of the values from index i to j in the array, one per line.

---
* Example Input/Output:

In:
```
5 3
5 4 3 2 1
1 3
2 4
5 5
```

Out:
```
12
9
1
```
