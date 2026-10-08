#include <stdio.h>

int main(void)
{
    int count;          /* declared only: value is garbage   */
    int total = 0;      /* declared AND initialized          */

    for (int i = 1; i <= 3; i++)
    {
        count = count + 1;   /* starts from garbage! */
        total = total + i;
    }
    printf("count = %d (expected 3)\n", count);
    printf("total = %d (expected 6)\n", total);
    return 0;
}
