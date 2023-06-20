Problom URL : https://www.acmicpc.net/problem/1003

The following source code is a C++ function to calculate the Nth Fibonacci number:

int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    } else if (n == 1) {
        printf("1");
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

When fibonacci(3) is called, the following events occur:

fibonacci(3) calls fibonacci(2) and fibonacci(1) (first call).
fibonacci(2) calls fibonacci(1) (second call) and fibonacci(0).
The second call to fibonacci(1) prints 1 and returns 1.
fibonacci(0) prints 0 and returns 0.
fibonacci(2) obtains the results of fibonacci(1) and fibonacci(0), and returns 1.
The first call to fibonacci(1) prints 1 and returns 1.
fibonacci(3) obtains the results of fibonacci(2) and fibonacci(1), and returns 2.
The number 1 is printed twice, and the number 0 is printed once. Given a value N, write a program to determine how many times 0 and 1 are printed when calling fibonacci(N).

*Input:
The first line contains the number of test cases, T.

Each test case consists of a single line containing the value N. N is a natural number less than or equal to 40.

*Output:
For each test case, print the number of times 0 and 1 are printed, separated by a space.

*Example Input/Output
In:
2
6
22

Out:
5 8
10946 17711
