#include<stdio.h>
void main(){
	char ch;
	printf("Enter ch");
	scanf("%c",&ch);
	(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')?printf("It is an alphabet"):printf("It is not an alphabet");
}