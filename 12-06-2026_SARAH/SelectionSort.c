#include<stdio.h>
int main()
{
    int n,i,j,min,temp;
    printf("Enter number of elements : " );
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d : ",i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n-1;i++) // 0 to n-2 because last element will be automatically sorted after n-1 iterations
    {     // linear search for minimum element in unsorted array
        min = i;    // assume the first element is the minimum
        for(j=i+1;j<n;j++)
        {
            if(a[j]< a[min])
            {
               min=j;
            }
        }
        if(min!= i)    // if minimum element is not the current element, then swap
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("Sorted array element : \n");
    for(i=0;i<n;i++)
    {
        printf("%d   ", a[i]);
    }
}


/* Terminal Output
Enter number of elements : 7
Enter element 0 : 5
Enter element 1 : 6
Enter element 2 : 3
Enter element 3 : 4
Enter element 4 : 7
Enter element 5 : 1
Enter element 6 : 0
Sorted array element : 
0   1   3   4   5   6   7 
*/

/*  SELECTION SORT SUMMARY
The array is divided into two parts: sorted and unsorted. Initially, the sorted part 
is empty and the unsorted part is the entire array.
The algorithm repeatedly selects the smallest element from the unsorted part and moves
it to the end of the sorted part. 
This process continues until the entire array is sorted. 
The outer loop iterates only n-1 times because after n-1 iterations, the last element will 
be automatically sorted.
*/