#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter number of elenents: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of the array :\n ");
    for(int i=0; i<n; i++)
    {
        printf("Enter element %d :  ", (i+1));
        scanf("%d",&arr[i]);
    }
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second_smallest && arr[i] != smallest)
        {
            second_smallest = arr[i];
        }
    }
    printf("Second Smallest Element = %d\n", second_smallest);
    return 0;
}