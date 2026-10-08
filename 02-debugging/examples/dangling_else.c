#include <stdio.h>

int main(void)
{
    int marks = 40, attendance = 90;
    if (marks >= 50)
        if (attendance >= 80)
            printf("Pass\n");
    else
        printf("Fail\n");
    printf("done\n");
    return 0;
}
