#include <stdio.h>
int sum(int arr[], int n)
{
    if(n == 0)
        return 0;
    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sum = %d", sum(arr, n));
    return 0;
}