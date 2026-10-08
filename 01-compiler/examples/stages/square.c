#include <stdio.h>
#define SIZE 3

int main(void)
{
    int n = SIZE * SIZE;   /* the preprocessor turns SIZE into 3 */
    printf("%d\n", n);
    return 0;
}
