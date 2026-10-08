#include <stdio.h>

/* Goal: a right-aligned triangle, n = 4
         #
        ##
       ###
      ####          */
int main(void)
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("#");
        printf("\n");
    }
    return 0;
}
