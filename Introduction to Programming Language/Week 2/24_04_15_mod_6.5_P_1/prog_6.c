//--> G. Katryoshka
#include <stdio.h>
int main()
{
    long long int n, m, k, min;
    scanf("%lld %lld %lld", &n, &m, &k);

    if (n <= m && n <= k)
        min = n;
    else if (m <= n && m <= k)
        min = m;
    else if (k <= n && k <= m)
        min = k;

    long long int n1, m1, k1, total;
    n1 = (n - min) / 2;
    k1 = k - min;
    if (n1 <= k1)
        total = min + n1;
    else
        total = min + k1;

    printf("%lld", total);
    return 0;
}
