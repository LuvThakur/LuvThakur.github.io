
// Create a Random Number B/w 1 To 1000

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int num;
    srand(time(0));
    
 num=rand()%1000+1;
printf("%d is random number",num);

return 0;
}