#include <stdio.h>

int main(void)
{
    int total = 15;
    char name[20];

    printf("Name? ");
    scanf("%19s", name);

    /* Looks right on screen, but the grader says "wrong answer" */
    printf("Total: %d \n", total);

    /* Debug: wrap values in [ ] so spaces become visible */
    printf("[Total: %d ]\n", total);
    printf("[%s]\n", name);
    printf("[%5d]\n", total);
    return 0;
}
