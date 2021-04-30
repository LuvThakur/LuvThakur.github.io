#include <stdio.h>

int multiply(int a, int b);

int main()
{
    int c;

    c = multiply(8, 5);
    {
        printf("%d is multiply", c);
    }

    return 0;
}

int multiply(int a, int b)
{
    int r;
    r = a * b;

    return r;
}