#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;

    clrscr();

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Largest number = %d", a);
    else
        printf("Largest number = %d", b);

    getch();
}
