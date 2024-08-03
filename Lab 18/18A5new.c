#include<stdio.h>
void swap(int *a,int *b);
void main(){
    int a=5,b=10;
    scanf("%d",&a);
    printf("Before: %d %d",a,b);
    swap(&a,&b);
    printf("\nAfter: %d %d",a,b);
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
