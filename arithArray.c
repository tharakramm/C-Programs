#include<stdio.h>
int main()
{
	int t[50],n,i,sum,prod;
	
	printf("How many Digits : ");
	scanf("%d",&n);
	
	sum=0;
	prod=1;
	
	for(i=0;i<n;i++)
	{
	printf("\nEnter %d number :",i+1);
	scanf("%d",&t[i]);
	
	if(t[i]%2==0)
	sum=sum+t[i];
	
	else
	prod=prod*t[i];
	
	}
	
	printf("Sum of even numbers are %d\n",sum);
	printf("Product of odd numbers are %d\n",prod);
	
	return(0);
}