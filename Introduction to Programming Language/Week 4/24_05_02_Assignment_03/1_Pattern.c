#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s1 = n - 1, s2 = 1;
    int h1 = 1;
    int d1 = 3;
    int d = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s1; j++)
        {
            printf(" ");
        }
        s1--;
        if (d % 2 != 0)
        {
            for (int j = 1; j <= h1; j++)
            {
                printf("#");
            }
            h1 += 4;
        }
        else
        {
            for (int j = 1; j <= d1; j++)
            {
                printf("-");
            }
            d1 += 4;
        }
        d++;
        printf("\n");
    }
    //---------------------------------------
    int h2, d2;
    if (n % 2 == 0)
    {
        h2 = h1 - 4;
        d2 = d1 - 8;
    }
    else
    {
        h2 = h1 - 8;
        d2 = d1 - 4;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            printf(" ");
        }
        s2++;

        if (d % 2 != 0)
        {
            for (int j = 1; j <= h2; j++)
            {
                printf("#");
            }
            h2 -= 4;
        }
        else
        {
            for (int j = 1; j <= d2; j++)
            {
                printf("-");
            }
            d2 -= 4;
        }
        d++;
        printf("\n");
    }
    return 0;
}
