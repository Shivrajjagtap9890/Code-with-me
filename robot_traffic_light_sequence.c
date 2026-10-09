#include <stdio.h>

void main()
{
    int cycles, i;
    printf("Enter number of traffic light cycles (1 to 5): ");
    scanf("%d", &cycles);
    if (cycles >= 1 && cycles <= 5)
    {
        for (i = 1; i <= cycles; i++)
        {
            printf("\nCycle %d\n", i);
            printf("RED - Stop\n");
            printf("YELLOW - Get Ready\n");
            printf("GREEN - Go\n");
        }
        printf("Traffic light simulation completed.\n");
    }
    else
        printf("Enter a number from 1 to 5.\n");
}
