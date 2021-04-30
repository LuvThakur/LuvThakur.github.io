#include <stdio.h>

float convert(float m, float a);

int main()
{
    float m;
    float a;
    printf("\n enter the value of m\n");
    scanf("%f", &m);
    printf("\n enter value of a\n");
    scanf("%f", &a);

    printf("%f is value of force", convert(m, a));
    return 0;
}
float convert(float m, float a)
{
    float F;
    F = m * a;

    return F;
}