#include<stdio.h>
int a,b;
void add(int,int);
void main()
{
    scanf("%d %d",&a,&b);
    add(a,b);

}
void add(int a,int b)
{
    printf("%d",a+b/2);
}