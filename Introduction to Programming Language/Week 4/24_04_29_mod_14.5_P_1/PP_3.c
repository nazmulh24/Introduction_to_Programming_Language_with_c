#include <stdio.h>

int char_to_ascii(char ch)
{
    int v = ch;
    return v;
}

int main()
{
    char c;
    scanf(" %c", &c);
    int val = char_to_ascii(c);
    printf("%d\n", val);
    return 0;
}
