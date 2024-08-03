#include <stdio.h>

void addMatrix(int *a, int *b, int *result, int rows, int cols)
 {
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         {
            *(result + i * cols + j) = *(a + i * cols + j) + *(b + i * cols + j);
        }
    }
}

void printMatrix(int *matrix, int rows, int cols) 
{
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
}

int main()
 {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    addMatrix(&a[0][0], &b[0][0], &result[0][0], 3, 3);

    printf("Matrix A:\n");
    printMatrix(&a[0][0], 3, 3);

    printf("\nMatrix B:\n");
    printMatrix(&b[0][0], 3, 3);

    printf("\nResultant Matrix:\n");
    printMatrix(&result[0][0], 3, 3);

}
