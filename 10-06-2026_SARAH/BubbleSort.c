#include <stdio.h>
int main() 
{
    int n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n - 1; i++)   //i<n-1 because the last element will be automatically sorted after arranging the first n-1 elements
     {
        for(j = 0; j < n - i - 1; j++)  //after each iteration of the outer loop, the largest element is placed at the end of the array, so we can ignore it in the next iteration
        {
            if(arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


/* Terminal Output 
Enter the number of elements: 7
Enter 7 elements:
5     
54
34
72
2
1
7
Sorted array in ascending order:
1 2 5 7 34 54 72 
*/

/*BUBBLE SORT SUMMARY
Compare each pair of adjacent elements in the array.
If two adjacent elements are in the wrong order, swap them.
After one complete pass, the largest unsorted element moves to its correct position at the end.
Repeat the process for the remaining unsorted elements until the entire array is sorted.
*/