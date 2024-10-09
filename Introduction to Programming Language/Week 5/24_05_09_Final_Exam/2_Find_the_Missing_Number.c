#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long int ans = -1;
        if (m % (a * b * c) == 0)
            ans = m / (a * b * c);
        printf("%lld\n", ans);
    }
    return 0;
}
