#include<stdio.h>
int main()
{
   int a[100], n, i, sum=0;
   float avg;

   printf("Enter array size [1-100]: ");
   scanf("%d",&n);
   printf("Enter %d elements: ", n);

   for(i=0; i<n; i++)
   {
     scanf("%d",&a[i]);
     sum += a[i];
   }

   avg = (float)sum/n;
   printf("Sum=%d \t Average=%.2f", sum, avg);

   printf("\nNumbers greater than average are:\n");
   for(i=0; i<n; i++)
   {
     if(a[i]>avg) printf("%d\t",a[i]);
   }

   return 0;
}