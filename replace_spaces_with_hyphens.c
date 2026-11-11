#include <stdio.h>

void main()
{
    char sentence[150];
    int i;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ')
            sentence[i] = '-';
    }

    printf("Updated sentence: %s", sentence);
}
