#include <stdio.h>

void SortArray(int Size, int* parr) {
    int i, j, temp;
    for (i = 0; i < Size; i++) {
        for (j = i + 1; j < Size; j++) {
            if (*(parr + j) < *(parr + i)) {
                temp = *(parr + i);
                *(parr + i) = *(parr + j);
                *(parr + j) = temp;
            }
        }
    }
}

int main() {
    int n = 5;
    int arr[] = {0, 23, 14, 12, 9};
    SortArray(n, arr);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}
