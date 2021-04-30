#include <stdio.h>

int main()
{

    int num, i;
    int sum = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        sum += num;

        printf("Total=%d", sum);
        scanf("%d", &sum);
    }
     printf("Total=%d", sum);
        scanf("%d", &sum);

    return 0;
}