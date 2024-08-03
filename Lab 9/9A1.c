#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter integer n:");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            printf("-%d",i);
        }
        else{
            printf("+%d",i);
        }
        i++;
    }
}