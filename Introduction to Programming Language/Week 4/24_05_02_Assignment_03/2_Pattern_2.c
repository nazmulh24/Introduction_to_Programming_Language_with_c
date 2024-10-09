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
        for (int i = k; i >= 1; i--)
        {
            printf("%d", i);
        }
        k++;
        printf("\n");
    }
    return 0;
}
