#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;

    printf("x er address - %p\n", &x);
    printf("ptr er value - %p\n", ptr);
    printf("ptr er addre - %p\n", &ptr);
    printf("ptr er memory size - %d\n", sizeof(ptr));

    printf("x er value - %d\n", *ptr);
    x = 30;
    printf("x er value - %d\n", *ptr);
    *ptr = 50; //--> ptr er de-reference.
    printf("x er value - %d\n", x);

    double y = 4543.232;
    double *ptr_2 = &y;
    printf("ptr_2 er memory size - %d\n", sizeof(ptr_2));

    return 0;
}
