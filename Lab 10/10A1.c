#include<stdio.h>
void main(){
	int n,lastdigit,firstdigit,sum;
	scanf("%d",&n);
	lastdigit=n%10;
	while(n>=10){
		n=n/10;
	}
	firstdigit-n;
	sum=firstdigit+lastdigit;
	printf("%d",sum);

}