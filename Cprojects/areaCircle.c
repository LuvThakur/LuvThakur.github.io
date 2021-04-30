#include<stdio.h>
#include <math.h>//it use for the power of 2, 
// the power is 3

int main(){


  int r;
  float pie=3.14;
int a=2;
int b=3;

  printf("enter the value of radius r\n");
  scanf("%d",&r);

float area=pie*r*r;

printf("Area of circle  is %f\n",area);

// pow is use for the of power 2^3=8;
printf("the value of 2^3is %f",pow(2, 3));


return 0;
}