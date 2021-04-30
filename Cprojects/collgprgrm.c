#include <stdio.h>

int main()
{

    /*  float r, p, a, pie = 3.14;
    int c;
    printf("enter value of r\n");
    scanf("%f", &r);?

    printf("enter value of 1=area\n 2=perimeter\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        a = pie * r * r;
        printf("Area=%f", a);
        break;

    case 2:
        p = 2 * pie * r;
        printf("Perimeter=%f", p);
        break;
    }*/
    // swaping of two no.
    /*
int a,b,swap;

printf("Enter 2 number\n a=\nb=\n");
scanf("%d %d",&a,&b);

swap=a;
a=b;
b=swap;
printf("a=%d\n b= %d",a,b);*/

    // Forloopforgetingsumuntil 0 encounter
    /*   int a, b, c = 0;
    printf("enter the value for get sum\n");
    scanf("%d", &a);

    for (b = 1; b <= a; b++)
    {
        c = c + a;
        printf("enter the value for get sum\n");
        scanf("%d", &a);
    }
    printf("sum=%d", c); */

    // WAP to reverse a number

    int n, r,os, s = 0;

    printf("Enter the number\n");
    scanf("%d", &n);
os=s;
    while (n != 0)
    {

        r = n % 10;
        s = s * 10 + r;

        n = n / 10;
    }
    printf("Reverse==%d\n", s); 

if(os==n)
{
    printf("%d number is pallendome",os);
}

else
{
    
    printf("Not a pallendrome");
}

//Pallaindrone


    return 0;
}