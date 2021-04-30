#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5][5], b[5][5], sum[5][5];
    int i, j, r, c;

    printf("enter row\n");
    scanf("%d", &r);

    printf("enter column\n");
    scanf("%d", &c);

    // entere the element in 1 matrix

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter the value of a%d%d\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    // second matrix
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter the value of b%d%d\n", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    //   sum dominate

    for (i = 0; i < r; i++)

        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    // print sum

    for (i = 0; i < r; i++)

        for (j = 0; j < c; j++)
        {
            printf(" sumli[%d,%d]= %d\n",i+1,j+1, sum[i][j]);
        }
    // }
}