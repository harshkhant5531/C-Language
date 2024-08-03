#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void findTwoMax(int* a, int n) {
    int max = a[0]; // Initialize max to the first array element
    int sec_max = INT_MIN; // Initialize sec_max to INT_MIN (a very small value)

    for (int i = 0; i < n; i++) {
        // If a[i] > max, update max to a[i] and sec_max to the previous max value
        if (a[i] > max) {
            sec_max = max;
            max = a[i];
        }
        // Else if a[i] is greater than sec_max but less than max, update sec_max to a[i]
        else if (a[i] > sec_max && a[i] < max) {
            sec_max = a[i];
        }
        // Do nothing to max
    }

    // If sec_max is still at its initialized value, only one largest value exists
    if (sec_max == INT_MIN) {
        printf("Only one large element: %d\n", max);
    } else {
        printf("First largest element: %d & second largest element: %d\n", max, sec_max);
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamic array created
    int* a = malloc(sizeof(int) * n);

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Find the two largest numbers
    findTwoMax(a, n);

    free(a); // Free the dynamically allocated memory
    return 0;
}
