#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("enter the value of n\n\n");
    scanf("%d", &n);
    printf("sum of %d natural numbers = %d",n, sum(n));
    return 0;
}

int sum(int n)
{
    int sum;
    sum = n * (n + 1) / 2;
    return sum;
}