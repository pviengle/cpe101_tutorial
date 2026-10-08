#include <stdio.h>

int main(void)
{
    int n = 5, fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
#ifdef DEBUG
        printf("[DEBUG] i=%d fact=%d\n", i, fact);
#endif
    }
    printf("%d! = %d\n", n, fact);
    return 0;
}
