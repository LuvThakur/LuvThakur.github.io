#include <stdio.h>

int main()
{
int a,rows,i,j;



printf("enter your choices\n");
printf(" 0 for starprint  \n");
printf(" 1 for reversestarprint \n");
scanf("%d",&a);


   
  
if(a==1){

 printf("how  many rows do you want?\n");
scanf("%d", &rows); 

 for(i=0; i<=rows; i++)
{
    for(j=0; j<rows-i; j++)
    {
        printf(" ");
    }
printf("\n");
}


}

else if (a==0){

 printf("how  many rows do you want?\n");
scanf("%d", &rows); 

for(i=0; i<=rows; i++)
{
for(j=0; j<i; j++)
{
    printf("*");
}

printf("\n");
}
}



else{
    printf(" your choice is invalid\n");
    
 
}


  
 
}