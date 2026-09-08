/*
 * CSE SURVIVAL KIT — PATTERN MASTER (COMPLETED)
 * Pattern: Number Triangle — Floyd's Triangle style,
 *          consecutive numbers filling rows
 *
 * Input  : 5
 * Output :
 *   1
 *   2 3
 *   4 5 6
 *   7 8 9 10
 *   11 12 13 14 15
 *
 * Concept: nested loops, running counter (no reset)
 */
#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;   /* continues without resetting */
        }
        printf("\n");
    }

    return 0;
}
