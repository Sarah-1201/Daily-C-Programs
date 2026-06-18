#include<stdio.h>
int main()
{
    int a;
    int b;
    int *p = &a;
    int *q = &b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("SUM : %d", *p + *q);
}