#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int x;
    scanf("%d", &x);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = a[i] + a[j];
            if (sum == x)
            {
                printf("YES\n%d + %d = %d\n", a[i], a[j], x);
                break;
            }
        }
    }
    return 0;
}
