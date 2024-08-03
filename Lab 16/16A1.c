#include<stdio.h>
void main(){
	int m,n,i,j;
	printf("enter value1=");
	scanf("%d",&m);
	printf("enter value2=");
	scanf("%d",&n);
	 int a[m][n];
	 
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		printf("a[%d][%d]=",i,j);
	 		scanf("%d",&a[i][j]);
		 }
		 
		 //printf("\n");
	 }
	 
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		printf("%d\t",a[i][j]);
		 }
		 printf("\n");
	 }
}
