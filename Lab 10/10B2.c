#include<stdio.h>
void main(){
    int flag=1;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("The number %d is a prime number\n",N);
    }
    else{
        printf("The number %d is not a prime number\n",N);
    }
    return;
}