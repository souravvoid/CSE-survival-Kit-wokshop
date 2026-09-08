/*
 * CSE SURVIVAL KIT — PATTERN MASTER (INCOMPLETE)
 * Pattern: Pascal's Triangle
 *
 * Expected output for rows = 5:
 *        1
 *       1 1
 *      1 2 1
 *     1 3 3 1
 *    1 4 6 4 1
 *
 * Fill in the blanks.
 */
#include <stdio.h>

int main() {
    int rows, i, j, val;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i ______ rows; i++) {
        /* leading spaces */
        for (j = 1; j ______ rows - i; j++)
            printf(" ");

        val = 1;
        for (j = 0; j ______ i; j++) {
            printf("______ ", val);
            val = val * (i - j) ______ (j + 1);
        }
        ______;
    }

    return 0;
}
