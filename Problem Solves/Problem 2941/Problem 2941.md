Problem URL : https://www.acmicpc.net/problem/2941

Not so long ago, before operating systems were as powerful as they are today, computers (which often had turbo buttons on the exterior) couldn't handle certain letters of the Croatian alphabet. Programmers agreed to use two or three-letter substitutions as in this table:
|Letter|Characters|
|---|---|
|č|c=|
|ć|c-|
|dž|dz=|
|đ|d-|
|lj|lj|
|nj|nj|
|š|s=|
|ž|z=|

For example, the word ljes=njak consists of six letters in the Croatian alphabet: lj, e, š, nj, a, k. 
Write a program that calculates the number of letters in the given word. 

---
* Input:

The first line contains a string of at most 100 characters. Only lowercase letters of the English alphabet and characters '–' and '=' will appear. 
The string will represent a word encoded as described above. 

---
* Output:

Output the number of letters in the input word. 

---
* Example Input/Output:

In:
```
ljes=njak
```

Out:
```
6
```
