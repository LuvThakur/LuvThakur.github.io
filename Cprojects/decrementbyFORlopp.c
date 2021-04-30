#include <stdio.h>

int main()
{
int n;

int a;

printf("Enter value of N \n");
scanf("%d",&n);

for(a=n; a; a--) // -5 jaise -number reveerse nhi hoge 
{
    printf("Reverse Number is %d\n",a);
}
    
    return 0;

}