/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Floyd's Triangle — consecutive numbers filling rows
 *
 * Expected output for rows = 5:
 *   1
 *   2 3
 *   4 5 6
 *   7 8 9 10
 *   11 12 13 14 15
 *
 * Fill in the blanks.
 */
#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i ______ rows; i++) {
        for (j = 1; j ______ i; j++) {
            printf("%d ", ______);
            ______;   /* advance the counter */
        }
        ______;
    }

    return 0;
}
