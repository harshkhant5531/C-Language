#include<stdio.h>
void main()
{
    double f, c;
    printf("Enter fahrenheit : ");
    scanf("%lf ",&f);
    c = (((f-32)*5)/9);
    printf("c=%lf",c);
}