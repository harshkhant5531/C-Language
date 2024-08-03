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
    if(a>b || b<c)
    {
        printf("b is second largest");
    }
    else if(b>a || a<c)
    {
        printf("a is second largest");
    }
    else if(a>c || c<b)
    {
        printf("C is second largest");
    }
}