#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *words[50];
    int count = 0;

    char *ptr = str;

    words[count++] = ptr;

    while(*ptr != '\0')
    {
        if(*ptr == ' ')
        {
            *ptr = '\0';      

            ptr++;

            words[count++] = ptr;   
        }
        else
        {
            ptr++;
        }
    }

    printf("\nSentence after reversing words:\n");

    for(int i = count - 1; i >= 0; i--)
    {
        printf("%s ", words[i]);
    }

    return 0;
}