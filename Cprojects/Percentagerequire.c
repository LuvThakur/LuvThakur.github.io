#include <stdio.h>

int main()
{

    float physics;
    float math;
    float chemistry;
    float Total;

    printf("Enter the marks of physics\n");
    scanf("%f", &physics);
    printf("Enter the marks of math\n");
    scanf("%f", &math);
    printf("Enter the marks of chemistry\n");
    scanf("%f", &chemistry);

    Total = (physics + math + chemistry) / 3;

    if (Total <45 || physics<33 || math<33 ||chemistry<33)
    {
        printf("your percent is %.3f\n you are faill \n", Total);
    }


    else         
    {
        printf("your  percent is %.3f\n  you are pass\n", Total);
    }


    return 0;
}
