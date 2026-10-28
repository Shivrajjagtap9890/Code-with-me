#include <stdio.h>

float findAverage(int values[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + values[i];
    }

    return (float)sum / n;
}

void main()
{
    int values[100], n, i, count = 0;
    float average;

    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    if(n <= 0 || n > 100)
    {
        printf("Please enter a count from 1 to 100.\n");
        return;
    }

    for(i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    average = findAverage(values, n);

    for(i = 0; i < n; i++)
    {
        if(values[i] > average)
            count++;
    }

    printf("Average = %.2f\n", average);
    printf("Numbers above average = %d\n", count);
}
