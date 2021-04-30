#include <stdio.h>

int main()
{
    int a;

    printf("enter the number \n");
    scanf("%d", &a);
//one liner ternary operators 
//it use for small loop
    (a <= 18) ? printf("number is less than 18") : printf("number is not less than 18");
    return 0;
}