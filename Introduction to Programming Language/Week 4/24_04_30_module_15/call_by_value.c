#include<stdio.h>
void func(int x)
{
printf("Func x er address - %p\n", &x);
}
int main()
{
    int x=10;
    printf("Main x er address - %p\n", &x);
    func(x);
    return 0;
}
