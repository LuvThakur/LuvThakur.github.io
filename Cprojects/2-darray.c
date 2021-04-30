#include <stdio.h>

int main()
{

    int n;
    int marks[3][5];
    // printf("enter the 3 sztudents   marks\n");
    for (int j = 0;  j< 3; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Enter the marks[%d] of student[%d]\n",i+1,j+1);
            scanf("%d", &marks[j][i]);
        }
    }

    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf (" student[%d]=subject[%d]==Marks[%d]\n",j+1,i+1, marks[j][i]);
        }
    }
    return 0;
}