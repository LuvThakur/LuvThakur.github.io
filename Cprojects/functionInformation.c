#include <stdio.h>

void goodmorning();
void goodafternoon();   // these all are function prototype
void goodevening();     // jo compiler ko btate m konsa function bna rha hu

int main()
{
goodmorning();
goodafternoon();  // these all are call of function
goodevening();
    return 0;
}

void goodmorning()
{
    printf("good morning\n");  // function definition
}
void goodafternoon()
{
    printf("goodafternoon\n");
}
void goodevening()
{
    printf("goodevng\n");
}