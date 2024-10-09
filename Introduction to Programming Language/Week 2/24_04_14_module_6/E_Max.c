#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = INT_MIN; //--> max = INT_MIN ,, mini = INT_MAX  --> #include <limits.h>
    for (int i = 0; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    printf("%d\n", max);
    return 0;
}
