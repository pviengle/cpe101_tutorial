#include <stdio.h>

int main(void)
{
    int a = 5;
    int x = a++ + a++;      /* undefined behaviour! */
    printf("x = %d, a = %d\n", x, a);
    return 0;
}
