#include <stdio.h>
#include <conio.h>
int main()
{

    // int a,b;
    // a=40;
    // b=50;
    // // clrscr ();
    // printf("First value a=40");
    // printf("\n");
    // printf("second value b=50");
    // printf("\n");

    int n, i = 2;

    printf("Enter the valuje of n\n");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Not a prime");
        }

        else
        {
            printf("prime");
        }
        break;
    }
    if (n == 2)
    {
        printf("prime");
    }

    else if (n == 1)
    {
        printf("not prime");
    }

    return 0;
}