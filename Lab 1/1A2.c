#include<stdio.h>

int main(){
	int x,y,z;
	float w;
	printf("Enter an integer val:");
	scanf("%d",&x);
	printf("Enter an integer val:");
	scanf("%d",&y);
	printf("Enter an integer val:");
	scanf("%d",&z);
	w=(x+y+z)/3;
	printf("Average=%f",w);
}