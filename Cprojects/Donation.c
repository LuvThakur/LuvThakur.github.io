#include <stdio.h>
int main()
{
int age;

printf("enter your age for donate blood\n");
scanf("%d",&age);
printf("Your age is %d\n", age);

if(age>=25){ printf("Yes you can donate blood");
}
else if(age>=18){
    printf("Peoples between 18 to 25 can donate plasma for helping against covid-19");
}
else{
    printf("no you cannot donate blood thanks for social service");
}

}