#include<stdio.h>
void main(){
	int i,n,m,j;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m];
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		printf("Enter element at a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	}
}
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("%d ",a[j][i]);
}
        printf("\n");
}
}