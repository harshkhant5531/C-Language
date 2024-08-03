#include <stdio.h>

void calculate_simple_interest(float p, float r, float t);

int main()
 {
    float principle, rate, time;
    printf("Enter principle amount: ");
    scanf("%f", &principle);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    calculate_simple_interest(principle, rate, time);
    return 0;
}

void calculate_simple_interest(float p, float r, float t)
 {
    float si;
    si = (p * r * t) / 100;
    printf("Simple Interest = %f", si);
}
