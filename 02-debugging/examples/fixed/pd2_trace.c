#include <stdio.h>

/* Goal: sum of the digits of 4096  (4+0+9+6 = 19) */
int main(void)
{
    int n = 4096, sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("sum = %d\n", sum);
    return 0;
}
