#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        char s[n];
        scanf("%s", s);
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
                c1++;
            else if (s[i] == 'P')
                c2++;
        }
        if (c1 > c2)
            printf("Tiger\n");
        else if (c1 < c2)
            printf("Pathaan\n");
        else
            printf("Draw\n");
    }
    return 0;
}
