#include<stdio.h>
void main(){
	 int i=1,n,factorial=1;
	 printf("Enter number for factorial:");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++){
	 	factorial=factorial*i;
	 }
	 printf("Factorial of %d is:%d",n,factorial);
}