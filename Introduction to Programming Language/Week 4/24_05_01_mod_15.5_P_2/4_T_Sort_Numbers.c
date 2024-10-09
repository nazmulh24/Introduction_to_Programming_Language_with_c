#include <stdio.h>
void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
        printf("%d\n", a[i]);
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ar[3] = {a, b, c};
    sort(ar, 3);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
