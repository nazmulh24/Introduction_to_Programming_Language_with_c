#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        do
        {
            int rem = n % 10;
            printf("%d ", rem);
            n /= 10;
        } while (n != 0);
        printf("\n");
    }
    return 0;
}
