#include <stdio.h>

int main(void)
{
    int score;
    float avg = 7.5;
    printf("avg = %d\n", avg);   /* wrong specifier */
    if (score = 10)               /* = instead of == */
        printf("ten!\n");
    return 0;
}
