#include<stdio.h>
void main(){
	int i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int ar[n];
	for(i=0;i<n;i++){
		printf("elements at ar[%d]",i);
		scanf("%d",&ar[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d",ar[i]);n
	}
}
