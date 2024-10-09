//--> F. Way Too Long Words
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[101];
        scanf("%s", s);
        int sl = strlen(s);
        if (sl <= 10)
            printf("%s\n", s);
        else
            printf("%c%d%c\n", s[0], (sl - 2), s[sl - 1]);
    }
    return 0;
}
