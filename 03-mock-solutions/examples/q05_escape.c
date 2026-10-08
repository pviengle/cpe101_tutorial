#include <stdio.h>

int main(void)
{
    printf("Line 1\nLine 2\n");          /* \n  new line        */
    printf("Name\tScore\n");             /* \t  horizontal tab  */
    printf("ABC\bD\n");                  /* \b  backspace       */
    printf("He said \"Hi\"\n");          /* \"  double quote    */
    printf("Done!\a\n");                 /* \a  alert (beep)    */
    printf("C:\\cpe101\\lab1\n");        /* \\  backslash       */
    return 0;
}
