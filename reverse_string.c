#include <stdio.h>
#include <string.h>

void main()
{
    char text[100];
    int i, length;

    printf("Enter a word: ");
    scanf("%99s", text);

    length = strlen(text);

    printf("Reversed word: ");
    for (i = length - 1; i >= 0; i--)
        printf("%c", text[i]);
}
