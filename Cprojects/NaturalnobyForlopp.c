#include <stdio.h>

int main()
{
   int n;
    int a;

    printf("enter the value of N \n");
    scanf("%d",&n);

    for(int a=1; a<n; a++)
    {
        printf("These all are Natural Numbers %d\n", a);
    }

    return 0;
}