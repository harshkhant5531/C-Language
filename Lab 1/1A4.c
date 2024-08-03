#include<stdio.h>
void main()
{
	double h,l,area;
	printf("Enter height and length:");
	scanf("%lf %lf",&h,&l);
	area=(l*h)/2.0;
	printf("Area=%lf",area);
}