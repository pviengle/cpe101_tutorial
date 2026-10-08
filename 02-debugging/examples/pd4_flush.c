#include <stdio.h>

int main(void)
{
    int age;
    printf("Age: ");
    fflush(stdout);                            /* push "Age: " out now */
    fprintf(stderr, "[DEBUG] before scanf\n"); /* stderr is not buffered */
    scanf("%d", age);                          /* BUG: should be &age */
    fprintf(stderr, "[DEBUG] after scanf\n");
    printf("Next year you are %d\n", age + 1);
    return 0;
}
