#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, sum=0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    //Dynamically allocate memory for the array
    int *arr = (int*) malloc(n*sizeof(int));
    //Take input for array
    printf("Enter the element: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    //Calculate the average
    avg=(float)sum/n;
    //Calculate the average
    printf("Average = %.2f\n", avg);
    //Free the dynamically allocated memory
    free(arr);

    return 0;
}