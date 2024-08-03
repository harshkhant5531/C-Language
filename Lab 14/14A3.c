#include<stdio.h>
void main(){
	 int n;
	 printf("Enter the number: ");
	 scanf("%d",&n);
	 int arr[n],i,evencount=0,oddcount=0;
	 	for(i=0;i<n;i++){
	 	printf("a[%d] :",i);
	 		scanf("%d",&arr[i]);
	 		if(arr[i]%2==0){
	 		evencount++;
		 }else if(arr[i]%2==1){
		 	oddcount++;
		 }
	}
		 printf("Evencount=%d\n",evencount);
		 printf("Oddcount=%d",oddcount);
}
