#include<stdio.h>
int main()
{
    int a;
    int b;
    int *p = &a;
    int *q = &b;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    *p = *p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("Value of a : %d \n", *p);
    printf("Value of b : %d", *q);


}