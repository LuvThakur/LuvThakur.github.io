#include <stdio.h>

int main()
{
    /*int a=1;

printf(" %d\n",a);
a++;
printf("%d\n",a);
a++;
printf("%d\n",a);
a++;
printf("%d\n",a);
a++;
printf("%d\n",a);
a++;
printf("%d\n",a);
a++;
*/

    int a;

    scanf("%d", &a);

    while (a < 21)
    {
        if (a >= 10)
        {
            printf("%d\n", a);
            
        }
        
        a++;
    }

    return 0;
}