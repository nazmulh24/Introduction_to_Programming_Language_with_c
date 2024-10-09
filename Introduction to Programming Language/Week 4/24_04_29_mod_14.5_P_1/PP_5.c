#include <stdio.h>

char capital_to_small(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
    return ch;
}

int main()
{
    char c;
    scanf(" %c", &c);
    char sml = capital_to_small(c);
    printf("%c\n", sml);
    return 0;
}
