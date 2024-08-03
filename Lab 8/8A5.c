#include<stdio.h>
int main(){
    int i = 1, n, even=0, odd=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Even number");
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            even++;
        }
        i++;
    }
    printf("Odd number");
    i=1;
    while(i<=n)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
            odd++;
        }
        i++;
    }
    printf("Total even no. = %d", even);
    printf("Total odd no. = %d",odd);
}