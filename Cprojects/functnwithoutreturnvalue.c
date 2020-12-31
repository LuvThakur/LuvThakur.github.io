//function without argument and  value with return value

#include <stdio.h>

int takenumber()
{

    int i;
    printf("enter the value\n");
    scanf("%d",&i);
return i;

}
int main()
 {
int c;

c = takenumber();

printf("enter value is %d\n",c );

return 0;
}