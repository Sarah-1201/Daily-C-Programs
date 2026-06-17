#include<stdio.h>
int main()
{
    int num;
    int n;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Enter bit position : ");
    scanf("%d",&n);
    num = num & ~(1<<(n-1));
    printf("%d",num);
}