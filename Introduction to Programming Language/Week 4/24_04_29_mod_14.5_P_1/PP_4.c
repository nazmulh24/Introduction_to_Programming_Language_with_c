#include <stdio.h>

char small_to_capital(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        ch = ch - 32;
    return ch;
}

int main()
{
    char c;
    scanf(" %c", &c);
    char cap = small_to_capital(c);
    printf("%c\n", cap);
    return 0;
}
