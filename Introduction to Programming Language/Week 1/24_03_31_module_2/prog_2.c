#include <stdio.h>
int main()
{
    int taka;
    scanf("%d", &taka);
    if (taka >= 100)
    {
        printf("Burger Khabo\n");
        if (taka >= 200)
        {
            printf("Burger..... Khabo\n");
        }
    }
    else if (taka >= 50)
    {
        printf("kuska Khabo\n");
    }
    else
    {
        printf("Khabo Na\n");
    }
    return 0;
}
