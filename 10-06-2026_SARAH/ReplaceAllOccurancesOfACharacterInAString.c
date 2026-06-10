#include <stdio.h>
int main()
{
    char str[100];
    char old, new;
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to replace: ");
    scanf(" %c", &old);
    printf("Enter the new character: ");
    scanf(" %c", &new);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == old)
        {
            str[i] = new;
        }
    }
    printf("Modified string: %s", str);
    return 0;
}

/* TERMINAL OUTPUT
Enter a string: Hi! This is Sarah.
Enter the character to replace: i
Enter the new character: o
Modified string: Ho! Thos os Sarah.
*/

/* 
REPLACE ALL OCCURRENCES OF A CHARACTER IN A STRING SUMMARY
Iterate through each character in the string.
If the current character matches the character to be replaced, replace it with the new character.
Continue this process until the end of the string is reached.
*/