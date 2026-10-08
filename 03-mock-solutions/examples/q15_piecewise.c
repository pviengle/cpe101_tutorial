#include <stdio.h>

int main(void)
{
    int x, y1, y2, y3;
    printf("x = ");
    scanf("%d", &x);

    /* (a) nested if */
    if (x < 5)
        y1 = x * x - 1;
    else
    {
        if (x == 5)
            y1 = 50;
        else
            y1 = 2 * x + 3;
    }

    /* (b) else-if ladder */
    if (x < 5)
        y2 = x * x - 1;
    else if (x == 5)
        y2 = 50;
    else
        y2 = 2 * x + 3;

    /* (c) conditional operator */
    y3 = (x < 5) ? x * x - 1 : (x == 5) ? 50 : 2 * x + 3;

    printf("nested if: %d, ladder: %d, ?: %d\n", y1, y2, y3);
    return 0;
}
