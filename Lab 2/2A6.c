#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is largest");
		}
		else
		{
			printf("c is largest");
		}
	}
	else
	{
			if(b>c)
			{
				printf("b is largest");
			}
			else
			{
				printf("c is largest");
			}
	}
}