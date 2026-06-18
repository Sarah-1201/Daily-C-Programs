#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *src = (int *)malloc(n * sizeof(int));
    int *dest = (int *)malloc(n * sizeof(int));
    if(src == NULL || dest == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", src + i);
    }
    for(int i = 0; i < n; i++)
    {
        *(dest + i) = *(src + i);
    }
    printf("Copied array elements:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(dest + i));
    }
    free(src);
    free(dest);
    return 0;
}