//-->> P. First digit !

#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int fd = x / 1000;
    if (fd % 2 == 0)
        printf("EVEN\n");
    else
        printf("ODD\n");
    return 0;
}
