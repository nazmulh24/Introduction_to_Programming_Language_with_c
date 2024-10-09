//--> Array_1
#include <stdio.h>
int main()
{
    // int ar[5] = {10, 20, 30, 40, 50};

    int ar[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &ar[i]);

    // int ar[5]={0};

    // for (int i = 0; i < 5; i++)
    //     printf("%d ", ar[i]);

    for (int i = 5 - 1; i >= 0; i--) //--> reverse print.
        printf("%d ", ar[i]);

    printf("\n");
    return 0;
}
