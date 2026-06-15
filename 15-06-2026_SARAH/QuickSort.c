#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int start = low;
    int end = high;
    while (start < end)
    {
        while (start <= high && arr[start] <= pivot)
        {
            start++;
        }
        while (end >= low && arr[end] > pivot )
        {
            end--;
        }
        if (start < end)
        {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[end];        
    arr[end] = temp;
    return end;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {    
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, n - 1);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

/* TERMINAL OUTPUT
Enter the number of elements: 5
Enter the elements: Element 1: 2
Element 2: 6
Element 3: 1
Element 4: 7
Element 5: 4
Sorted array: 1 2 4 6 7
*/

/* QUICK SORT SUMMARY
We select an element as the pivot and rearrange the array so that all elements smaller than 
or equal to the pivot are placed to its left and all larger elements are placed to its right 
using two pointers. This places the pivot in its correct sorted position in the array. 
The left and right parts formed around the pivot become separate subarrays, and the same process 
is applied recursively to each subarray until the entire array is sorted.

*/