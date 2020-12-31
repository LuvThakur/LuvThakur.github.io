#include <stdio.h>
int main()
{ int age;

printf("enter your age\n");
scanf(" %d", &age);
printf("your age is %d\n",age);

if(age>=18){
    printf("You can vote !");
}

   else if(age>16)  {
printf("you are between 16to 18 then you can give suggestion for voting");} 

else {
 printf("You cannot vote !");
}


return 0;
}