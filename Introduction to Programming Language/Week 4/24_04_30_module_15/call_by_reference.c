#include <stdio.h>
void fun(int *p)
{
    printf("p er value - %p\n", p);
    printf("main x er value - %d\n", *p);
    *p = 100;
}

int main()
{
    int x = 10;
    printf("\nx er address - %p\n", &x);
    fun(&x);
    printf("x change korar por value - %d\n", x);
    return 0;
}
