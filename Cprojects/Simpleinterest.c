#include <stdio.h>

int main()
{
    float p;
    int r;
    int t;

    printf("enter the value of principle p\n ");
    scanf("%f", &p);

    printf("enter the value of rate r \n");
    scanf("%d", &r);

    printf("enter the value of time t\n");
    scanf("%d", &t);

    float SI = p * r * t / 100;
    printf("Simple Interest value is %f\n", SI);

    return 0;
}