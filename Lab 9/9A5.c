#include<stdio.h>
void main(){
    int i=1,n;
    printf("Enter number integer n:");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            printf("Factor is: %d\n",i);
        }
        i++;
    }
}