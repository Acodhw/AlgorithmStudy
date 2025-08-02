Problem URL : https://www.acmicpc.net/problem/1620

You are tasked with managing a large collection of **named items**, each uniquely identified by an index number starting from 1.

Your program must efficiently support two types of queries:

1. Given a name, return its index.
2. Given an index, return the corresponding name.

---
* Input:

1. The first line contains two integers **N** and **M** (1 ≤ N ≤ 100,000, 1 ≤ M ≤ 100,000),  
   where **N** is the number of entries and **M** is the number of queries.
2. The next **N lines** each contain a unique string (the item name), in the order of index 1 to N.
3. The next **M lines** each contain either:
   - A name (to look up its index), or
   - A number (to look up the corresponding name).

All names consist of only English uppercase and lowercase letters and are no longer than 20 characters.

---
* Output:

- For each of the M queries, print one line:
  - If the query is a name, print its index.
  - If the query is an index, print the corresponding name.

---
* Example Input/Output:

In:
```
26 5
Bulbasaur
Ivysaur
Venusaur
Charmander
Charmeleon
Charizard
Squirtle
Wartortle
Blastoise
Caterpie
Metapod
Butterfree
Weedle
Kakuna
Beedrill
Pidgey
Pidgeotto
Pidgeot
Rattata
Raticate
Spearow
Fearow
Ekans
Arbok
Pikachu
Raichu
25
Raichu
3
Pidgey
Kakuna
```

Out:
```
Pikachu
26
Venusaur
16
14
```