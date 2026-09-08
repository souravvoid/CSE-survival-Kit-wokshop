/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Nth Fibonacci - Iterative version to complete
 *
 * Fill in the blanks to compute the Nth Fibonacci term.
 */

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;

    printf("Enter position (0-based): ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci(0) = 0\n");
        return 0;
    }

    for (i = 2; i ______ n; i++) {
        next = ______ + ______;
        a = ______;
        b = ______;
    }

    printf("Fibonacci(%d) = %d\n", n, ______);
    return 0;
}
