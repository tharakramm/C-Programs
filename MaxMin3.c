#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("Enter Three Numbers : ");
    scanf("%d%d%d", &n1, &n2, &n3);
    
    if(n1 == n2 && n2 == n3)
     {
        printf("All numbers are equal\n");
    }
    else 
    {
        if(n1 >= n2 && n1 >= n3) {
            printf("%d is Maximum\n", n1);
        }
        else if(n2 >= n1 && n2 >= n3)
         {
            printf("%d is Maximum\n", n2);
        }
        else 
        {
            printf("%d is Maximum\n", n3);
        }
        if(n1 <= n2 && n1 <= n3)
         {
            printf("%d is Minimum\n", n1);
        }
        else if(n2 <= n1 && n2 <= n3)
         {
            printf("%d is Minimum\n", n2);
        }
        else
         {
            printf("%d is Minimum\n", n3);
        }
    }

    return (0);
}