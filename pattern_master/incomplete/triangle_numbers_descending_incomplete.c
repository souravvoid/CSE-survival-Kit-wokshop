/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Descending Number Triangle
 *
 * Expected output for rows = 5:
 *   1 2 3 4 5
 *   1 2 3 4
 *   1 2 3
 *   1 2
 *   1
 *
 * Fill in the blanks.
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i ______ 1; i______) {
        for (j = 1; j ______ i; j++) {
            printf("______ ", j);
        }
        ______;
    }

    return 0;
}
