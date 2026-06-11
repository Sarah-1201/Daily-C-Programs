#include <stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k = j; k < n - 1; k++) 
                {
                    arr[k] = arr[k + 1]; // Shift elements to the left to overwrite the duplicate
                }
                n--;  // Reduce the size of the array
                j--;  /*Adjust j to check the new element at position
                    j because we have shifted the elements to the left
                    and we dont know if the new element at position j is duplicate or not*/
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

/* TERMINAL OUTPUT
Enter array elements: 3
4
3
4
7
4
3
3
Array after removing duplicates:
3 4 7 
*/

/*   DELETE DUPLICATE ELEMENTS FROM ARRAY
We use two nested loops to compare each element with the rest of the elements in the array. 
If we find a duplicate, we shift all the elements to the left to overwrite the duplicate
and reduce the size of the array by one. We also adjust the inner loop index
to check the new element at that position because we have shifted the elements to the left
and we don't know if the new element at that position is a duplicate or not.
*/