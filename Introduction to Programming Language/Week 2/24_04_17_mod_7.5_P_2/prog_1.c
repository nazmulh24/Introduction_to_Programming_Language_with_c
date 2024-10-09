//--> A. Summation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    long long int sum = 0;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
        sum += ar[i];
    }
    if (sum < 0)
        sum = -sum;
    printf("%lld\n", sum);
    return 0;
}
