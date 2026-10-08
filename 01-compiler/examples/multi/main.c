#include <stdio.h>
#include "mathutil.h"

int main(void)
{
    printf("square(5) = %d\n", square(5));
    printf("cube(3)   = %d\n", cube(3));
    printf("calls     = %d\n", call_count);
    return 0;
}
