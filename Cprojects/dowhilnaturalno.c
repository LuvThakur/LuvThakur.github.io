#include <stdio.h>

int main()
{
    int a = 1;
    int n;
    int f=1;

    printf("enter n value\n");
    scanf("%d", &n);
    do
    {  f=f*a;
        a++; 
     printf("Factorial no. %d is %d\n", n,f);
      }     while (a <= n);

    return 0;
}
