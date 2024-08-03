#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter int value:");
	scanf("%d %d %d",&a,&b,&c);
	(a>b)?printf("%d",a*c):printf("%d",b*c);	
}
