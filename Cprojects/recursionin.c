#include <stdio.h>

int factorial(int n)
{
if(n==0 || n==1){

return 1;
}

else{
        return (n*factorial(n-1));
}
}

int main()
{
int num;

printf("enter number for find factorial\n");
scanf("%d", &num);

printf("the  factroial of  %d is %d ", num,factorial(num));


return 0;
