#include <stdio.h>

void starpattern(int rows)

{
  for (int i = 0; i <= rows; i++)
  {

    for (int j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

void reversestarpattern(int rows)

{
  for (int i = 0; i <= rows; i++)
  {

    for (int j = 0; j < rows - i - 1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}

int main()

{

  int type, rows;

  printf("for Starpattern press 0 and for ReverseStarpattern press 1\n");
  scanf("%d", &type);

if(type==0 || type==1){
  printf("how  many rows do you want?\n");
  scanf("%d", &rows);
}
  switch (type)
  {

  case 0:
    starpattern(rows);
    break;

  case 1:
    reversestarpattern(rows);
    break;

  default:
    printf("\n your choice is invalid");

    break;
  }


  return 0;
}