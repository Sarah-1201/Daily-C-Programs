#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Duplicate elements are: ");
    for(int i = 0; i < n - 1; i++)
    {
        int printed = 0;
        // Check if a[i] was already printed
        for(int k = 0; k < i; k++)
        {
            if(a[k] == a[i])
            {
                printed = 1;
                break;
            }
        }
        if(printed)
            continue;
        // Check for duplicates ahead
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    return 0;
}


/* print multiple duplicates multiple times 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in the array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d elements...\n",n);
    for(int i=0; i<n; i++)
    {
        printf("Enter element %d   ", i+1);
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                printf("%d    ",a[i]);
                break;
            }
        }
    }
}

*/


    

    
