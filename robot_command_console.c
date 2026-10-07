#include <stdio.h>

void main()
{
    int command, i;

    printf("===== ROBOT COMMAND CONSOLE =====\n");

    for (i = 1; i <= 5; i++)
    {
        printf("\nEnter command %d (1=Forward, 2=Left, 3=Right): ", i);
        scanf("%d", &command);

        if (command == 1)
        {
            printf("Robot moves Forward.");
        }
        else if (command == 2)
        {
            printf("Robot turns Left.");
        }
        else if (command == 3)
        {
            printf("Robot turns Right.");
        }
        else
        {
            printf("Unknown command.");
        }
    }

    printf("\nCommand sequence completed.");
}
