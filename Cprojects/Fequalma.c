#include <stdio.h>

float gravity(float m);

int  main()
{
    float m;

printf("Enter the value of m \n");
scanf("%f",&m);

printf("%fN is   Force ",gravity(m));

return 0;
}

float gravity(float m)
{float g=9.8;
float F;
F=(m*g);

return F;
}