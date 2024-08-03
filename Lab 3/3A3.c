#include<stdio.h>
int main(){
    int y;
    printf("Enter y:");
    scanf("%d",&y);
    if((y%4==0)&&(y%100!=0)||(y%400==0))
    {
        printf("%d y is leap year",y);
    }
    else
    {
        printf("%d is not a leap year",y);
    }
}