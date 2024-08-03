#include<stdio.h>
void main(){
	int a=5,b=6,c=7,max;
	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Max value is :%d",max);
}