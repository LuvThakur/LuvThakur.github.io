#include <stdio.h>
//presidency orderer in the absence of parenthesis{bole to bracket()};
// *or /(devide)
// +or -
// =
int main()
{
    int x = 2;
    int y = 3;
    int z = 3;
    int r = 1;

    // it compile give exe but not give 2^2=4;
    int a = 2 ^ 2;

    printf("the value of a is %d \n", a); // it is valid but not give answer
    printf("the value of 3*x-8*y is %d\n", 3 * x - 4 * y);
    printf("the value of 8*y/3*x is %d \n", 8 * y / 3 * x);
    printf("the value of 8*y/3*x is %d \n", (8 * y) / 3 * x);
    printf("the value of 8*y/3*x is %d \n", 8 * y / (3 * x));
    printf("the value of 8*y/3*x is %d \n", (8 * y) / (3 * x));
    printf("the value of 8*y/3*x is %d \n\n", (8 * y / 3 * x));

    printf("the value of 3*x/y-z+r is  %d \n", 3 * x / y - z + r);

    return 0;
}