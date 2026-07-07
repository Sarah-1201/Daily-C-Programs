#include <stdio.h>
#define MAX 100
int main()
{
    int arr1[MAX], arr2[MAX], arr3[2 * MAX];
    int n1, n2;
    int i, j = 0;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    if (n1 < 0 || n1 > MAX)
    {
        printf("Invalid size for first array.\n");
        return 1;
    }
    if (n1 > 0)
    {
        printf("Enter %d elements:\n", n1);
        for (i = 0; i < n1; i++)
        {
            printf("Enter element %d   ",(i+1));
            scanf("%d", &arr1[i]);
        }
    }
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    if (n2 < 0 || n2 > MAX)
    {
        printf("Invalid size for second array.\n");
        return 1;
    }
    if (n2 > 0)
    {
        printf("Enter %d elements:\n", n2);
        for (i = 0; i < n2; i++)
        {
            printf("Enter element %d    ",(i+1));
            scanf("%d", &arr2[i]);
        }
    }
    for (i = 0; i < n1; i++)
    {
        arr3[j++] = arr1[i];
    }
    for (i = 0; i < n2; i++)
    {
        arr3[j++] = arr2[i];
    }
    if (j == 0)
    {
        printf("Merged array is empty.\n");
    }
    else
    {
        printf("Merged array:\n");
        for (i = 0; i < j; i++)
        {
            printf("%d ", arr3[i]);
        }
        printf("\n");
    }
    return 0;
}