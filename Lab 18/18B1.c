#include <stdio.h>

void fibbo(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int term;
    printf("Enter the number of terms: ");
    scanf("%d", &term);
    printf("The Fibonacci series is:\n");
    fibbo(term);
    return 0;
}
