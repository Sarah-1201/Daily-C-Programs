#include <stdio.h>
void moveZerosToEnd(int arr[], int n)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }
    while (index < n)
    {
        arr[index] = 0;
        index++;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal Array: ");
    printArray(arr, n);
    moveZerosToEnd(arr, n);
    printf("Array after moving zeros to the end: ");
    printArray(arr, n);
    return 0;
}