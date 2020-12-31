#include <stdio.h>


int main()

{
    float  km,m,cm,mm,miles;


printf("enter the Distance  km\n");


 scanf("%f",&km);

m= km*1000.0;

cm=km*100000.0;

mm=km*1000000.0;
miles=km*0.621;

printf("distance in m is %f\n",m);
printf("distance in cm  is %f\n",cm);

printf("distance in mm  is %f\n",mm);
printf("distance in miles is %f\n",miles);



return 0;

}