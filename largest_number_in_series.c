#include <stdio.h>

void main()
{
    int n, i, num, largest;

    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Enter number 1: ");
        scanf("%d", &largest);

        for (i = 2; i <= n; i++)
        {
            printf("Enter number %d: ", i);
            scanf("%d", &num);

            if (num > largest)
            {
                largest = num;
            }
        }

        printf("Largest number = %d", largest);
    }
    else
    {
        printf("Please enter at least one number.");
    }
}
