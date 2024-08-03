#include<stdio.h>
void main(){
	 int n,arr[n],i;
		printf("Enter no. of elements: ");
	 	scanf("%d",&arr[i]);
	 
	 printf("Enter Elements:");
	 for(i=0;i<n;i++){
	 	scanf("%d",&arr[i]);
	 }
	 printf("Normal order:");
	 for(i=0;i<n;i++){
	 	printf("%d",arr[i]);
	 }
	 for(i=n-1;i>=0;i--){
	 	printf("%d",arr[i]);
	 }
}