#include<stdio.h>
void main(){
    int i = 0, n=10;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            i = i + 1;
            i++;
        }
    } 
}