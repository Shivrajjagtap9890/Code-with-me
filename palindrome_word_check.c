#include <stdio.h>
#include <string.h>

void main()
{
    char word[100];
    int i, length, same = 1;

    printf("Enter a word: ");
    scanf("%99s", word);

    length = strlen(word);

    for (i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - 1 - i])
        {
            same = 0;
            break;
        }
    }

    if (same == 1)
        printf("The word is a palindrome.");
    else
        printf("The word is not a palindrome.");
}
