//--> C. Next Alphabet
#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if (n == 'z')
        printf("a\n");
    else
        printf("%c\n", n + 1);
    return 0;
}
