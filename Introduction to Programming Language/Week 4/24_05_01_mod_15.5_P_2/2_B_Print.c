#include <stdio.h>
void print(int a)
{
    for (int i = 1; i <= a; i++)
    {
        printf("%d", i);
        if (i == a)
            continue;
        printf(" ");
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}
