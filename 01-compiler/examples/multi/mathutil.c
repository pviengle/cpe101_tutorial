#include "mathutil.h"

int call_count = 0;   /* global: other files can use it via extern */

/* static: this helper is private to mathutil.c */
static int mul(int a, int b)
{
    return a * b;
}

int square(int x)
{
    call_count++;
    return mul(x, x);
}

int cube(int x)
{
    call_count++;
    return mul(x, mul(x, x));
}
