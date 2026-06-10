#include <stdio.h>
int main()
{
    char str[100], word[50];
    int i, j, found;
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the word to search: ");
    scanf("%s", word);
    for(i = 0; str[i] != '\0'; i++)
    {
        found = 1; // Assume the word is found until we iterate through the word and fina a mismatch
        for(j = 0; word[j] != '\0'; j++) 
        {
            if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }
        if(found)
        {      
            if((i == 0 || str[i - 1] == ' ') &&
               (str[i + j] == ' ' ||
                str[i + j] == '\0' ||
                str[i + j] == '\n'))    // Check if the found word is a separate word (not part of another word)
            {
                printf("First occurrence found at index %d\n", i);
                return 0;
            }
        }
    }
    printf("Word not found.\n");
    return 0;
}

/* Terminal Output
Test Case 1:
Enter the string: Searching for word in the string.
Enter the word to search: Search
Word not found.

Test Case 2:
Enter the string: Searching for word in the string.
Enter the word to search: searching
Word not found.

Test Case 3:
Enter the string: Searching for word in the string.
Enter the word to search: Searching
First occurrence found at index 0
*/

/* FIRST OCCURRENCE OF A WORD IN A STRING SUMMARY
Iterate through each character in the string.
For each character, check if it matches the first character of the word we are searching for.
If it matches, check the subsequent characters to see if they match the entire word.
If a complete match is found, check if the matched word is a separate word (not part of another word) by checking the characters before and after the matched word.
If the matched word is a separate word, return the index of its first occurrence.
*/