#include <stdio.h>

void main()

{

    float angle;

    printf("Enter robot arm angle: ");

    scanf("%f", &angle);

    if (angle < 30)

    {

        printf("Position: Arm Too Low");

    }

    else if (angle <= 120)

    {

        printf("Position: Working Range");

    }

    else

    {

        printf("Position: Arm Too High");

    }

}
