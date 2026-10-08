#include <stdio.h>

int main(void)
{
    int sum;
    for (int i = 1; i <= 5; i++)
        sum += i;
    printf("sum = %d\n", sum);
    return 0;
}
