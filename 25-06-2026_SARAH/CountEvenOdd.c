#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    int i, even=0, odd=0;
    for(i=0;i<n;i++)
    {
        printf("Enter element %d  ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            even++;
        else  
            odd++;
    }
    printf("Number of even numbers : %d", even);
    printf("\nNumber of odd numbers : %d", odd);
}