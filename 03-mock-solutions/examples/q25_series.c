#include <stdio.h>

int main(void)
{
    double eps_list[] = {1e-2, 1e-4, 1e-6};

    for (int e = 0; e < 3; e++)
    {
        double epsilon = eps_list[e];
        int n = 1;
        double sum = 0, term = 1.0 / (n * (n + 1));
        while (term > epsilon)
        {
            sum = sum + term;
            n++;
            term = 1.0 / (n * (n + 1));
        }
        int k = 0;                      /* compare: terms 1/2^k */
        double t = 0.5;
        while (t > epsilon) { t /= 2; k++; }
        printf("eps = %g: %4d iterations, sum = %.6f | 1/2^n series: %2d iterations\n",
               epsilon, n - 1, sum, k);
    }

    int n = 1;                          /* (c) what if we write 1 ? */
    printf("1 / (n*(n+1)) with ints = %d,  1.0 / (n*(n+1)) = %.2f\n",
           1 / (n * (n + 1)), 1.0 / (n * (n + 1)));
    return 0;
}
