#include <stdio.h>
#include <math.h>          /* for sqrt() */

int main(void)
{
    double u, a, s, inside;

    printf("Enter u, a, s: ");
    scanf("%lf %lf %lf", &u, &a, &s);

    inside = u * u + 2 * a * s;
    if (inside < 0)
    {
        printf("Error: u^2 + 2as = %.2f is negative,"
               " no real velocity.\n", inside);
        return 1;
    }
    printf("v = %.2f\n", sqrt(inside));
    return 0;
}
