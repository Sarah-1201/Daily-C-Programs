#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr1= (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)malloc(n * sizeof(int));
    if(arr1 == NULL || arr2 == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d elements for array 1:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", arr1 + i);
    }
    printf("Enter %d elements for array 2:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", arr2 + i);
    }
    
    for(int i = 0; i < n; i++)
    {
        *(arr1+i)=*(arr1+i)+ *(arr2+i);
        *(arr2+i)= *(arr1+i)- *(arr2+i);
        *(arr1+i)= *(arr1+i) - *(arr2+i);
    }
    printf("\nArray 1 elements after swapping : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(arr1+i));
    }
     printf("\nArray 2 elements after swapping : ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(arr2+i));
    }
    free(arr1);
    free(arr2);
    return 0;
}