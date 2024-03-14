#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    char *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (char*)malloc(n*sizeof(int));
    for (i = 0; i<=n; i++)
    {
        scanf("%c", &arr[i]);
    }
    for (i = n; i >=1;i--)
    {
        printf("%c", arr[i]);
    }
}