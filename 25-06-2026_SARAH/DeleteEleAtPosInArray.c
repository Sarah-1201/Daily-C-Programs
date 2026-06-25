#include<stdio.h>
int main()
{
    int n,pos;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf(" Enter element %d  ",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter position:");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("Array after deleting element at %d",pos);
    for(i=0;i<n-1;i++)
    {
        printf("%d   ",a[i]);
    }
}