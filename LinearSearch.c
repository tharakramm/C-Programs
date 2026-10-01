#include<stdio.h>

int LinearSearch(int arr[], int key,int n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		return i;
	}
	return -1;
}
int main()
{
	int n,i,key,num;
	
	printf("How many Elements : ");
	scanf("%d",&n);
	
	printf("Write %d Elements : ",n);
	
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter key Number To search : ");
	scanf("%d",&key);
	
	num= LinearSearch(arr,key,n);
	
	if(num==-1)
	
	printf("%d Not Found",key);
	
	else
	printf("%d is Given at Index Position %d",key,num);
	
	return(0);
}