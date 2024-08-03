#include <stdio.h>

#define ARRAY_SIZE 100 // Adjust the array size as needed

void insertIntoSortedArray(int array[], int *size, int new_value) {
    int index = 0;
    while (index < *size && array[index] < new_value) {
        index++;
    }

    // Shift elements to make space
    for (int i = *size; i > index; i--) {
        array[i] = array[i - 1];
    }

    // Insert the new value
    array[index] = new_value;
    (*size)++;
}

int main() {
    int array[ARRAY_SIZE];
    int size = 0;

    // Assume the array is already sorted
    // Fill in the initial elements (e.g., using scanf)

    int new_value;
    printf("Enter the value to be inserted: ");
    scanf("%d", &new_value);

    insertIntoSortedArray(array, &size, new_value);

    printf("After insertion, the array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
