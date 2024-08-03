#include<stdio.h>

void main(){
	
	
	int height[5],weight[5],i,count=0;
	
	for(i=0;i<5;i++){
		printf("enter a height number to arr[%d](cm):",i);
		scanf("%d",&height[i]);
		printf("enter a weight number to arr[%d](kg):",i);
		scanf("%d",&weight[i]);
		if(weight[i]<50&&height[i]>170){
			count++;
		}
	}
	printf("person that have height and weight is greater than 170 and weight less than 50 is:%d",count);
}