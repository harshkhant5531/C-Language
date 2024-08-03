#include<stdio.h>
void main(){
	 int n[10],i,neg=0;
	 for(i=0;i<10;i++){
	 	printf("Enter array elements:");
	 	scanf("%d",&n[i]);
	 }
	 for(i=0;i<10;i++){
	 	if(n[i]<0)
	 	{
	 		printf("%d",neg);
		 }
		 neg=neg+1;
	 }
}