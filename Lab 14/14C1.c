#include<stdio.h>
int main(){
 int arr[10000],i,j,n,count=0;
	 printf("Enter the size of the array- ");
	 scanf("%d",&n);
	 printf("Enter the elements of the array- ");
	 for(i=0;i<n;i++)
	 {
	 	scanf("%d",&arr[i]);
	 }
	 for(i=0;i<n;i++)
	 {
	 	for(j =i+1; j < n; j++)
		 {
	 		if (arr[i] == arr[j])
			 {
	 			count++;
	 			break;
			 }
		 }
	 }
	 printf("Total duplicate elements in array: %d",count);
		return 0;	 
}