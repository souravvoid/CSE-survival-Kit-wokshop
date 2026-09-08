/*
 * CSE SURVIVAL KIT — PATTERN MASTER (COMPLETED)
 * Pattern: Full Triangle (Pyramid) — centered stars
 *
 * Input  : 5
 * Output :
 *         *
 *       * * *
 *     * * * * *
 *   * * * * * * *
 * * * * * * * * * *
 *
 * Concept: nested loops — spaces + stars where
 *          stars = 2*i - 1, spaces = rows - i
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        /* leading spaces */
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        /* stars: 2*i - 1 of them */
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
