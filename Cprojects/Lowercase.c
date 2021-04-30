#include <stdio.h>

int main()
{
// ASCII VALUES FOR lowercase 97-122

char chtr;

printf("Enter the  value \n");
scanf("%c",&chtr);

if(chtr<=122 && chtr>=97)
{
printf("Value is lowercase");
}
else{
    printf("Value is not lowercase");
}

    return 0;
}
