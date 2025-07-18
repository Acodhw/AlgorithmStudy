Problem URL : https://www.acmicpc.net/problem/2941

Mirko is learning the Croatian alphabet. Surprisingly, some letters in Croatian are not single characters but combinations of two or three Latin letters.

The Croatian letters are as follows:
|크로아티아 알파벳|내용|
|---|---|
|č|c=|
|ć|c-|
|dž|dz=|
|đ|d-|
|lj|lj|
|nj|nj|
|š|s=|
|ž|z=|

Write a program that counts the total number of letters in the given word, considering the special Croatian letters as one single letter.

---
* Input:

The first and only line contains a string (word) consisting of lowercase Latin letters and symbols `-` and `=`.
The length of the word is at most 100 characters.

---
* Output:

Print the total number of letters after considering Croatian letters as single characters.

---
* Example Input/Output:

In:
ljes=njak

makefile
복사
편집

Out:
6