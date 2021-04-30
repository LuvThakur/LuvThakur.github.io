// add two number until 0 encounter
// using do while loop
#include <stdio.h>

int main()
{
    int num;
    int sum = 0;

    do
    {
        printf("Enter the number\n");
        scanf("%d", &num);
        sum +=num;
    }
        while (num != 0);
        {
            printf("Total=%d", sum);
        }

        return 0;
    }