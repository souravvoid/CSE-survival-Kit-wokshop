/*
 * CSE SURVIVAL KIT — PATTERN MASTER (COMPLETED)
 * Pattern: Fibonacci Series — find the Nth term
 *
 * The Fibonacci series starts: 0, 1, 1, 2, 3, 5, 8, 13, ...
 * (position 0 = 0, position 1 = 1, position 2 = 1, ...)
 *
 * findFibonacci(7) = 13
 *
 * Two versions:
 *   Version A: iterative (loop-based)
 *   Version B: recursive (function calls itself)
 */

#include <stdio.h>

/* ---- Version A: Iterative ---- */
int findFibonacciIterative(int n) {
    int a = 0, b = 1, next, i;

    if (n == 0) return 0;

    for (i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

/* ---- Version B: Recursive ---- */
int findFibonacciRecursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return findFibonacciRecursive(n - 1) +
           findFibonacciRecursive(n - 2);
}

int main() {
    int n;

    printf("Enter position (0-based): ");
    scanf("%d", &n);

    printf("Iterative : Fibonacci(%d) = %d\n",
           n, findFibonacciIterative(n));
    printf("Recursive : Fibonacci(%d) = %d\n",
           n, findFibonacciRecursive(n));

    return 0;
}
