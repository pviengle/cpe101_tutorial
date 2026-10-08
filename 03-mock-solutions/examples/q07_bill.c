#include <stdio.h>

#define VAT_RATE       0.07     /* 7 %                     */
#define DISCOUNT_RATE  0.05     /* 5 %                     */
#define DISCOUNT_LIMIT 2000.0   /* discount if bill > this */

int main(void)
{
    double bill, discount = 0.0, vat, total;

    printf("Enter bill amount (Baht): ");
    scanf("%lf", &bill);

    if (bill > DISCOUNT_LIMIT)
        discount = bill * DISCOUNT_RATE;

    vat   = (bill - discount) * VAT_RATE;
    total = bill - discount + vat;

    printf("Bill     : %10.2f\n", bill);
    printf("Discount : %10.2f\n", discount);
    printf("VAT 7%%   : %10.2f\n", vat);
    printf("Total    : %10.2f\n", total);
    return 0;
}
