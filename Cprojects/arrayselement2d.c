#include <stdio.h>
int main()
{
    int marks[2][4] = {{4, 8, 9, 2},
                       {3, 6, 4, 1}};

    int i, j;
    for (int i = 0; i < 2; i++)
        
    {

        for (int j = 0; j < 4; j++)
        {

            printf("%d, %d is element in arrays %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}