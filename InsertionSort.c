#include <stdio.h>

void InsertionSort(int n,int arr[])
{
    int i,j,key;
    
    for(i = 1; i < n; i++)
     {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
         {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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
    
    printf("\nEnter %d integers : ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    InsertionSort(n,arr);

    return (0);
}