#include<stdio.h>
void main(){
	int n,m,sum=0;
	printf("Enter rows and columns of matrix:");
	scanf("%d %d",&m,&n);
	int a[m][n],i,j;
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("Enter element at a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		if(i==j){
			printf("%d ",a[i][j]);
			sum=sum+a[i][j];
		}
	}	
	}
	printf("Sum=%d",sum);
}