//--> G. Conversion
#include <stdio.h>
int main()
{
    char s[100001];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; i < sizeof(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
        else if (s[i] == ',')
            s[i] = ' ';
    }
    printf("%s", s);
    return 0;
}
