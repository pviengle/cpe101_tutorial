#include <stdio.h>

int main(void)
{
    int i, sum;
    sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
        if (sum > 20)
            break;
    }
    printf("i = %d, sum = %d", i, sum);
    printf("\n");
    return 0;
}
