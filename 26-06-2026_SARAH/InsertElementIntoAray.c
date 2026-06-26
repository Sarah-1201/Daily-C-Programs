#include <stdio.h>
int main()
{
    int n, pos, element;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position to insert (1-%d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter element to insert: ");
    scanf("%d", &element);
    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
        return 0;
    }
    for(int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = element;
    printf("Array after insertion:\n");
    for(int i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}