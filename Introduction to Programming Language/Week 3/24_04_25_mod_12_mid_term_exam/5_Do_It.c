#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
            printf("%d ", j + 1);
        printf("\n");
    }
    return 0;
}
