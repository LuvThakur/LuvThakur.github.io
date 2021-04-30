#include <stdio.h>

int main()
{
    int N;  //4321=24

    int F;  //321=6
    int fact=1;

    printf("Enter the Number N \n");
    scanf("%d", &N);

    for (F= 1; F<=N; F++) 
    fact=fact*F;
        printf("Factorial of %d: is %d",N, fact);
    
    
    return 0;
}
