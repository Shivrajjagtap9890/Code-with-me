#include <stdio.h>

void main()
{
    int cycles, i;

    printf("Enter number of robot cycles: ");
    scanf("%d", &cycles);

    printf("Robot cycle numbers:\n");

    for (i = 1; i <= cycles; i++)
    {
        printf("Cycle %d\n", i);
    }
}