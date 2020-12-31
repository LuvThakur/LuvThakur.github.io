#include <stdio.h>//1-D array

int main()
{
int marks[5];

for(int i=0; i<5; i++)
{
    printf("enter the value of %d element in arrays\n",i);
    scanf("%d",&marks[i]);
}
for(int i=0; i<5; i++)
{
    printf("the value of  %d element of arrays is %d\n",i,marks[i]);
}

return 0;
}