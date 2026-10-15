#include <stdio.h>

void main()
{
    int i, n, marks, pass = 0, fail = 0;

    printf("How many students? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter marks for student %d: ", i);
        scanf("%d", &marks);

        if(marks >= 35)
            pass++;
        else
            fail++;
    }

    printf("Passed students = %d\n", pass);
    printf("Failed students = %d\n", fail);
}
