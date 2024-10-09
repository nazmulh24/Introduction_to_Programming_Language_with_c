#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, pos = 0, neg = 0, even = 0, odd = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, pos, neg);
    return 0;
}
