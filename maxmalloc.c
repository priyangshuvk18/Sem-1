#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, max;
    printf("Enter the number ");
    scanf("%d", &n);
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {   
        
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < *(arr+i))
        {
            max= *(arr+i);
        }
        
    }
    printf("%d",max);
}
