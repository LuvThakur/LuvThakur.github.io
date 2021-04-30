#include <stdio.h>

int main()
{
    int a, b, op;
    printf("Enter the value for +,-,*,/");
    printf("enter two value a & b; \n");
    scanf("%d %d", &a, &b);

    printf("choose  1(+),2(-),3(*),4(/) operands");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf(" sum of a+b=%d\n", a + b);
        break;
    case 2:
        printf(" sum of a-b=%d\n", a - b);
        break;

    case 3:
        printf(" sum of a*b=%d\n", a * b);
        break;
    case 4:
        printf(" sum of a/b=%d\n", a / b);
        break;

    default:
        printf(" error ");
        break;
    }

    return 0;
}