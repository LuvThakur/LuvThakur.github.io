#include <stdio.h>

void main()
{
  int n;
  int a = 1;
  int f = 1;

  printf("For Finding Factorial Enter the Number \n");
  scanf("%d", &n);
  do
  {

    f = f * a;
    a++;
    printf("Factorial of %d : %d\n", n, f);

  } while (a <= n);

      getch();
}