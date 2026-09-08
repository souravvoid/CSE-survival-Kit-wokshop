/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Left Triangle — right-aligned increasing stars
 *
 * Expected output for rows = 5:
 *         *
 *       * *
 *     * * *
 *   * * * *
 * * * * * *
 *
 * Fill in the blanks.
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        /* print leading spaces for alignment */
        for (j = 1; j <= rows ______ i; j++) {
            printf("  ");
        }
        /* print the stars */
        for (j = 1; j ______ i; j++) {
            printf("______ ");
        }
        ______;
    }

    return 0;
}
