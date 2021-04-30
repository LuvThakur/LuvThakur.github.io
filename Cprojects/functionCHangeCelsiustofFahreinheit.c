#include <stdio.h>
float convert(float a);

int main()
{
  float far;
  float a;

  printf("enter the value of celsius\n");
  scanf("%f", &a);

   far = (9 / 5) * a+ 32;
  printf(" fahereinheit =%f ", far);
 
  return 0;
}
// float convert(float a)
// {
//   float far;
  
//  return far;
// }
