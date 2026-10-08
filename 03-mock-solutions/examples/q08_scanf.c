#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%2d%*1d%3d%d", &a, &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
