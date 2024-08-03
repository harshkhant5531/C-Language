#include<stdio.h>
void main()
{
    double p,r,t,simple_interest;
    printf("Enter principle, rate and time period : ");
    scanf("%lf %lf %lf",&p,&r,&t);
    simple_interest = (p*r*t)/(100.0);
    printf("simple_interest = %lf",simple_interest);
}