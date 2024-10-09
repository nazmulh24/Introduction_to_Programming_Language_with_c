#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m1, m2, d, m;
        scanf("%d %d %d", &m1, &m2, &d);
        m = m1 + m2;
        int ans = d - m1 * d / m;
        printf("%d\n", ans);
    }
    return 0;
}
