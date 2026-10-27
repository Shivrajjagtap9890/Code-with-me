#include <stdio.h>

void main()
{
    int i, limit;
    int sum = 0;

    printf("Enter a positive limit: ");
    scanf("%d", &limit);

    for(i = 1; i <= limit; i++)
    {
        sum = sum + (i * i);
    }

    printf("Sum of squares from 1 to %d = %d\n", limit, sum);
}
