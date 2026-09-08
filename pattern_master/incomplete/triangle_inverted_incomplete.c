/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Inverted Right Triangle — decreasing stars
 *
 * Expected output for rows = 5:
 *   * * * * *
 *   * * * *
 *   * * *
 *   * *
 *   *
 *
 * Fill in the blanks.
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i ______ 1; i______) {   /* count downward */
        for (j = 1; j ______ i; j++) {
            printf("______ ");
        }
        ______;
    }

    return 0;
}
