#include <stdio.h>
int my_len(char c[])
{
    int len = 0;
    for (int i = 0; c[i] != '\0'; i++)
        len++;
    return len;
}
int main()
{
    char ch[100];
    scanf("%s", ch);
    int l = my_len(ch);
    printf("%d\n", l);
    return 0;
}
