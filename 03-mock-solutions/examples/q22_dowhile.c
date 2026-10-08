#include <stdio.h>

void run(int start)
{
    int k = start;
    printf("start k = %d\n", start);

    printf("  while   : [");
    while (k > 0)
    {
        printf("*");
        k--;
    }
    printf("] k = %d\n", k);

    k = start;
    printf("  do-while: [");
    do
    {
        printf("*");
        k--;
    } while (k > 0);
    printf("] k = %d\n", k);
}

int main(void)
{
    run(0);
    run(3);
    return 0;
}
