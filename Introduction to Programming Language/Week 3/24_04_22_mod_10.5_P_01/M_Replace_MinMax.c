//--> M. Replace MinMax
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    int max = INT_MIN;
    int min = INT_MAX;

    int max_i = 0, min_i = 0;

    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
            max_i = i;
        }
        if (min > ar[i])
        {
            min = ar[i];
            min_i = i;
        }
    }
    ar[max_i] = min;
    ar[min_i] = max;

    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);
    printf("\n");
    return 0;
}
