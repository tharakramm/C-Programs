#include <stdio.h>

int main() 
{
   int i,n,min,max,sum;
	
   printf("How many Numbers: ");
   scanf("%d",&n);
	

   int t[n];
   printf("Write %d numbers : ",n);
	
    for(i = 0; i < n; i++) 
    {
        scanf("%d",&t[i]);
    }

    
    min=t[0];
	   max=t[0];
    sum=0;
    
    for(i=0; i<n; i++)
    {
    	if(t[i]<min)
    	min=t[i];
    	
    	if(t[i]>max)
    	max=t[i];
    	
    	sum=sum+t[i];
    	
    }
    
    float mean=(float)sum/n;
    
    printf("Mininum = %d\n",min);
    printf("Maximum = %d\n",max);
    printf("Mean = %.2f\n",mean);
    
   return(0);
   
}
