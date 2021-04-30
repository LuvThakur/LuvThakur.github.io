#include <stdio.h>

void main()
{
    int a = 5;
    int *ptr = &a;

int b=5;
int *r=&b;
    printf("adrees =%u\n", ptr);
    // ptr=ptr+1;
        // printf("adrees =%u\n", ptr);
         printf("adrees =%u\n", ptr);   

 int c;
 c=*r-*ptr;
     printf("adrees =%d \n", c);


}