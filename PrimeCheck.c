#include<stdio.h>

void isPrime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
    if(c==2)
	    printf("%d It is a Prime number",n);
    else
        printf("%d Is not a prime number",n);
}
int main()
{
	int n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
    if (n<=0)
	{
	    printf("Please Enter Positive Number!");
	}	    
	
	else
	{
	    isPrime(n);
	}    
	
	return(0);
}
		