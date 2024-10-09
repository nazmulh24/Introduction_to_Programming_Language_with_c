#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 12; i++)
        printf("%d * %d = %d\n", n, i + 1, n * (i + 1));
    return 0;
}
