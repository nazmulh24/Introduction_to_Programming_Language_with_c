//--> B. Let's use Getline
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000001];
    fgets(s, sizeof(s), stdin);
    for (int i = 0; s[i] != '\\'; i++)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}
