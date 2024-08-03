#include<stdio.h>
int main()
{
    int y,w,d;
    printf("Enter an integer : ");
    scanf("%d",&d);
    y=d/365;
    d=d%365;
    w=d/7;
    d=d%7;
    printf("%d : %d : %d",y,w,d);
    return 0;
}