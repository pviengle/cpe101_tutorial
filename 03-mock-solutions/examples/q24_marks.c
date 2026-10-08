#include <stdio.h>

#define N 6

int main(void)
{
    float marks[N] = {67.5, 82.0, 45.5, 90.0, 73.5, 58.0};
    float high = marks[0], low = marks[0], sum = 0, avg;
    int i, above = 0;

    for (i = 0; i < N; i++)
    {
        if (marks[i] > high) high = marks[i];
        if (marks[i] < low)  low  = marks[i];
        sum += marks[i];
    }
    avg = sum / N;

    for (i = 0; i < N; i++)
        if (marks[i] > avg)
            above++;

    printf("Highest = %.1f\n", high);
    printf("Lowest  = %.1f\n", low);
    printf("Average = %.2f\n", avg);
    printf("Above average: %d\n", above);
    return 0;
}
