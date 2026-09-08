/*
 * CSE SURVIVAL KIT — PATTERN MASTER (COMPLETED)
 * Pattern: Up and Down Triangle (Number Adventure)
 *
 * Input  : 5
 * Output :
 *   1 2 3 4 5
 *   1 2 3 4
 *   1 2 3
 *   1 2
 *   1
 *
 * Concept: descending for loop
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
