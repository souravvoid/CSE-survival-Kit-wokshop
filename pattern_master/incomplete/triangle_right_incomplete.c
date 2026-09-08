/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Right Triangle — increasing stars
 *
 * Expected output for rows = 5:
 *   *
 *   * *
 *   * * *
 *   * * * *
 *   * * * * *
 *
 * Fill in the blanks.
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {          /* outer loop = rows */
        for (j = 1; j ______ i; j++) {     /* inner loop = columns */
            printf("______ ");             /* print the symbol */
        }
        ______;                            /* move to next line */
    }

    return 0;
}
