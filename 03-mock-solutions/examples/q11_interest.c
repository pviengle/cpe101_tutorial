#include <stdio.h>
#include <math.h>          /* for pow() */

int main(void)
{
    double P, R, T, A;

    printf("Principal (P): ");
    scanf("%lf", &P);
    printf("Rate %% per year (R): ");
    scanf("%lf", &R);
    printf("Time in years (T): ");
    scanf("%lf", &T);

    A = P * pow(1 + R / 100, T);

    printf("Final amount   = %.2f\n", A);
    printf("Interest earned = %.2f\n", A - P);
    return 0;
}
