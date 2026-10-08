#include <stdio.h>

int main(void)
{
    int k, runs = 0;
    for (k = 1; k <= 100; k = k * 3)
    {
        printf("%d ", k);
        runs++;
    }
    printf("\nbody ran %d times, k after loop = %d\n", runs, k);
    return 0;
}
