#include <conio.h>
#include <stdio.h>

void main()
{
    int a, i, j;
    printf("enter the no. of row=");
    scanf("%d", &a);
    // gotoxy(20,25);
    for (i = 0; i <= a; i++)
    {
        for (j=0; j <= i; j++)
          {  printf("A");}
          printf("\n");
    }
    getch();
}
