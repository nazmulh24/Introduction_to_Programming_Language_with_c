//--> A. Create A New String
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s", s);
    scanf("%s", t);
    int sl_s = strlen(s);
    int sl_t = strlen(t);
    printf("%d %d\n", sl_s, sl_t);
    printf("%s %s\n", s, t);
    return 0;
}
