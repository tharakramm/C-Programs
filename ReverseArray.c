#include<stdio.h>

int main()
{
	int i,n,*ptr;
	
	printf("How many Numbers : ");
	scanf("%d",&n);
	
	int arr[n];
	
	ptr=&arr[n-1];
	
	printf("Enter %d Numbers : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Reverse order = ");
	
	for(i=0;i<n;i++)
	{
		printf("%d",*ptr);
		ptr--;
	}
	return(0);
}