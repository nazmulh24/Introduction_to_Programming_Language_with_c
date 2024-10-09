#include <stdio.h>
int main()
{
    int a, b, sum, sub, mul;
    float div;
    scanf("%d %d", &a, &b);
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %.2f\n", a, b, sum, a, b, sub, a, b, mul, a, b, div);
    return 0;
}
