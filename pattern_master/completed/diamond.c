/*
 * CSE SURVIVAL KIT — PATTERN MASTER (COMPLETED)
 * Pattern: Diamond — top pyramid + bottom inverted pyramid
 *
 * Input  : 5
 * Output :
 *       *
 *     * * *
 *   * * * * *
 * * * * * * * *
 *   * * * * *
 *     * * *
 *       *
 *
 * Concept: nested loops, two halves, mid = rows
 */
#include <stdio.h>

int main() {
    int rows, i, j, spaces;

    printf("Enter number of rows (odd): ");
    scanf("%d", &rows);

    /* Top half (increasing) */
    for (i = 1; i <= rows; i += 2) {
        spaces = (rows - i) / 2;
        for (j = 1; j <= spaces; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    /* Bottom half (decreasing), skip the widest line */
    for (i = rows - 2; i >= 1; i -= 2) {
        spaces = (rows - i) / 2;
        for (j = 1; j <= spaces; j++)
            printf("  ");
        for (j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }

    return 0;
}
