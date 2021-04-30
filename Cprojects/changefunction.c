#include <stdio.h>
void change(int  a);

    int main()          //change function not change the value of a 
{
    int a = 45;

    printf("%d is value of a before change \n", a);
    change(a);
 printf("%d is value of a after change \n",a);
    return 0;
}
 void change(int a)
 {
int b=32;

 }