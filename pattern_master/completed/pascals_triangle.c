/*
 * CSE SURVIVAL KIT — PATTERN MASTER (COMPLETED)
 * Pattern: Pascal's Triangle
 *
 * Input  : 5
 * Output :
 *        1
 *       1 1
 *      1 2 1
 *     1 3 3 1
 *    1 4 6 4 1
 *
 * Concept: nested loops, combination formula,
 *          each value = prev * (i - j + 1) / j
 */
#include <stdio.h>

int main() {
    int rows, i, j, val;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        /* leading spaces */
        for (j = 1; j <= rows - i; j++)
            printf(" ");

        val = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
