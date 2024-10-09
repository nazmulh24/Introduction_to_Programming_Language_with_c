#include <stdio.h>
void change_it(int *ar, int n)
{
    ar[n - 1] = 100;
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);
    printf("\n");
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    change_it(a, n);
    return 0;
}
