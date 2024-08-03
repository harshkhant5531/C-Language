#include<stdio.h>
#include<stdlib.h>
void main()
{
    int t;
   t=time(NULL);
   printf("\n Current date and time is : %s",time(&t));
}