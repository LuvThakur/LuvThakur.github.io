#include <stdio.h>

int main()
{
    char n[20];
    printf("enter your name\n");
    gets(n);                                  // we also use puts()
    // printf("Your name is %s \n", n);       //   instead of printf
    puts( n);
    return 0;
}