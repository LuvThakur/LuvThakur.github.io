#include <stdio.h>

void main()
{
    int i = 34;
    int *j = &i;

   /* printf("%d", i);
     printf("\n%u", i);
     printf("\n%u",&i);//

    printf("\n%d", *j);
   
    printf("\n%u", *j);
    printf("\n %d",&j);//
    printf("\n %u",&j);//
*/
printf("address of i %u",&i);
printf("\n address of i %d",&i);

printf("\n address of i %u",j);

printf("\n address of j %u",&j);
printf("\n adrees of j %d",&j);

printf("\n value of j is %u",*(&j));

}