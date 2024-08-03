#include<stdio.h>
void convertToWord(int n){
	int temp,digit,reverse=0;
	printf("Output:");
	while(n>0){
		digit=n%10;
		reverse=reverse*10+digit;
		n/=10;
	}
	while(reverse>0){
		digit=reverse%10;
		switch(digit){
			case 0:
				printf("Zero");
				break;
			case 1:
				printf("One");
				break;
			case 2:
				printf("Two");
				break;
			case 3:
				printf("Three");
				break;	
			case 4:
				printf("Four");
				break;
			case 5:
				printf("Five");
				break;
			case 6:
				printf("Six");
				break;
			case 7:
				printf("Seven");
				break;
			case 8:
				printf("Eight");
				break;
			case 9:
				printf("Nine");
				break;
		}
		reverse/=10;
	}
		printf("\n");
}
int main(){
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	convertToWord(number);
}