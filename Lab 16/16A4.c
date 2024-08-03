#include<stdio.h>
void main(){
	 int m,n,i,j;
	 scanf("%d",&n);
	 scanf("%d",&m);
	 int a[m][n],b[m][n],sum;
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		printf("Enter the element at a[%d][%d]:",i,j);
	 		scanf("%d",&a[i][j]);
	 		printf("Enter the element at b[%d][%d]:",i,j);
	 		scanf("%d",&b[i][j]);
		 }
	 }
	 for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		sum=a[i][j]+b[i][j];
		printf("%d ",sum);
}
        printf("\n");
}
}
