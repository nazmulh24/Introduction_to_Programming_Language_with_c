#include <stdio.h>
//--> fun(int *ar, int n)
void fun(int ar[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", ar[i]);
    printf("\n");
}
int main()
{
    int ar[3] = {20, 50, 70};
    fun(ar, 3);
    return 0;
}
