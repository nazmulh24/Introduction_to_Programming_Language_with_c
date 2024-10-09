#include <stdio.h>
void fun(int *ar, int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", ar[i]);
    // }
    // printf("\n");
    ar[0] = 100;
}
// int main()
// {
//     int ar[5] = {10, 20, 30, 40, 50};
//     fun(ar, 5);
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", ar[i]);
//     }
//     printf("\n");
//     return 0;
// }

void func(char *ar)
{
    ar[0] = 'N';
}
#include <stdio.h>
int main()
{
    char ch[] = "nazmul";
    func(ch);
    printf("%s\n", ch);
    return 0;
}
