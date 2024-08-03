#include <stdio.h>
int main(){
	int n;
	int i;
	int count=0;
	printf("Enter n:");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter array elements:\n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
		if(arr[i]%3 ==0)
			count++;
	}
	printf("Total elements divisible by 3 is %d:\n", count);
	
	return 0;
}