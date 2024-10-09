#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1, space = 5 + n / 2;
    int i = 1;
    while (1)
    {
        for (int j = 1; j <= space; j++)
            printf(" ");
        space--;
        for (int j = 1; j <= star; j++)
            printf("*");
        star += 2;
        printf("\n");
        i++;
        if (star == 12 + n)
            break;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
            printf(" ");
        for (int j = 1; j <= n; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
