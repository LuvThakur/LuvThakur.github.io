#include <stdio.h>

int main()
{
int b;
int a;
printf("Enter Number That Table You Want in reverse order \n");
scanf("%d",&b);

for(a=10; a; a--)
{
    printf("%d*%d=%d\n",b,a,b*a);
}

return 0;
}