// add numbers  UNTIL 0 encounter
// by using while loop
#include <stdio.h>

int main()
{
  int num, sum = 0;

  printf("Enter a number: \n");
  scanf("%d", &num);
  while (num != 0)
  {

    sum = sum + num;
    printf("Enter a number: \n");
    scanf("%d", &num);
  }
  printf("\nTotal = %d", sum);
  return 0;
}