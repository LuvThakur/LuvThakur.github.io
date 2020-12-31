
#include <stdio.h>
int main()
{

int i,age;

for(i=0; i<30; i++){
    printf("Enter The Age%d\n",i);
    scanf("%d",&age);
  
if (age>35)
{
    continue;

}
printf("continue word  allowed to read this statement before age 35");
printf("here  contnue use it prevent browser to read foolowing paragraph if age greater than 35");
printf("here contnue use it prevent browser to read foolowing paragraph");
printf("here contnue statement word use to prevent browser to read foolowing paragraph after age greater than 35");
printf("continue word not remove user from loop");
}

return 0;
}