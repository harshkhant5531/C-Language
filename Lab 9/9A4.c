#include<stdio.h>
void main(){
    int i=1,n,factorial=1;
    printf("Enter number for factorial:");
    scanf("%d",&n);
    while(i<=n){
        factorial=factorial*i;
        i++;
    }
    printf("Factorial of %d is: %d",n,factorial);
}