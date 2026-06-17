#include <stdio.h>
int reverse(int n, int rev)
{
    if (n == 0)
        return rev;
    return reverse(n / 10, rev * 10 + n % 10);
} 
int isPalindrome(int n)
{
    return n == reverse(n, 0);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}