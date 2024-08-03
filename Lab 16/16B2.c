#include<stdio.h>
void main(){
	int i,n,m,j,k;
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m],b[i][j],mul[i][j];
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		printf("Enter element at a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
		printf("Enter element at b[%d][%d]:",i,j);
		scanf("%d",&b[i][j]);
	}
}
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
		mul[i][j]=0;
	for(k=0;k<n;k++){
		mul[i][j]=mul[i][j]+(a[i][k]*b[i][k]);
		
	}	
}
}
    for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    	printf("%d ",mul[i][j]);
	}	
	printf("\n");
	}
}