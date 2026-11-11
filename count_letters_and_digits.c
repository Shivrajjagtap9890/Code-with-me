#include <stdio.h>

void main()
{
    char text[150];
    int i, letters = 0, digits = 0;

    printf("Enter a line: ");
    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i] != '\0'; i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') ||
            (text[i] >= 'a' && text[i] <= 'z'))
            letters++;
        else if (text[i] >= '0' && text[i] <= '9')
            digits++;
    }

    printf("Letters = %d\n", letters);
    printf("Digits = %d", digits);
}
