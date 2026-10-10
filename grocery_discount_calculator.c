#include <stdio.h>

void main()
{
    float bill, discount, finalBill;

    printf("Enter grocery bill amount: Rs. ");
    scanf("%f", &bill);

    if (bill >= 1000)
        discount = bill * 0.10;
    else if (bill >= 500)
        discount = bill * 0.05;
    else
        discount = 0;

    finalBill = bill - discount;

    printf("\nOriginal bill: Rs. %.2f", bill);
    printf("\nDiscount: Rs. %.2f", discount);
    printf("\nAmount to pay: Rs. %.2f\n", finalBill);
}