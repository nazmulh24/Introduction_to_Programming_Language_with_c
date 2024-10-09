#include <stdio.h>

int SUM(int x, int y) //--> Return + parameter.
{
    int sum = x + y;
    return sum;
}

int SUM_1(void) //--> Return + No parameter.
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    return sum;
}

void SUM_2(int x, int y) //--> No Return + parameter.
{
    int sum = x + y;
    printf("%d\n", sum);
    return; //--> No value after return...
}

void SUM_3(void) //--> No Return + No parameter.
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    printf("%d\n", sum);
}

int main()
{
    // int a, b, s;
    // scanf("%d %d", &a, &b);

    // s = SUM(a, b);    //--> SUM
    // printf("%d\n", s);

    // int s = SUM_1();   //--> SUM_1
    // printf("%d\n", s);

    // SUM_2(a, b);   //--> SUM_2

    SUM_3(); //--> SUM_3

    return 0;
}

/*-->

||--> systex of a function :


    return_type function_name ( parameters )
    {
        data_type x = code;
        return x;
    }
    int main()
    {
        data_type ss= xyz(.....);  //--> function calling.
    }


<--*/
