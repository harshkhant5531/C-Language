#include <stdio.h>

// Function to find the missing number in an array
int findMissingNumber(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate the total sum of numbers from 1 to n
    int total = (n + 1) * n / 2;

    // The missing number is the difference between total and sum
    return total - sum;
}

int main() {
    int arr[] = {1, 3, 4, 2, 5, 6, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The missing number is: %d\n", findMissingNumber(arr, n));

    return 0;
}
