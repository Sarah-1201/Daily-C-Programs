#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int left = 0;
    int right = strlen(str) - 1;
    int isPalindrome = 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");
    return 0;
}

/* TERMINAL OUTPUT
Enter a string: ABCBA
Palindrome
*/

/* STRING PALINDROME SUMMARY
Take a string as input and initialize two indices: one at the beginning and one at the end.
Compare the characters at both indices.
If any pair of characters differs, the string is not a palindrome.
If all corresponding characters match until the indices meet, the string is a palindrome.
*/