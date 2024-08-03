#include<stdio.h>
void main(){
	 int n;
	 printf("Enter the size of Array:");
	 scanf("%d",&n);
	 int a[n],b[n],i;
	 for(i=0;i<n;i++){
	 	printf("Enter an elemets into a[%d]:",i);
	 	scanf("%d",&a[i]);
	 }
	 for(i=0;i<n;i++){
	 	b[i]=a[i];
	 }
	 for (i=0;i<n;i++)
	{
	printf("Element in b[%d]:%d",i,b[i]);
	}
}