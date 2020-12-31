#include <stdio.h>
int main()
{ int num;
//label://
/*printf("we are inside\n ");
goto 
end;
// #goto end;  is use to prevent that output which  wriitn below the got end; 


printf("Hello world\n");


//#goto label;  this         use to print or intiate     where           
// end:                 is                 the output          it use.
goto label;
end:
printf("yes we can allow");*/

for(int i=0; i<15; i++){
    printf("%d\n",i);
  
  for(int j=0; j<15; j++){
      printf(" enter 0 to exist\n");
      scanf("%d",&num);
  
  if(num==0){
 goto end;
  }

  }



}
end:



return 0;
}