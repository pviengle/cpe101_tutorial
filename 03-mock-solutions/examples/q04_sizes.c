#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("char      %zu byte   %d .. %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("short     %zu bytes  %d .. %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("int       %zu bytes  %d .. %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned  %zu bytes  0 .. %u\n", sizeof(unsigned int), UINT_MAX);
    printf("long      %zu bytes  %ld .. %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("long long %zu bytes  %lld .. %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("float     %zu bytes  up to %e (%d digits)\n", sizeof(float), FLT_MAX, FLT_DIG);
    printf("double    %zu bytes  up to %e (%d digits)\n", sizeof(double), DBL_MAX, DBL_DIG);
    return 0;
}
