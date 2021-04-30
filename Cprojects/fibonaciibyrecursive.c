#include <stdio.h>
int fib(int b);
int main()
{

    int a;
    printf("Enter the numbers\n");
    scanf("%d", &a);

    printf("%d value of fibonnacie is %d\n", a, fib(a));
    return 0;
}

int fib(int b)
{

    
    if (b == 1 ||  b == 2)
    {
        return b - 1;
        
    }
    else
    {
        return fib(b - 1) + fib(b - 2);
    }
}