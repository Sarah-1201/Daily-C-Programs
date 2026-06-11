#include <stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements to the array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)    //i=1 because the first element is considered as sorted
    {
        temp=a[i];   //store the current element in temp variable, because we will be shifting elements to the right, and we don't want to lose the value of the current element
        j=i-1;   //j=i-1 because we want to compare the current element with the elements before it, starting from the last sorted element
        while(j>=0 && a[j]>temp) //arrange the elements in ascending order, so we will compare the current element with the elements before it, and if the current element is smaller than the previous element, we will shift the previous element to the right, and continue this process until we find the correct position for the current element
        {
            a[j+1]=a[j]; 
            j--; 
        }
        a[j+1]=temp;   //place the current element in its correct position in the sorted subarray
    }
    printf("Sorted array :\n");  
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

/* Terminal Output
Enter the number of elements: 8
Enter elements to the array:
Enter element 1:6
Enter element 2:4
Enter element 3:8
Enter element 4:2
Enter element 5:9
Enter element 6:1
Enter element 7:10
Enter element 8:5
Sorted array :
1 2 4 5 6 8 9 10 
*/

/*INSERTION SORT SUMMARY
Assume the first element is already sorted. Start from the second element and compare it with the elements before it.
If the current element is smaller than the previous element, shift the previous element to the right.
Continue this process until you find the correct position for the current element in the sorted subarray.
Repeat the process for all elements in the array until the entire array is sorted.
*/