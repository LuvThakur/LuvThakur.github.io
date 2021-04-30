#include <stdio.h>

void main()
{
    int i = 4;
    int *ptr = &i;
    char d=4;
    char *l=&d;
    float a=4.5;
    float *s=&a;

    printf("print address of i %u\n", ptr);
    ptr++;
    printf("print address of i %u\n", ptr);
    ++ptr;
    printf("print address of i %u\n", ptr);
    ptr--;
    printf("print address of i %u\n", ptr);
    --ptr;
    printf("print address of i %u\n", ptr);
    ptr = ptr + 2; // 2 =8 bites
    printf("print address of i %u\n", ptr);
    ptr = ptr - 2;
    printf("print address of i %u\n", ptr);

 printf("print address of d %u\n",l);
 l=l+5; // char incrz  one number
   printf("print address of d %u\n",l);

    printf("print address of f %u\n",s);
    s++;
     printf("print address of f %u\n",s);
    
}