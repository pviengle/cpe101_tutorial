#include <stdio.h>
#include "counter.h"

int main(void)
{
    add(5);
    add(7);
    printf("total = %d\n", total);   /* OK: total is extern  */
    /* printf("%d", calls);  ERROR: calls is static in counter.c */
    return 0;
}
