#include <stdio.h>

int main()
{
    int position, evenNumber;

    printf("Enter the position of the even number (1-50): ");
    scanf("%d", &position);

    if (position >= 1 && position <= 50)
    {
        evenNumber = position * 2;
        printf("The even number at position %d is %d\n", position, evenNumber);
    }
    else
    {
        printf("Invalid position! Please enter a position from 1 to 50.\n");
    }

    return 0;
}
