#include <stdio.h>

int sum(int a, int b); //here sum is funtion which take a and b
                       //   as inpu;t and return value in form of int
int main()             //  and b are parameters 
{  int c;
  c= sum(5, 2);
    {
        printf("%d is sum",c);  //call of function // 5,2 are arguments that are actual values
    }
 
    return 0;
}
int sum(int a, int b){            //function defintuion 
int r;
r = a + b;
return r;
}