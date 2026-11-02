#include <stdio.h>

void main()
{
    char sentence[200];
    int i, words = 0, insideWord = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\t')
        {
            if (insideWord == 0)
            {
                words++;
                insideWord = 1;
            }
        }
        else
        {
            insideWord = 0;
        }
    }

    printf("Number of words = %d", words);
}
