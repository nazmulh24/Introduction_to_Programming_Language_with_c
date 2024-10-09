//-->> K. Max and Min

#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A >= B && A >= C)
    {
        if (B >= C)
            printf("%d ", C);
        else
            printf("%d ", B);
        printf("%d\n", A);
    }
    else if (B >= A && B >= C)
    {
        if (A >= C)
            printf("%d ", C);
        else
            printf("%d ", A);
        printf("%d\n", B);
    }
    else if (C >= A && C >= B)
    {
        if (A >= B)
            printf("%d ", B);
        else
            printf("%d ", A);
        printf("%d\n", C);
    }
    return 0;
}
