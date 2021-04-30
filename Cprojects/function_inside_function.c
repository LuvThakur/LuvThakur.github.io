






























#include <stdio.h>

void goodmorning();
void goodafternoon(); // these all are function prototype
void goodevening();   // jo compiler ko btate m konsa function bna rha hu

int main()
{
    goodmorning();
                    // these all are call of function
   
    return 0;
}

void goodmorning()
{
    printf("good morning\n");             // function definition
     goodafternoon();
}
void goodafternoon()
{
    printf("goodafternoon\n");
     goodevening();
}
void goodevening()
{
    printf("goodevng\n");
}