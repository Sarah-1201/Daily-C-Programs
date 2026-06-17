#include<stdio.h>
int main()
{
    int n;
    int num;
    int nbit=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter bit :");
    scanf("%d",&n);
    nbit=( num >> (n-1) )&1;
    printf("%d",nbit);
} 