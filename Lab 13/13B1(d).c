#include<stdio.h>
void main(){
	 int i,j,n=5;
	 char ch='A';
	 for(i=1;i<=5;i++){
	 	for(j=1;j<=n-i;j++){
	 		printf(" ");
		 }
		 for(j=1;j<=i;j++){
		 	if(i%2==1)
			 {
		 		printf("%d ",j);
			 }
			 else
			 {
			 	printf("%c ",ch);
			 	ch++;
			 }
			 

		 }
		 printf("\n");
	 }
}
