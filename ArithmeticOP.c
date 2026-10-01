#include<stdio.h>

int main()
{
	int n1,n2;
	char op;
	
	printf("Enter Two Numbers : ");
	scanf("%d%d",&n1,&n2);
    
    printf("Enter Operater : ");
    scanf(" %c",&op);
    
    switch(op)
    {
        case '+': printf("%d + %d = %d",n1,n2,n1+n2); 
    	break;
    	
        case '-': printf("%d - %d = %d",n1,n2,n1-n2); 
        break;
	
	    case '*': printf("%d*%d = %d",n1,n2,n1*n2); 
        break;
      
        case '/': printf("%d/%d=%.2f",n1,n2, (float)n1/n2);
        break;
      
        case '%': printf("%d%%%d",n1,n2,n1%n2);     
        break;
      
        default: printf("Invalid Input");
    }
      return(0);
}