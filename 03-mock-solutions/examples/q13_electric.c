#include <stdio.h>

int main(void)
{
    int id;
    double units, bill;

    printf("Customer ID: ");
    scanf("%d", &id);
    printf("Units used : ");
    scanf("%lf", &units);

    if (units <= 100)
        bill = units * 4;
    else if (units <= 200)
        bill = 100 * 4 + (units - 100) * 5;
    else
        bill = 100 * 4 + 100 * 5 + (units - 200) * 6.50;

    bill = bill + 25;                     /* service charge */

    printf("Customer %d: total bill = %.2f Baht\n", id, bill);
    return 0;
}
