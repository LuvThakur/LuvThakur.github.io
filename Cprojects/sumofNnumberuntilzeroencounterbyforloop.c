
// add number until zero enter 
#include <stdio.h>

int main()
{
  int n, i, sum = 0;

  printf("Enter the number\n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    sum = sum + n;

    printf("enter the number\n");
    scanf("%d", &n);
  }
printf("sum=%d",sum);

  return 0;
}