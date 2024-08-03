#include<stdio.h>
void main(){
	 int n;
	 printf("Enter the number:");
	 scanf("%d",&n);
	 int arr[n],i,negative=0,positive=0;
		for(i=0;i<n;i++){
		printf("a[%d] :",i);
			scanf("%d",&arr[i]);
			if(arr[i]>0){
				positive++;
			}
			else if(arr[i]<0){
				negative++;
			}
		}
	 	printf("Positive numbers:%d\n",positive);
	 	printf("Negative numbers:%d",negative);
}
