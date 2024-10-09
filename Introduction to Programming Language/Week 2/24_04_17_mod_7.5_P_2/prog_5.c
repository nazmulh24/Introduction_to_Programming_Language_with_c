//--> E. Lowest Number
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    int min = INT_MAX, pos = 0; //--> must use #include<limits.h>
    for (int i = 0; i < n; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
            pos = i;
        }
    }
    printf("%d %d\n", min, pos + 1);
    return 0;
}
