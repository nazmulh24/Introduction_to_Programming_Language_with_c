#include <stdio.h>
#include <string.h>
int is_palindrome(char s[], int x)
{
    for (int i = 0, j = x - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            return 0;
    }
    return 1;
}
int main()
{
    char s[1001];
    scanf("%s", s);
    int x = strlen(s);
    if (is_palindrome(s, x))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
