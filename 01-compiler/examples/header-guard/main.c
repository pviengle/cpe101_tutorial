#include "point.h"
#include "point.h"   /* included twice by accident */

int main(void)
{
    struct point p = {1, 2};
    return p.x;
}
