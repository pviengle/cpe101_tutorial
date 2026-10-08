#include <stdio.h>

void original(int marks, int attendance)
{
    if (marks >= 50)
        if (attendance >= 80)
            printf("Pass");
    else
        printf("Fail");
}

void fixed(int marks, int attendance)
{
    if (marks >= 50)
    {
        if (attendance >= 80)
            printf("Pass");
    }
    else
        printf("Fail");
}

int main(void)
{
    printf("original(40, 90): [");  original(40, 90); printf("]\n");
    printf("original(60, 70): [");  original(60, 70); printf("]\n");
    printf("fixed(40, 90):    [");  fixed(40, 90);    printf("]\n");
    printf("fixed(60, 70):    [");  fixed(60, 70);    printf("]\n");
    return 0;
}
