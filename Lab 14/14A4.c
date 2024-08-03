#include<stdio.h>
void main(){
	 int n,arr[n],max,min,sum=0,i;
	 float avg;
	 printf("Enter no of elements:");
	 scanf("%d",&n);
	 
	 printf("Enter elements:");
	 for(i=0;i<n;i++){
	 	scanf("%d",&arr[i]);
	 	sum+=arr[i];
	 	if(i==0){
	 		max=arr[i];
	 		min=arr[i];
		 }
		 else{
		 	if(arr[i]>max){
		 		max=arr[i];
		 		
			 }
			 if(arr[i]<min){
			 	min=arr[i];
			 }
		 }
	 }
	 printf("%d\n",max);
	 printf("%d\n",min);
	 printf("%d\n",sum);
	 printf("%d\n",sum/n);
}