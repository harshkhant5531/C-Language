#include<stdio.h>
void main(){
    int i=1,x,y,power=1;
    printf("Enter number x:");
    scanf("%d",&x);
    printf("Enter number y:");
    scanf("%d",&y);
    while(i<=y){
        power=power*x;
        i++;
    }
    printf("x^y is: %d",power);
}