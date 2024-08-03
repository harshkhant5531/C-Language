#include<stdio.h>
void main(){
	int i,n,j,c=0;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("elements at a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
    	for(j=0;j<c;j++){
		  if(a[i]==b[j]){
			break;
		}
	}	

	if(j==c){
		b[c]=a[i];
		c++;
	}
}
	for(j=0;j<c;j++){
		printf("%d",b[j]);
	}
}