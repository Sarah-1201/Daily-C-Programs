#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array:\n ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elememts ");
    for(int i=0; i<n; i++)
    {
        printf("Enter element %d    ",(i+1));
        scanf("%d",&a[i]);
    }
    int count = 0;
    for(int i=0; i<n;i++)
    {
        if(a[i]<0)
        count++;
    }
    printf(" Number of Negative numbers in Array : %d",count);
}