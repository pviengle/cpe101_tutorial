#include <stdio.h>

int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += a[i];
    printf("sum = %d\n", sum);
    return 0;
}
