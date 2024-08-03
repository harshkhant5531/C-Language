#include<stdio.h>
void main(){
	 int a[3][3],i,j,nc=0,pc=0,z=0;
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 		printf("%d %d:",i,j);
	 		scanf("%d",&a[i][j]);
	 		if(a[i][j]==0){
	 			z++;
			 }else if(a[i][j]>0){
				pc++;
			 }else if(a[i][j]<0){
			 	nc++;
			 }
		 }
		
		 }
		 printf("z=%d",z);
		 printf("+ve=%d",pc);
		 printf("-ve=%d",nc);
	 
	 
}
