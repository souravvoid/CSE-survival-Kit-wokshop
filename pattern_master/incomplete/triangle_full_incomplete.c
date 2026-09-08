/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Full Triangle (Pyramid) — centered stars
 *
 * Expected output for rows = 5:
 *         *
 *       * * *
 *     * * * * *
 *   * * * * * * *
 * * * * * * * * * *
 *
 * Fill in the blanks.
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i ______ rows; i++) {
        /* leading spaces: rows - i */
        for (j = 1; j ______ rows - i; j++) {
            printf("  ");
        }
        /* stars: 2*i - 1 */
        for (j = 1; j ______ 2 * i - 1; j++) {
            printf("______ ");
        }
        ______;
    }

    return 0;
}
