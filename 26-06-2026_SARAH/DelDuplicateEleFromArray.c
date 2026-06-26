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
                for(int k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }

                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}




    

    
