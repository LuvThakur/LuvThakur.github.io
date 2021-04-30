#include <stdio.h>
int add(int r)
{

    
    

        printf("\naddress =%u", &r);
    
}
void main()
{ /*
int a=5;
int *s=&a;
printf("address value of a=%u\n",s);
printf("value of a=%u\n",*s); */

    int a = 5;

    add(a);
    printf("\nAddress = %u", &a);
}