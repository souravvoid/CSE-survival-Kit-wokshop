/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Fibonacci Series — find the Nth term
 *
 * The Fibonacci series starts: 0, 1, 1, 2, 3, 5, 8, 13, ...
 * (position 0 = 0, position 1 = 1, position 2 = 1, ...)
 *
 * Expected: findFibonacci(7) = 13
 *
 * Fill in the blanks.
 */

#include <stdio.h>

int findFibonacci(int n) {
    if (n ______ 0) return 0;
    if (n ______ 1) return 1;
    return findFibonacci(n - 1) ______ findFibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter position (0-based): ");
    scanf("%d", &n);

    printf("Fibonacci at position %d = %d\n",
           n, findFibonacci(______));

    return 0;
}
