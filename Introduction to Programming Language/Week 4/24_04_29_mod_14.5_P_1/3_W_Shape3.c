#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s1 = n-1, k1 = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s1; j++)
        {
            printf(" ");
        }
        s1--;
        for (int j = 1; j <= k1; j++)
        {
            printf("*");
        }
        k1 += 2;
        printf("\n");
    }
    int s2 = 0, k2 = 2 * n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            printf(" ");
        }
        s2++;
        for (int j = 1; j <= k2; j++)
        {
            printf("*");
        }
        k2 -= 2;
        printf("\n");
    }
}
