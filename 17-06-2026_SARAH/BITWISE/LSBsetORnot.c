#include <stdio.h>
int LSB(int n)
{
    if(n&1)
        return 1;
    return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (LSB(n))
        printf("LSB is set");
    else
        printf("LSB is not set");
}