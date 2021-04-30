#include <stdio.h>

int main()
{
    int i = 0;
    int n;
    printf("enter the number for repetting\n");
    scanf("%d", &n);

    // for(i=0; i<n; i++)

    // printf("%d=%d\n",i,n);

    while (i < n)
    {
        printf("%d:=%d\n", i, n);
        i++;
    }

    return 0;
}