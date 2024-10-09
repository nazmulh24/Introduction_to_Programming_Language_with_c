#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    int cnt[5] = {0};
    for (int i = 0; i < n; i++)
        cnt[ar[i]]++; //--> count number.
    //       ||
    // int val = ar[i];
    // cnt[val]++;

    for (int i = 0; i < 5; i++)
        printf("%d -> %d\n", i, cnt[i]);
    return 0;
}
