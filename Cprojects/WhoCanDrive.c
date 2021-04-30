#include <stdio.h>

int main()
{

    int age;
    int vippass = 0; //every age people can drive bcz of vippass //vippass always 0
    vippass = 1;

    printf("enter your  age \n");
    scanf("%d", &age);
    // ! " NOT" logicoperator it convert True to False
    //  or   COnvert False to True
    if ((age >= 18 && age <= 50) || !(vippass == 1)) //in c language = to is asignment or == to is show equality;
    {                                                // here && is indicate a "and"

        printf(" You can drive", age);
    }
    else
    {
        printf("  You can't Drive ", age);
    }

    return 0;
}
