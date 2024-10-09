#include <stdio.h>
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    // printf("\n0'th index er address - %p\n", &ar[0]);
    // printf("0'th index er address - %p\n", ar);

    // printf("\n0'th index er value - %d\n", ar[0]);
    // printf("0'th index er value - %d\n", *ar);

    // printf("\n1'st index er value - %d\n", *(ar + 1));
    // printf("2'nd index er value - %d\n", *(ar + 2));
    // //--> that means index er man peint er jonno --> *(ar + i) dite hobe.

    // printf("3rd index er value+1 - %d\n", *(ar + 3) + 1);
    // //--> that means index er man x baranor jonno --> *ar + x __ *(ar + i) + x  _dite hobe.
    // /*----------------------------->

    // ar[2] = *(ar + 2)
    // ar[1] + 1 = *(ar + 2) + 1

    // <------------------------------*/

    //--------------------------------------------------------
    printf("\n%d\n", *(ar + 1));
    printf("%d\n", *(1 + ar));
    printf("%d\n", ar[1]);
    printf("%d\n", 1 [ar]);
    //--> This 4 example are same...

    printf("\n");
}
