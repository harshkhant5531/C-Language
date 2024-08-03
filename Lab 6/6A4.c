#include<stdio.h>
void main()
{
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Last digit is even");
    }
    else
    {
        printf("Last digit is odd");
    }
}