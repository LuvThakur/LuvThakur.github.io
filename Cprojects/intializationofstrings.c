#include <stdio.h>

int main()
{  char str[]={'K','a','t','h','e','l','i','n','\0' }; // initialization way of strings
    // char str[] = "Kathelin";          // second way of initializatiion    
    char *ptr = str;
    while (*ptr != '\0') // here '\0' is null character use for termination of strings
    {
        printf("%c", *ptr  );
        ptr++;
    }

    return 0;
}