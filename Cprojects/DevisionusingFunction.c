#include <stdio.h>

float devision(float a, float b);


int main()
{
    float d;
    d = devision(40, 6);
    {
        printf("%f is devision", d);
    }

    return 0;
}

float devision(float a, float b)
{
    float c;
    c = a / b;

    return c;
}