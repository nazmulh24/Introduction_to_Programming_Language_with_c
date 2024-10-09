#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        s--;
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }
    return 0;
}
