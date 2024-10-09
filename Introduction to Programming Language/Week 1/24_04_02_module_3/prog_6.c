#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++) //--> for loop
    {
        printf("%d\n", i);
    }
    printf("\n");

    int j = 6;
    while (j <= 10) //------------> while loop
    {
        printf("%d\n", j);
        j++;
    }
    printf("\n");

    int k = 11;
    do //-----------------------> do-while loop
    {
        printf("%d\n", k);
        k++;
    } while (k <= 15);
    // while (k >= 15);
    printf("\n");

    return 0;
}
