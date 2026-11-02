#include <stdio.h>
#include <string.h>

void main()
{
    char first[50], second[50];

    printf("Enter first word: ");
    scanf("%49s", first);

    printf("Enter second word: ");
    scanf("%49s", second);

    if (strcmp(first, second) == 0)
        printf("Both words are same.");
    else
        printf("The words are different.");
}
