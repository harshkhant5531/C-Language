#include<stdio.h>
void main()
{
	double f,celsius;
	printf("Enter fareheit:");
	scanf("%lf",&f);
	celsius=(((f-32)*5)/9);
	printf("celsius=%lf",celsius);
}
