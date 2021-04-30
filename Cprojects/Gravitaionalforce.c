#include <stdio.h>

int main()
{

    int r;
    int m;
    int M;
    float g=9.8;
    float F;

printf("Enter the value of r\n");
scanf("%d",&r);

printf("Enter the value of m\n");
scanf("%d",&m);

printf("Enter the value of M\n");
scanf("%d",&M);

F=(g*M*m)/(r*r);

printf("Value of F is %f N",F);

    return 0;
}