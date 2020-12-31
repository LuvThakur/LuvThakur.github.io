#include <stdio.h>

int main()
{
    char input;
    float kmstoMiles = 0.621371;
    float InchestoFoot = 0.0833333;
    float CmstoInches = 0.393701;
    float PoundtoKgs = 0.453592;
    float InchestoMeters = 0.0254;
    float first, second;

    while (1)
    {
        printf("enter the  input character. q to quit\n  1.Kms to Miles\n  2.Inches to Foot\n  3.Cms to Inches\n  4.Pound to Kgs\n  5.Inches to Meters");

        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf(" quitting program...\n");
            goto end;
            break;

        case '1':
            printf("enter first value\n ");
            scanf("%f", &first);
            second = first * kmstoMiles;
            printf("%f kms is equal to %f miles\n\n\n", first, second);
            break;

        case '2':
            printf("enter the first value\n ");
            scanf("%f", &first);
            second = first * InchestoFoot;
            printf("%fInches is equal to %fFeet\n", first, second);
            break;

        case '3':
            printf("enterf the first value\n");
            scanf("%f", &first);
            second = first * CmstoInches;
            printf("%fCms is equal to  %fInches\n", first, second);
            break;

        case '4':
            printf("enter the first value\n ");
            scanf("%f", &first);
            second = first * PoundtoKgs;
            printf("%fPounds is equal to kgs %f\n", first, second);
            break;

        case '5':
            printf("enter the first value\n");
            scanf("%f", &first);
            second = first * InchestoMeters;
            printf("%f Inches  is equal to s %fMeter\n\n\n\n", first, second);
            break;

        default:
            break;
        }
    }
end:

    return 0;
}
