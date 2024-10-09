#include <stdio.h>
int main()
{
    int N, sum1 = 0, sum2 = 0;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] > 0)
            sum1 += A[i];
        else
            sum2 += A[i];
    }
    printf("%d %d\n", sum1, sum2);
    return 0;
}
