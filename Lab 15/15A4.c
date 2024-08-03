#include <stdio.h>
#include <conio.h>
 
int main()
{
    int arr[10],i,n,ele;
   
    printf("Enter array size: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Enter element to search: ");
    scanf("%d", &ele);
     
    for(i=0; i<n; i++)
    {
        if(arr[i]==ele)
        {
	    printf("%d found at position %d", ele, i+1);
            return 0;		 
        }
 
    }
	printf("Element  not  found");
}