#include <stdio.h>

int fib_recursive(int n)
{

    if (n == 1 || n == 2)

    {

        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; //1  fibbonoci =0,1,1,2,3,5,8,13,21   a=0; b=1; then b*=a+b=1;
        a = b - a; //b*=0+1=1, now a=b-a=1-0=1;again b=a+b*=1+1=2; a=1 b=2 b*=1+2=3;
    }

    return a;
}
int main()
{
    int number;
    printf("enter the number of fibbonacci series\n");
    scanf("%d", &number);
    printf("enter the number of fibbonci series \n");
    scanf("%d", &number);
    printf("the value of fibbonaci series no is %d on iterative %d\n", number, fib_iterative(number));
    printf("the value of fibbonacci series no is %d on recursive %d\n", number, fib_recursive(number));

    return 0;
}