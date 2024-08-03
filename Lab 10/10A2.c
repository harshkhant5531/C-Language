#include<stdio.h>
void main(){
	int n,sum,avg,count=0;
	printf("Enter 0 to stop the program=");
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		sum=sum+n;
		count++;
	}
	avg=sum/count;
	printf("%d %d",sum,avg);
}