/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Diamond — top pyramid + bottom inverted pyramid
 *
 * Expected output for rows = 5:
 *       *
 *     * * *
 *   * * * * *
 * * * * * * * *
 *   * * * * *
 *     * * *
 *       *
 *
 * Fill in the blanks.
 */
#include <stdio.h>

int main() {
    int rows, i, j, spaces;

    printf("Enter number of rows (odd): ");
    scanf("%d", &rows);

    /* Top half (increasing) */
    for (i = 1; i ______ rows; i += 2) {
        spaces = (rows - i) ______ 2;
        for (j = 1; j ______ spaces; j++)
            printf("  ");
        for (j = 1; j ______ i; j++)
            printf("______ ");
        ______;
    }

    /* Bottom half (decreasing), skip the widest line */
    for (i = rows - 2; i ______ 1; i -= 2) {
        spaces = (rows - i) ______ 2;
        for (j = 1; j ______ spaces; j++)
            printf("  ");
        for (j = 1; j ______ i; j++)
            printf("______ ");
        ______;
    }

    return 0;
}
