#include <stdio.h>

 int main()
{
    int a;
    int b;
    int c;
    printf(" Even no b/w 0 to 100\n");
    /*   scanf("%d", &a);
    
    
        
        if (a%2 == 0 && a!=0)
        {
            printf("%d is  is even no.\n", a);
        }
        
        else
        {
            printf("%d is not even no. number\n", a);
        }*/

    for (b = 2; b <= 98; b++)
    {
        if (b % 2 == 0)
        {
            printf("%d \n ", b);
        }
    }

    return 0;
}