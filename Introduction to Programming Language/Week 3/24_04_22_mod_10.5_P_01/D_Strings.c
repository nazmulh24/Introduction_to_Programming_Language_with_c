//--> D. Strings
#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);
    //-------------------------------
    int sl_a = strlen(a);
    int sl_b = strlen(b);
    printf("%d %d\n", sl_a, sl_b);
    //-------------------------------
    char c[22];
    for (int i = 0; i < sl_a; i++)
        c[i] = a[i];

    int i = sl_a, j = 0;
    while (j < sl_b)
    {
        c[i] = b[j];
        i++;
        j++;
    }
    c[i] = '\0';
    printf("%s\n", c);
    //-------------------------------
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);

    return 0;
}
