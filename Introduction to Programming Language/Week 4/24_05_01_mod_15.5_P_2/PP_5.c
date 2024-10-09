#include <stdio.h>
void swap_it(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("%d %d\n", *p1, *p2);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap_it(&a, &b);
    return 0;
}
