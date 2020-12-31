#include <stdio.h>
int main()
{
char exam;

printf("enter your passing exam\n");
scanf("%c", &exam);

printf("your passing exam %c\n",exam);


if(exam="maths"){printf("you can get 10");}

else if(exam="science") {
    printf("you can get 15");

}

return 0;

}