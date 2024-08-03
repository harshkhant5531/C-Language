#include <stdio.h>

int main() {
    int Matrix[3][3] = {
        {9, 8, 7},
        {5, 4, 6},
        {1, 2, 3}
    };

    printf("Matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nUpper triangular matrix is:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (j >= i)
                printf("%d ", Matrix[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
