#include <stdio.h>
int main()
{
int age ,marks, type;
printf("enter your age\n ");
scanf("%d", &age);

  printf("enter your marks\n");
  scanf("%d",&marks);


switch (age)
{
case 11:
printf("the age is 11\n");

switch (marks)
{

case 20:
printf("the marks in physics 20\n");
break;

case 21:
printf("marks in english 21\n");
break;

case 22:
printf("marks in chemistry 22\n");
break;

case 23 :
printf("the marks in math 23\n");
break;

default:
printf("the marks of case 11 are 20, 21, 22, 23\n");
break;

}
break;


case 12:
printf("the age is 12\n");

switch (marks)
{

case 30:
printf("the marks in physics 30\n");
break;

case 31:
printf("marks in english 31\n");
break;

case 22:
printf("marks in chemistry 22\n");
break;

case 23 :
printf("the marks in math 23\n");
break;

default:
printf("the marks of case 12 are 30,31, 22, 23 \n");
break;
}
break;

case 13:
printf("the age is 13\n");


switch (marks)
{

case 20:
printf("the marks in physics 20\n");
break;

case 21:
printf("marks in english 21\n");
break;

case 22:
printf("marks in chemistry 22\n");
break;

case 23 :
printf("the marks in math 23\n");
break;

default:
printf("the marks in other sub is unknown \n");
break;
}

break;

case 14:
printf("the age is 14\n");
break;

case 15:
printf("the age is 15\n");
break;

case 16:
printf("the age is 16\n");
break;

case 17:
printf("the age is 17\n");
break;

case 18:
printf("the age is 18\n");
break;

case 19:
printf("the age is 19\n");
break;

case 10:
printf("the age is 10\n");


switch (marks)
{

case 20:
printf("the marks in physics 20\n");
break;

case 21:
printf("marks in english 21\n");
break;

case 22:
printf("marks in chemistry 22\n");
break;

case 23 :
printf("the marks in math 23\n");
break;

default:
printf("the marks in other sub is unknown \n");
break;
}

break;

default:
printf("the age is unknown \n");
break;
}

return 0;


}






