#include <stdio.h>
int main()
{
    char str[100];
    int freq[256] = {0};
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
        /*
        This loop counts the frequency of each character in the string.
        The array 'freq' is indexed by the ASCII value of each character,
        and the corresponding element is incremented for each occurrence.
        When a char is used in an arithmetic expression or as an array index,
         C automatically converts it to an int. Used unsigned char to ensure 
         that the character is treated as a positive value, which is important 
         for indexing the frequency array correctly, especially for characters 
         with ASCII values above 127.

        */
    }
    printf("\nCharacter Frequencies:\n");
    for(i = 0; i < 256; i++)
    {
        if(freq[i] > 0 && i != '\n' && i!=' ') // Exclude newline character and space  from the output
        {
            printf("%c : %d\t", i, freq[i]);
        }
    }
    return 0;
}

/* Terminal Output
Enter a string: Hello! My name is Sarah.

Character Frequencies:
! : 1   . : 1   H : 1   M : 1   S : 1   a : 3   e : 2   h : 1  
 i : 1   l : 2   m : 1   n : 1   o : 1   r : 1     s : 1   y : 1
*/

/*
FREQUENCY OF EACH CHARACTER IN A STRING SUMMARY
Initialize a frequency array to 0 to store the count of each character.
Iterate through the input string and increment the corresponding index
 in the frequency array based on the ASCII value of each character.
After counting the frequencies, iterate through the frequency array and
print the characters and their corresponding frequencies, excluding 
newline and space characters and 0 frequencies.
 */

