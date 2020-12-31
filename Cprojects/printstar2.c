#include <stdio.h>

int main()
{

    int a, rows, i, j, k;

    printf("enter your choices\n");
    printf(" 0 for pyramidstarprint  \n");
    printf(" 2 for reversepyramidstarprint \n");
    scanf("%d", &a);

    if (a == 0 || a == 2)
    {
        printf("how  many rows do you want?\n");
        scanf("%d", &rows);
    }
    switch (a)
    {
    case 0:
        for (i = 0; i < rows; i++)
        {
            for (k = 0; k <= rows - i; k++)
            {

                printf(" ");
            }

            for (j = 0; j <= i; j++)
            {
                printf("*");
            }
            for (j = 0; j < i; j++)
            {
                printf("*");
            }

            printf("\n");
        }
        break;
        /* 
*******
 ***** 
  ***  
   *      */

    case 2:
        for (i = 0; i < rows; i++)
        {
            for (k = 0; k <= rows - i; k++)
            {
                printf(" ");
            }
           for (j = 0; j <= rows-i-1; j++)
            {
                printf("*");
            }
          for (j = 0; j <= rows-i-k; j++)
            {
                printf("*");
          }

            printf("\n");
        }
        break;
        /*
case 1:
for(i=0; i<=rows; i++)
{
    for(j=0; j<rows-i; j++)
    {
        printf("*");
    }
printf("\n");
}
break;

default:
printf("Your choice is invalid");
break;



}

*/
    }
}
