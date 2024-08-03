#include<stdio.h>
int main(){
	int decimal,binary=0,base=1;
	printf("Enter a decimal number:");
	scanf("%d",&decimal);
	while(decimal>0){
	binary+=(decimal%2)*base;
	decimal/=2;
	base*=10;
	}
	printf("Binary Number:%d\n",binary);
}