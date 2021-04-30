#include <stdio.h>
int main()
{ 
//   herfe name display before the space in full name 


    char name[30];
    printf("Entr name:\n");
    scanf("%s", name);           // & not use bcz name also take address

    printf("Your Name is %s\n",name);

    
    
     /*   // Taking space 
    char name[20];
    printf("Enter name: ");

    fgets(name, sizeof(name),stdin); // fgets use for read strings liumited charcters from user 
    printf(" name");
    puts(name); // to display name  */
    return 0;
}