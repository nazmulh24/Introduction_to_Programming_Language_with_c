#include <stdio.h>
int main()
{
    for (int i = 1; i <= 15; i++)
    {
        if (i == 10)
            break;
        printf("%d\n", i);
    }
    return 0;
}
