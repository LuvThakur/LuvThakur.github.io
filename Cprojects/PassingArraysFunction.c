#include <stdio.h>

void function1(int arr[4][4])

{
    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {

            printf("the value at %d , %d is %d\n", i, j, arr[i][j]);
        }
    }
}

int main()
{

    int arr[][4] = {{4, 1, 5, 6},
                    {9, 8, 5, 2}};

    function1(arr);

    return 0;
}
