#include <stdio.h>

int factorial(int n);
int main()
{
    int n;

    printf("Enter the number of for finding factorial\n");
    scanf("%d", &n);
printf("Factorial of %d = %d",n,factorial(n));
    return 0;
}

int factorial(int n)
{ printf("order of factorial(%d)\n",n);
    if (n == 1 || n == 0)
    {

        return 1;
    }
 
 else
 {
     return n*(factorial(n-1));
 }
     
}