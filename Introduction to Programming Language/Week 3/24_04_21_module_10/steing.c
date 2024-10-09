//--> string basic_1
#include <stdio.h>
#include <string.h>
int main()
{
    // char a[5];
    // int sz = sizeof(a)/ sizeof(char);
    // printf("%d\n", sz);

    // char a[6] = "Nazmul";
    // for (int i = 0; i < 6; i++)
    //     printf("%c", a[i]);

    // char a[7] = "Nazmul";  //--> Nazmul\0 --> total 7 char.
    // printf("%s\n", a);

    // char a[7];
    // scanf("%s", a);
    // printf("%s\n", a);

    // char a[20];
    // // scanf("%s", a);  //--> Why this problem ?
    // // gets(a);  //--> not proper way.. it waste memomy.
    // fgets(a, sizeof(a), stdin);
    // printf("%s\n", a);

    char a[100];
    scanf("%s", a);
    // int i = 0, count = 0;
    // while (a[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    // printf("%d\n", count);

    int sl = strlen(a);  //--> to find length of the string...
    printf("%d\n", sl);

    return 0;
}
