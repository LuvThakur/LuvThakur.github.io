
#include <stdio.h>

int main()
{

    int n;
    int p = 0;
    int i = 2;
    printf("enter the number \n");
    scanf("%d", &n);
/*
    while (i < n)
    {

        if (n % i == 0)
        {
            p = 1;
        }
        i +=1;
    }

    if (p > 0)
    {

        printf("not prime");
    }
    else
        printf("prime");
    /*/
    do
    {

        if (n % i == 0) // exception for 2
        {

            p = 1; 
            

            
        }
        i+=1;

    } while (i < n);
    if (n == 1)
    {
        printf("%d is not prime or nor composite number", n);
    }
    if (p > 0)

    {
        printf("%d is Not prime number", n);
    }
    else
    {
        printf(" %3d is  Prime number", n);
    }

    return 0;
}