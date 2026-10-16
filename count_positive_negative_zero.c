#include <stdio.h>

void main()
{
    int i, n, value;
    int positive = 0, negative = 0, zero = 0;

    printf("How many numbers will you enter? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &value);

        if(value > 0)
            positive++;
        else if(value < 0)
            negative++;
        else
            zero++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zeros = %d\n", zero);
}
