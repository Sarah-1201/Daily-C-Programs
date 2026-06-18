#include <stdio.h>
#include <stdlib.h>

int add(int *arr)
{
    return *(arr) + *(arr + 1);
}

int main()
{
    int *arr; // array

    // Dynamically allocate memory for 2 integers
    arr = (int *)malloc(2 * sizeof(int)); // DMA returns an address which must be stored in a pointer

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter two numbers: ");
    scanf("%d %d", arr, arr + 1);

    // Array pointer
    int (*aptr)[2] = (int (*)[2])arr;

    // Function pointer
    int (*fptr)(int *) = add;

    printf("First element  = %d\n", (*aptr)[0]);
    printf("Second element = %d\n", (*aptr)[1]);

    printf("Sum = %d\n", fptr(arr));

    free(arr);

    return 0;
}