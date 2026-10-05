#include <stdio.h>

void main()
{
    int battery;

    printf("Enter robot battery percentage: ");
    scanf("%d", &battery);

    if (battery >= 70)
    {
        printf("Battery Status: Ready for operation");
    }
    else if (battery >= 30)
    {
        printf("Battery Status: Recharge soon");
    }
    else
    {
        printf("Battery Status: Low battery");
    }
}
