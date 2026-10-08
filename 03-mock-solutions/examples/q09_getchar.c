#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch, vowels = 0, spaces = 0;

    printf("Type a sentence ending with '.':\n");
    while ((ch = getchar()) != '.' && ch != EOF)
    {
        switch (tolower(ch))
        {
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vowels++;
                break;
            case ' ':
                spaces++;
                break;
        }
        putchar(toupper(ch));
    }
    printf("\nVowels: %d\nSpaces: %d\n", vowels, spaces);
    return 0;
}
