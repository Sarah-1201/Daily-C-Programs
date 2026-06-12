#include <stdio.h>
void reverse(int a[], int start, int end)
{
    int temp;
    while(start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n, k, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter K: ");
    scanf("%d", &k);
    k = k % n;   // Handle cases where K is greater than N
    reverse(a, 0, k - 1);   // Reverse first K elements
    reverse(a, k, n - 1);   // Reverse remaining N-K elements
    reverse(a, 0, n - 1);   // Reverse the entire array
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

/* TERMINAL OUTPUT
Enter size of array: 8
Enter array elements:
6
7
8
9
6
4
3
3
Enter K: 3
Array after left rotation:
9 6 4 3 3 6 7 8 
*/

/* ROTATE ARRAY LEFT BY K TIMES SUMMARY
Reverse the first K elements so they are in the opposite order.
Reverse the remaining N−K elements so that part is also reversed.
Reverse the entire array.
The double-reversed segments now appear in swapped positions, resulting in 
a left rotation by K places.
*/