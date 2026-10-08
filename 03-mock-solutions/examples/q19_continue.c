#include <stdio.h>

int main(void)
{
    int i;
    for (i = 1; i <= 15; i++)
    {
        if (i % 2 == 0 || i % 5 == 0)
            continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
