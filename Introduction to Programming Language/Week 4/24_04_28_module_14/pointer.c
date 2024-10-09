#include <stdio.h>
int main()
{
    int x = 10;
    // printf("%p\n", &x); //--> show address.
    int *p = &x;
    // printf("%p\n", p);  //--> show address.
    // printf("%d\n", *p); //--> show value.( dereference )

    // p = 500;  //--> x change hobe na.

    *p = 500; //--> x change hobe...

    printf("%d\n", x);
    return 0;
}
