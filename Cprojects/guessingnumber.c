
// Game working bcz
// first program execute then checked condition

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int rnumber, Guess, Count = 1;
    srand(time(0));
    rnumber = rand() % 100 + 1;

    
    // printf("%d is random number\n", rnumber);

    printf(" Guessing Number between 1 to 100\n\n");

    do
    {
        printf("Enter the Guessing Number\n");
        scanf("%d", &Guess);

        if (Guess > rnumber)
        {
            printf(" Think Lower Number !\n\n");
        }
        else if (Guess < rnumber)
        {
            printf("Think Higher Number \n\n");
        }
        else
        {
            printf(" well done You Guess Number in %d attempt\n", Count);
        }
        Count++;

    } while (Guess != rnumber);

    return 0;
}