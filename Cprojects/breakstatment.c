#include <stdio.h>

int main()
{int i,age;

// use of breaking function to remove user from loop

for(i=0; i<10; i++){
printf("Enter Age %d\n",i);

scanf("%d",&age);


if(age>50)
{
break;
}

// here break word remove user from loop after the 50
//at the stage of  51 or 52
// before the 50 it not remove user froom loop
}
return 0;
}