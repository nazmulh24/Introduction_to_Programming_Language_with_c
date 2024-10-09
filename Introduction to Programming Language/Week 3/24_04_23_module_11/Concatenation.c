#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    //-------------------------------
    int sl_a = strlen(a), sl_b = strlen(b);
    printf("%d %d\n", sl_a, sl_b);
    //-------------------------------
    for (int i = 0; i < sl_b; i++) //--> ১৬। এবং sl_b এর জায়গায় b = ৮ - sl_a বসবে ।।
    {
        a[sl_a] = b[i];
        sl_a++;
    }
    // a[8] = '\0'; //--> a[যে কয়টা char তার থেকে ১ বেশি অ্যাড করতে হবে] = '\0' ->যেমন এখানে ৭ টা char ।।।

    // strcat(a, b);

    printf("%s\n", a);
    return 0;
}
