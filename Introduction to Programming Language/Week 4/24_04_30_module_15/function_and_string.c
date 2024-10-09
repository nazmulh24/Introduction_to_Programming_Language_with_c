#include <stdio.h>
#include <string.h>
//--> fun(char *ar)
void fun(char ar[])
{
    printf("%d\n", strlen(ar));
}
int main()
{
    char ch[10] = "Nazmul";
    fun(ch);
    return 0;
}
