#include <stdio.h>

int main()
{
    int n;
    int i;
    int p = 1;

    printf("Enter the Number:\n");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            p =0;

            break;
        }
    }
    if( n==0 || n==1)
    {
        printf(": is not prime number nor composite");
    }
    else if (p == 1)
    {
        printf("%d : is a prime number", nikj );
    }
    else
    {
        printf("%d : is not prime ;number ",n);
    }

    return 0;
}