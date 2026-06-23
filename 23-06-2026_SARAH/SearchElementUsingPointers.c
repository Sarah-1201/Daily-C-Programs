#include <stdio.h>
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
    int key;
    printf("Enter element to search: ");
    scanf("%d", &key);
    int (*aptr)[n] = &arr;
    for(int i = 0; i < n; i++)
    {
        if((*aptr)[i] == key)
        {
            printf("Element found at index %d\n", i);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}