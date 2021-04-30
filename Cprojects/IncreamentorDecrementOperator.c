#include <stdio.h>

int main()
{
    int a = 5;
    printf("value of a after a++ is %d\n", a++); //phle print then increment
    printf("the value of a after a++ is %d\n",a++);
 
    // here 2 increase
    printf("value of a after ++ is %d\n", +a); //phle increment then print
    printf("value of a after ++ is %d\n", ++a);// 1 bdega
    printf("value a %d\n",++a);// 1 bdega


    printf("value of a aftr a-- %d\n", a--);//nhi bdega//phle print then decrement
    printf("value of a aftr a-- %d\n", a--);// 1 bdega
    // here 2 minus
    printf("value a after --a %d\n", --a);// 2 minus hoga 
    printf("value a after --a %d\n", --a); //ab 1 minus hoga

    printf("value after +a is %d\n",+a);//no increment
    
printf("value of a after ++a %d\n",++a);//1 increment 

printf("value of a after a+=2 %d\n",a+=4);//4 plus hua
a/=2;// 10 ka bhag 5 hua
printf("value of a after a/2 %d\n",a);//5 ayega
a++;// 1  hi bdega by a++
 printf("value of a after a++ is %d\n",--a);  // 1 hi minus hua --a 
 a*=2;
printf("value of a after a*2 is %d\n",a);
a%=6;
printf("value of a after a modulas=2 is %d\n",a);//remainder 4 bachega
a%=4;
printf("value of a is %d\n",a);// remaindere 0
    return 0;
}