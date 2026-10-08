#include "counter.h"

int total = 0;             /* the one real definition            */
static int calls = 0;      /* static: only counter.c can see it  */

void add(int x)
{
    calls++;
    total += x;
}
