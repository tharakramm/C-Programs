#include<stdio.h>

void SumxPalindrome(int n)
{
    int sum=0,rev=0,ud,ori;
    ori=n;
    while(n>0)
	{
		ud=n%10;
		sum=sum+ud;
		rev=rev*10+ud;
		n=n/10;
		
	}
	
	printf("Sum of the digits = %d\n",sum);
	
	if(ori==rev)
	printf("%d is a Palindrome",ori);
	
	else
	printf("%d is not a Palindrome",ori);
}
int main()
{
	int n;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	
	SumxPalindrome(n);
	
	return(0);
}
		
		