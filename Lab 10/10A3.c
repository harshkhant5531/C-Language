#include<stdio.h>
void main(){
	int n,i=1,count=0;
	printf("Enter n:");
	scanf("%d",&n);
	while(i<=n){
	if(n%i==0){
		count++;
	}
	i=i+1;
	}
	if(count==2){
		printf("Prime");
	}
	else{
		printf("Non Prime");
	}
}