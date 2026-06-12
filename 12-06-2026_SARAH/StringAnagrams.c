#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if(strlen(str1) != strlen(str2))    // If lengths are different, they cannot be anagrams
    {
        printf("Not Anagram");
        return 0;
    }
    for(i = 0; str1[i] != '\0'; i++)  // Count frequency of each character in str1
    {
        freq[(unsigned char)str1[i]]++;
    }
    for(i = 0; str2[i] != '\0'; i++)   // Decrease frequency based on characters in str2
    {
        freq[(unsigned char)str2[i]]--;
    }
    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)      // If any frequency is not zero, then str1 and str2 are not anagrams
        {
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}

/* TERMINAL OUTPUT
Test Case : 1
Enter first string: SARAH
Enter second string: RICHA
Not Anagram

Test Case : 2
Enter first string: HEART
Enter second string: EARTH
Anagram
*/


/* STRING ANAGRAMS SUMMARY
Two strings are anagrams if they contain the same characters in the same frequency,
but possibly in a different order.
Checks if the lengths of the two strings are equal. If they are not, they cannot be anagrams.
Use an array to count the frequency of each character in the first string and then 
decreases the count based on the characters in the second string. 
If any count is not zero at the end, the strings are not anagrams; otherwise, they are anagrams.
*/