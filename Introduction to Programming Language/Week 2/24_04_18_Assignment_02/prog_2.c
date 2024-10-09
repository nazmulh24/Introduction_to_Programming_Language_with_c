#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N > 0)
        for (int i = 0; i < N; i++)
            printf("%d ", i + 1);
    else
        for (int i = N; i <= 0; i++)
            printf("%d ", i);
    printf("\n");
    return 0;
}
