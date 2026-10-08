#include <stdio.h>

/* Goal: sum of the digits of 4096  (4+0+9+6 = 19) */
int main(void)
{
    int n = 4096, sum = 0;
    while (n > 10)
    {
        printf("[DEBUG] n=%d  digit=%d  sum=%d\n", n, n % 10, sum);
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("sum = %d\n", sum);
    return 0;
}
