#include <stdio.h>

int main()
{

    float Income;
    float Tax;

    printf("Enter Your per Year Income\n ");
    scanf("%f", &Income);

    if (Income > 1000000)
    {
        Tax = (Income * 30) / 100;
        printf("%.4f  is your Tax", Tax);
    }

    else if (Income > 500000)
    {
        Tax = (Income * 20) / 100;
        printf("%.4f  is your Tax", Tax);
    }
    else if (
        Income > 250000)
    {
        Tax = (Income * 5) / 100;
        printf("%.4f  is your Tax", Tax);
    }
    else
    {
        printf("No tax apply on Peoples whose income less or equal to 2.5L ");
        //     Tax = (Income * 0) / 100;

        //     printf("%d No tax", Tax);
    }

    return 0;
}