#include<stdio.h>
void main(){
	int a,b;
	char x;
	printf("Enter operator");
	scanf("%c",&x);
	printf("Enter the value");
	scanf("%d %d",&a,&b);
	switch (x){
		case '+':
			printf("Addition of a and b is:%d",a+b);
			break;
		case '-':
			printf("Subtraction of a and b is:%d",a+b);
			break;
		case '*':
			printf("Multiplication of a and b is:%d",a+b);
			break;
		case '/':
			printf("Division of a and b is:%d",a+b);
			break;
	}
}
