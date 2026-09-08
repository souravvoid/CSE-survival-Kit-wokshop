/*
 * CSE SURVIVAL KIT — PATTERN MASTER (COMPLETED)
 * Pattern: Inverted Right Triangle — decreasing stars
 *
 * Input  : 5
 * Output :
 *   * * * * *
 *   * * * *
 *   * * *
 *   * *
 *   *
 *
 * Concept: nested for loops, decreasing inner condition
 */
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
