#include <stdio.h>

int sum(int a, int b);

//with argument with return value 
int main()

{
int a, b, c;
 a=8;
 b=10;
 c=sum(a,b);


printf("The sum is %d\n",c);


return 0;
}

int sum(int a, int b) // declaration
{
    return a+b;
}



