Problem URL : https://www.acmicpc.net/problem/26069

In this problem, you meet a character named **ChongChong**, who knows a special dance called the **"rainbow dance"**. It’s so catchy that anyone who sees it immediately starts dancing too.

Initially, only ChongChong is dancing. Over time, there are **N** records of meetings—each record contains two names, indicating that those two people met. Whenever a person who is *not* dancing meets someone *who is* dancing, the non-dancer starts dancing themselves. After that moment, they continue dancing indefinitely.

Your task is to determine **how many people are dancing** after all the meetings have taken place.

---
* Input:

1. The first line contains an integer **N** (1 ≤ N ≤ 1000) — the number of meeting records.
2. Each of the next **N** lines contains two strings **Aᵢ** and **Bᵢ**, separated by a space — the names of the two people who met at that record.
   - Each name consists of digits and uppercase/lowercase English letters, up to 20 characters.
   - Names are **case-sensitive** (e.g. `"ChongChong"` and `"chongchong"` are different).
   - ChongChong is included in at least one meeting record.
   - There are no duplicate names.

---
* Output:

- Print one integer: the total number of people dancing after processing all the meeting records.

---
* Example:

In:
```
12
bnb2011 chansol
chansol chogahui05
chogahui05 jthis
jthis ChongChong
jthis jyheo98
jyheo98 lms0806
lms0806 pichulia
pichulia pjshwa
pjshwa r4pidstart
r4pidstart swoon
swoon tony9402
tony9402 bnb2011
```

Out:
```
10
```