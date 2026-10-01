#include <stdio.h>

void bubbleSort(int n,int arr[])
{
    int i,temp;
    
    for(i = 0; i < n - 1; i++) 
    {
        for(int j = 0; j < n - i - 1; j++)
         {
            if(arr[j] > arr[j + 1])
             {
           
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array in ascending order : ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
}
int main() 
{
    int i,n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter %d integers : ", n);
    for(i = 0; i < n; i++)
     {
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(n,arr);

    return (0);
}