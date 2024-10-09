#include <stdio.h>
int my_abs(int a)
{
    int abs = a;
    if (a < 0)
        abs = -a;
    return abs;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ans = my_abs(n);
    printf("%d\n", ans);
    return 0;
}
