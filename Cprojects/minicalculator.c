#include <stdio.h>

int main()
{
    char operator;
    double first, second;

    printf("Enter the operator\n");
    scanf("%c", &operator);

    printf("Enter two operand\n");
    scanf("%lf %lf", &first, &second);

    switch (operator)
    {
    case '+':
        printf("%.1lf+%.1lf=%.1lf", first, second, first + second);
        break;

    case '-':
        printf("%.1lf-%.1lf=%.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf*%.1lf=%.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf/%.1lf=%.1lf", first, second, first / second);
        break;

    default:
        printf("Error !!");
        break;
    }
    return 0;
}