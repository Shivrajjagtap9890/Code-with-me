#include <stdio.h>

void main()
{
    char text[100];
    int i, upper = 0, lower = 0;

    printf("Enter a line: ");
    fgets(text, sizeof(text), stdin);

    for (i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
            upper++;
        else if (text[i] >= 'a' && text[i] <= 'z')
            lower++;
    }

    printf("Uppercase letters = %d\n", upper);
    printf("Lowercase letters = %d", lower);
}
