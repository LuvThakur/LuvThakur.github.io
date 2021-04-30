#include <stdio.h>

int main()
{

    float a, b, c;
    int p;

    printf("enter the value of a and b: \n");
    scanf("%f %f", &a, &b);
    printf(" Enter Number to Calculate\n 1:Addition\n 2:Subtraction\n3:Multiply\n4:Devide\n5:Exit\n");
    scanf("%d", &p);

    switch (p)
    {

    case 1:
        printf("Sum of %.3f+%.3f=%.3f", a, b, a + b);
        break;
    case 2:
        printf("%.3f-%.3f=%.3f",a,b, a - b);
        break;
    case 3:
        printf("%.3f*%.3f=%.4f",a,b, a * b);
        break;
    case 4:
        printf("%f/%f=%.4f",a,b, a / b);
        break;

    case 5:
        exit(0);
        break;
    default:
        printf("invalid !!!\n");
        break;
    }
    return 0;
}