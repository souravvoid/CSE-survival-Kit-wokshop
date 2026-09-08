/*
 * CSE SURVIVAL KIT — PATTERN MASTER (COMPLETED)
 * Pattern: Right Angle Triangle — numbers increasing per row
 *
 * Input  : 5
 * Output :
 *   1
 *   1 2
 *   1 2 3
 *   1 2 3 4
 *   1 2 3 4 5
 *
 * Concept: nested for loops, printing loop counter
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
