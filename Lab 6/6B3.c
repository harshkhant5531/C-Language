#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a,b,c : \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && c==a)
    {
        printf("This triangle is equilteral");
    }
    else if(a==b || b==c || c==a)
    {
        printf("This triangle is isosceles");
    }
    else if(a!=b && b!=c && c!=a)
    {
        printf("This triangle is scalene");
    }
    else if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
    {
        printf("This triangle is right angled triangle");
    }
}