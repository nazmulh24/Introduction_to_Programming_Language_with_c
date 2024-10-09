#include <stdio.h>
int count_odd(int *ar, int n)
{
    int odd = 0;
    for (int i = 0; i < n; i++)
        if (ar[i] % 2 != 0)
            odd++;
    return odd;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int cnt = count_odd(a, n);
    printf("%d\n", cnt);
    return 0;
}
