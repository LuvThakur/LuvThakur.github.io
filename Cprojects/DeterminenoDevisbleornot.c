#include<stdio.h>

int main(){
 
int number;
int x=5;
printf("enter the number \n",number);
scanf("%d",&number);

// here % is return the remainder 
// % is modular devision operator 
// it cannot applied on float


printf("if number devisible then remainder is 0 \n ");
printf("number not devisible then value is not equal to 0 \n\n");

printf("Devisibility test by 5 is %d\n",number%x);

    return 0;
}