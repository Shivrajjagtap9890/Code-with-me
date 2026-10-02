#include<stdio.h>

void main()
{
    int distance1, distance2, total;

    printf("Enter distance covered by sensor 1: ");
    scanf("%d",&distance1);

    printf("Enter distance covered by sensor 2: ");
    scanf("%d",&distance2);

    total = distance1 + distance2;

    printf("Total distance = %d",total);
}