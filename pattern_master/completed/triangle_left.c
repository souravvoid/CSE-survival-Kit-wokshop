/*
 * CSE SURVIVAL KIT — PATTERN MASTER (COMPLETED)
 * Pattern: Left Triangle — right-aligned increasing stars
 *
 * Input  : 5
 * Output :
 *         *
 *       * *
 *     * * *
 *   * * * *
 * * * * * *
 *
 * Concept: nested for loops + spaces
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        /* print spaces (rows - i) for alignment */
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        /* print stars (i of them) */
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
