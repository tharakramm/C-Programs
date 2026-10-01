#include<stdio.h>
int main()
{
	int n,i=1,prod=1;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	while(i<=n)
	{
	    prod=prod*i;
	    i++;
	}
	printf("%d",prod);
	
	return(0);
	
}