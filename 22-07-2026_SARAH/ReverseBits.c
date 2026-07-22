#include <stdio.h>
unsigned int reverseBits(unsigned int num)
{
    unsigned int rev = 0;
    for (int i = 0; i < 32; i++)
    {
        rev = rev << 1;      
        rev |= (num & 1);    
        num = num >> 1;     
    }
    return rev;
}
void printBinary(unsigned int num)
{
    for (int i = 31; i >= 0; i--)
    {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0)
            printf(" ");
    }
    printf("\n");
}
int main()
{
    unsigned int num;
    printf("Enter an unsigned integer: ");
    scanf("%u", &num);
    printf("\nOriginal Number : %u\n", num);
    printf("Binary          : ");
    printBinary(num);
    unsigned int reversed = reverseBits(num);
    printf("\nReversed Number : %u\n", reversed);
    printf("Binary          : ");
    printBinary(reversed);
    return 0;
}