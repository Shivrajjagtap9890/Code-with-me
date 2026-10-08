#include <stdio.h>

void main()
{
    int task_time, break_time, total_time;

    printf("Enter robot task time in minutes: ");
    scanf("%d", &task_time);

    printf("Enter break time in minutes: ");
    scanf("%d", &break_time);

    total_time = task_time + break_time;

    printf("Total robot schedule time = %d minutes", total_time);
}
