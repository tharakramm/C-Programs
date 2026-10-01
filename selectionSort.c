#include <stdio.h>

void selectionSort(int n,int arr[])
{
    int i,j,min,temp;
    
    for(i = 0; i < n - 1; i++) 
    {
        min = i;

        for(j = i + 1; j < n; j++) 
        {
            if(arr[j] < arr[min]) 
            {
                min = j;
            }
        }

        if(min != i) 
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
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
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("\n Enter %d integers : ", n);
    
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    selectionSort(n,arr);
    return (0);
}