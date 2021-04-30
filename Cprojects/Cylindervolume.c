#include <stdio.h>

int main()
{

    int r;
    int h;

    float pie = 3.14;

    printf("enter the value of radius r\ncm");
    scanf("%d", &r);

    printf("enter the value of height h\ncm");
    scanf("%d", &h);

    float vol = pie * r * r * h;
    printf("Volume of Cylinder %f\ncm3", vol);
    return 0;
}