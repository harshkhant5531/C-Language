#include <stdio.h>

void swapArray(int *a, int *b, int size)
 {
    for (int i = 0; i < size; i++) 
    {
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

int main()
 {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int size = sizeof(a) / sizeof(int);

    printf("Before swapping:\n");
    printf("Array a: ");
    for (int i = 0; i < size; i++)
     {
        printf("%d ", *(a + i));
    }
    printf("\nArray b: ");
    for (int i = 0; i < size; i++)
     {
        printf("%d ", *(b + i));
    }

    swapArray(a, b, size);

    printf("\nAfter swapping:\n");
    printf("Array a: ");
    for (int i = 0; i < size; i++)
     {
        printf("%d ", *(a + i));
    }
    printf("\nArray b: ");
    for (int i = 0; i < size; i++)
     {
        printf("%d ", *(b + i));
    }

}
