#include <stdio.h>

/* Average of 4 marks: should print 72.50 */
int main(void)
{
    int marks[4] = {60, 75, 80, 75};
    int total = 0;
    float avg;

    for (int i = 1; i < 4; i++)
        total = total + marks[i];

    avg = total / 4.0;
    printf("average = %.2f\n", avg);
    return 0;
}
