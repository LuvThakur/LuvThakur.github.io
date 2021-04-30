#include <stdio.h>

int main()
{
   float  a;
   float  b;
   float  c;
    printf("Enter the value of a\n");
    scanf("%f", &a);
    printf("Enter the value of b\n");
    scanf("%f", &b);
    printf("Enter the value of c\n");
    scanf("%f", &c);
   
  
   float Average;
   Average = (a + b + c) / 3;
   printf("%f is the average value", Average);

   return 0;
}