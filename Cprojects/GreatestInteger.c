#include <stdio.h>

int main()
{

    int a;

    int b;
    int c;

    printf("Enter a number a\n");
    scanf("%d", &a);
    printf("enter the number b\n");
    scanf("%d", &b);
    printf("enter the number p\n");
    scanf("%d", &c);
    // printf("enter the number q\n");
    // scanf("%d",&q);

    if (a > b && a > c)
    {
        printf("%d is greater than other", a);
    }
    else if (b > a && b > c)
    {

        printf("%d is grater than other number", b);
    }
    else
    {
        printf("%d is greater than other ", c);
    }

    return 0;
}