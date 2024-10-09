#include <stdio.h>
int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    float rp = (float)p / (1 - (float)x / 100);
    printf("%.2f\n", rp);
    return 0;
}
