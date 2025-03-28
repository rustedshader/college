#include <stdio.h>
/* recursive fib without dp */
int fib(int a)
{
    if (a == 0)
    {
        return 0;
    }
    if (a == 1)
    {
        return 1;
    }
    return fib(a - 1) + fib(a - 2);
}

int main()
{
    printf("%d\n", fib(7));
    return 0;
}
