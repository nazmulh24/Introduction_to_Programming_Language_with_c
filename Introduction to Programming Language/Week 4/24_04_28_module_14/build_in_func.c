#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    scanf("%lf", &x);
    int c = ceil(x);  //--> ceiling value.
    int f = floor(x); //--> floor value.
    int r = round(x); //--> round vlue.
    printf("c=%d f=%d r=%d\n", c, f, r);
    return 0;
}
