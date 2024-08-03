#include <stdio.h>

void swap_by_value(float a, float b);
void swap_by_reference(float *a, float *b);

int main() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Before swapping: num1 = %f, num2 = %f\n", num1, num2);
    swap_by_value(num1, num2);
    printf("After swapping by value: num1 = %f, num2 = %f\n", num1, num2);
    swap_by_reference(&num1, &num2);
    printf("After swapping by reference: num1 = %f, num2 = %f\n", num1, num2);
    return 0;
}

void swap_by_value(float a, float b) {
    float temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_by_reference(float *a, float *b) {
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
