#include <stdio.h>

// Function to swap the array elements
void Array_Swap(int *array, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }
}

int main() {
    int array_1[30] = {0};
    int n;

    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);

    printf("Enter the elements for array_1:\n");
    for (int i = 0; i < n; i++) {
        printf("array_1[%d]: ", i);
        scanf("%d", &array_1[i]);
    }

    // Reverse the array elements
    Array_Swap(array_1, n);

    printf("\nThe array after swapping is:\n");
    for (int i = 0; i < n; i++) {
        printf("array_1[%d]: %d\n", i, array_1[i]);
    }

    return 0;
}
