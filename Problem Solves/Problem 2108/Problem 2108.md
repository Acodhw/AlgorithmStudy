Problem URL : https://www.acmicpc.net/problem/2108

You are given a list of **N integers**. Your task is to compute the following **four statistical values**:

1. **Arithmetic Mean**  
   - Round to the nearest integer.  
   - Use standard rounding rules: if the decimal part is 0.5 or higher, round up.

2. **Median**  
   - The middle value when the numbers are sorted.  
   - If N is odd, it's the center element.  
   - If N is even, choose the lower-middle element (based on the original problem constraints).

3. **Mode**  
   - The most frequently occurring number(s).  
   - If there are multiple such values, print the **second smallest one**.

4. **Range**  
   - Difference between the maximum and minimum values.

---
* Input:

- The first line contains an integer **N** (1 ≤ N ≤ 500,000), the number of input values.
- The following **N lines** each contain one integer `xᵢ` (−4000 ≤ xᵢ ≤ 4000).

---
* Output:

Print the following four values, each on a new line, in order:

1. Arithmetic Mean (rounded)
2. Median
3. Mode (with second-smallest rule if needed)
4. Range

---
* Example Input/Output:

In:
```
5
1
3
8
-2
2
```

Out:
```
2
2
1
10
```