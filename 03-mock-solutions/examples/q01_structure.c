/*  Documentation section
 *  Program : Area of a circle
 *  Author  : CPE101 TA
 */
#include <stdio.h>              /* Link section       */

#define PI 3.14159              /* Definition section */

double area(double r);          /* Global declaration section */
int call_count = 0;

int main(void)                  /* main() function section */
{
    double r = 2.0;
    printf("Area = %.2f\n", area(r));
    printf("area() was called %d time(s)\n", call_count);
    return 0;
}

double area(double r)           /* Sub-program section */
{
    call_count++;
    return PI * r * r;
}
