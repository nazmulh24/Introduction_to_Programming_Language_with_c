#include <stdio.h>
#include <string.h>
int main()
{
    char x[21], y[21];
    scanf("%s %s", x, y);
    int l = strcmp(x, y);
    if (l > 0)
        printf("%s\n", y);
    else if (l < 0)
        printf("%s\n", x);
    else
        printf("%s\n", y);
}
