#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int a[n];
    int *p= a;
    for(int i = 0; i<n; i++)
    {
        printf("Enter array element %d:", i+1);
        scanf("%d", (p+i));
    }
    printf("Printing array elements using pointer...");
    for(int i = 0;i<n; i++)
    {
        printf("\n Element %d : %d", i+1, *(p+i));
    }
}