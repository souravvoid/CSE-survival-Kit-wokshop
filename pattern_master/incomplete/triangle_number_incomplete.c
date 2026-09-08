/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Right Angle Triangle — numbers increasing per row
 *
 * Expected output for rows = 5:
 *   1
 *   1 2
 *   1 2 3
 *   1 2 3 4
 *   1 2 3 4 5
 *
 * Fill in the blanks.
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i ______ rows; i++) {
        for (j = 1; j ______ i; j++) {
            printf("______ ", j);  /* print the column number */
        }
        ______;
    }

    return 0;
}
