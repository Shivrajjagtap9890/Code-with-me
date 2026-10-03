#include <stdio.h>

void main()
{
    float weight;

    printf("Enter robot payload weight: ");
    scanf("%f", &weight);

    if (weight < 5)
    {
        printf("Robot Mode: Light Load");
    }
    else if (weight <= 15)
    {
        printf("Robot Mode: Normal Load");
    }
    else
    {
        printf("Robot Mode: Overload");
    }
}
