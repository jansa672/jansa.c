#include <stdio.h>

/* 1. No Argument, No Return */
void fun1()
{
    printf("NANR: Hello\n");
}

/* 2. Argument, No Return */
void fun2(int n)
{
    printf("ANR: Number = %d\n", n);
}

/* 3. No Argument, With Return */
int fun3()
{
    return 100;
}

/* 4. Argument, With Return */
int fun4(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    fun1();

    fun2(10);

    result = fun3();
    printf("NAWR: Return value = %d\n", result);

    result = fun4(20, 30);
    printf("AWR: Sum = %d\n", result);

    return 0;
}
