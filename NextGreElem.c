#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n], nge[n], stack[n];
    int top = -1;
    
    printf("\nEnter array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i=n-1; i>=0; i--) 
    {
        while(top != -1 && stack[top] <= arr[i])
            top--;
        
        if(top == -1)
        {
            nge[i] = -1;
        }    
        else
        {
            nge[i] = stack[top];
        }    
        stack[++top] = arr[i];
    }
    
    printf("\nNext Greater Elements: ");
    
    for(int i=0; i<n; i++)
    {
        printf("%d ", nge[i]);
    }
    return 0;
}