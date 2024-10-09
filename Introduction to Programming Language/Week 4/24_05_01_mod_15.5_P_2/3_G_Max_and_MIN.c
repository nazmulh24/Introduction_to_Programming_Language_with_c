#include <stdio.h>
#include <limits.h>
void min(int a[], int b)
{
    int Min = INT_MAX;
    for (int i = 0; i < b; i++)
    {
        if (Min > a[i])
            Min = a[i];
    }
    printf("%d ", Min);
}
void max(int *a, int b)
{
    int Max = INT_MIN;
    for (int i = 0; i < b; i++)
    {
        if (Max < a[i])
            Max = a[i];
    }
    printf("%d\n", Max);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    min(a, n);
    max(a, n);
    return 0;
}
