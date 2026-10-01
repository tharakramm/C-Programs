#include<stdio.h>

int binser(int arr[], int n, int key)
{
	int low=0;
	int high=n-1;
	int mid;
	
	
	
	while(low<=high)
	{
		mid=(low+high)/2;
		
		if(arr[mid]==key)
		return mid;
		
		else if (arr[mid]<key)
		low=mid+1;
		
		else
		high=mid-1;
	}
	return-1;
	
}


int main()
{
	int i, n,key,res;
	
	printf("How many Numbers? : ");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d Numbers In sorted order : ",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter a Key to search : "); 
	scanf("%d",&key);
	
	res=binser(arr,n,key);
	
	if(res!=-1)
	{
		printf("%d is Found at index %d",key,res);
	}
	else
	printf("%d not found",key);
	
}