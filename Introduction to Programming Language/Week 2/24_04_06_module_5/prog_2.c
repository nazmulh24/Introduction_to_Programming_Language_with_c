//-->> J. Multiples

#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (A < B)
    {
        int C = A;
        A = B;
        B = C;
    }
    if (A % B == 0)
        printf("Multiples\n");
    else
        printf("No Multiples\n");
    return 0;
}
