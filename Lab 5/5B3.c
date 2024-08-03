#include<stdio.h>
int main()
{
    int a;
    printf("Enter a : ");
    scanf("%d",&a);

    //Multiply by 2
    int multiplied = a<<1;
    printf("Multiplied : %d\n",multiplied);

    //Divide by 2
    int divided =a>>1;
    printf("Divided : %d\n",divided);
}