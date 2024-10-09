#include <stdio.h>
void SUM(int x, int y)
{
    printf("%d\n", x + y);
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    SUM(x, y);
    return 0;
}
