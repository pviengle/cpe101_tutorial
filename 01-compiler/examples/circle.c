#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979

int main(void)
{
    double r = 2.0;
    double area = PI * pow(r, 2);
    printf("area = %.2f\n", area);
    printf("sqrt(2) = %.4f\n", sqrt(2.0));
    return 0;
}
