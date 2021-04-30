#include <stdio.h>
#include <math.h> // library function using for powers

int main()
{
    int a;

    printf("Enter the side of square\n");
    scanf("%d", &a);
printf("%f is a^2 area of square",pow(a,2));
    
    return 0;
}