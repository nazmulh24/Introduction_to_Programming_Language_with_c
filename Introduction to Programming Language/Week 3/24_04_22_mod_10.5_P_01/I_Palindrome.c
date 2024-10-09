//--> I. Palindrome
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int sl = strlen(s);

    char s2[sl];
    for (int i = 0; i <= sl; i++)
        s2[i] = s[i]; //--> copy string.

    int i = 0, j = sl - 1;
    bool t = false;
    while (i < sl / 2)
    {
        if (s2[i] != s[j])
            t = true;
        i++;
        j--;
    }
    if (t)
        printf("NO");
    else
        printf("YES");
    return 0;
}
