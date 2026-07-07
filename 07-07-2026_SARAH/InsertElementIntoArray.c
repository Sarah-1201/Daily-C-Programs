#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    int n, pos, value;
    int i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 0 || n > MAX)
    {
        printf("Invalid array size.\n");
        return 1;
    }
    if (n == MAX)
    {
        printf("Array is full. Cannot insert a new element.\n");
        return 1;
    }
    if (n > 0)
    {
        printf("Enter %d elements:\n", n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
    }
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position.\n");
        return 1;
    }
    printf("Enter element to insert: ");
    scanf("%d", &value);
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}