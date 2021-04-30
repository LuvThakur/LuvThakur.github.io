#include <stdio.h>

// void printstar(int n);
int main()
{
    int i, j;
    int row;
    int n;
    printf("Enter  value of 0 for starprint \n");
    // scanf("%d", &n);
    printf("How many row you want\n");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("*\n");
    }
    return 0;
}