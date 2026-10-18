#include <stdio.h>

void main()
{
    int marks;

    printf("Enter marks out of 100: ");
    scanf("%d", &marks);

    if (marks >= 35)
    {
        printf("Result: Pass");
    }
    else
    {
        printf("Result: Needs improvement");
    }
}
