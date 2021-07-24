#include <stdio.h>

int main()
{
  // label:
  //   printf("We are inside label");
    
  //   goto end;
  //   printf("Hellow World");
    
  //   goto label;
    
  //   end:
  //   printf("We are at end");
  
  int num;  
  for (int i = 0; i < 8; i++) {
    printf("%d\n",i);
    
    for (int j = 0; i < 8; i++) {
      printf("Enter the Number, enter 0 to exit;\n");
      scanf("%d",&num);
      
      if(num ==  0){
        goto end;
      }
      
    }
  } 
  end:
  return 0;
}

