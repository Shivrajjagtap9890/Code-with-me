#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, choice;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Result = %d", a + b);
            break;

        case 2:
            printf("Result = %d", a - b);
            break;

        case 3:
            printf("Result = %d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    getch();
}
