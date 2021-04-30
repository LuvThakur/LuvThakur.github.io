#include<stdio.h>
#include<conio.h>
int  main()
{
    int n,i=1,r=0,k=0,s=0;
    
    printf("\nEnter the No. : ");
    scanf("%d,&n");
    while(n>0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(k==n)
            printf("\nGiven No. is Pallendron");
    else 
            printf("Invalid");

            return 0;
}

 