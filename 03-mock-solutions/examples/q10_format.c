#include <stdio.h>

int main(void)
{
    int n = 42;
    float f = 3.14159;

    printf("[%5d]\n", n);
    printf("[%-5d]\n", n);
    printf("[%.2f]\n", f);
    printf("[%8.3f]\n", f);
    printf("[%e]\n", f);
    return 0;
}
