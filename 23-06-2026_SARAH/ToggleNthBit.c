#include <stdio.h>

int main()
{
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter bit position: ");
    scanf("%d", &n);
    num = num ^ (1 << (n - 1));
    printf("Result = %d\n", num);
    return 0;
}