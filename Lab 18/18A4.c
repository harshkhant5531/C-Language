#include <stdio.h>

float max(float a, float b, float c);

int main()
 {
    float num1, num2, num3;
    printf("Enter three floating-point numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("The maximum number is: %f", max(num1, num2, num3));
    return 0;
}

float max(float a, float b, float c)
 {
    float max = a;
    if (b > max)
     {
        max = b;
    }
    if (c > max) 
    {
        max = c;
    }
    return max;
}
