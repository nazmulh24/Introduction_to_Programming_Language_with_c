#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = 0, k = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        s++;
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        k -= 2;
        printf("\n");
    }
    return 0;
}
