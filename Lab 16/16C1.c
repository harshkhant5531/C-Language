#include <stdio.h>

int main() {
    int i, j, rows, columns, a[10][10], Total = 0;

    printf("\nPlease Enter the Number of Rows and Columns: ");
    scanf("%d %d", &rows, &columns);

    printf("\nPlease Enter the Matrix Elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            if (a[i][j] == 0) {
                Total++;
            }
        }
    }

    if (Total >= (rows * columns) / 2) {
        printf("\nThe Matrix you entered is a Sparse Matrix.\n");
    } else {
        printf("\nThe Matrix you entered is Not a Sparse Matrix.\n");
    }

    return 0;
}
