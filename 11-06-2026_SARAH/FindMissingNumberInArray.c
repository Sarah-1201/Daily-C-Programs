#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter the array elements: ");
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int xor1 = 0, xor2 = 0;
    // XOR of numbers 1 to n
    for(i = 1; i <= n; i++)
    {
        xor1 ^= i;
    }
    // XOR of array elements
    for(i = 0; i < n - 1; i++)
    {
        xor2 ^= arr[i];
    }
    printf("Missing Number = %d\n", xor1 ^ xor2);
    return 0;
}

/* TERMINAL OUTPUT
Enter n: 7
Enter the array elements: 2
3
4
1
6
7
Missing Number = 5
*/

/* FIND MISSING NUMBER IN ARRAY SUMMARY
We can find the missing number between 1 and n in an array of size n-1 containing distinct 
integers from 1 to n using the XOR operator.
Calculate the XOR of all numbers from 1 to n. Then calculate the XOR of all elements in the array.
Finally, XOR the two results to get the missing number because the duplicate numbers will cancel
out and we will be left with the missing number.
*/