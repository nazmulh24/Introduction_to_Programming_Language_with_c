#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf("%d", &n);
    bool x = false;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            x = true;
        }
    }
    if (!x)
        printf("-1\n");
    return 0;
}
