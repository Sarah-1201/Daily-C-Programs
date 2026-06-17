#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n & (1U << 31))
        printf("MSB is set\n");
    else
        printf("MSB is not set\n");

    return 0;
}