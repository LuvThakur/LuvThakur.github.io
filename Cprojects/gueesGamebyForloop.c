


// Game not working 
// condition applly first then execute


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
   int num ,guess, count=1;

 srand(time(0));
   num=rand()%100+1; 

printf("%d is random number",num);

printf("Guess number between 1 to 100\n\n");

printf("enter the guess number\n");
scanf("%d",&guess);


while(count!=guess)
{
if(guess>num)
{
    printf("Think Lower number\n");
}
else if(guess<num)
{
    printf(" Think Higher number\n");
}
else 
{
    printf("You guess number in %d attempt \n",count);
}
count++;
}
    return 0;
}