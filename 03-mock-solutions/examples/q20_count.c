#include <stdio.h>

int main(void)
{
    int i, j, count;

    count = 0;
    for (i = 0; i < 4; i++)
        for (j = i; j < 6; j++)
            count++;                      /* stands in for printf("#") */
    printf("part 1: %d\n", count);

    count = 0;
    for (i = 1; i <= 6; i++)
    {
        int row = 0;
        for (j = 1; j <= i; j = j + 2)
            row++;                        /* stands in for printf("*") */
        printf("  i = %d: %d time(s)\n", i, row);
        count += row;
    }
    printf("part 2: %d\n", count);
    return 0;
}
