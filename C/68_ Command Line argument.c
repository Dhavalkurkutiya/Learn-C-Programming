#include <stdio.h>

int main(int argc, char *argv[])
{
  
  printf("The valu of argc is %d\n",argc);	
  for (int i = 0; i < argc; i++) {
    printf("The argument at index number %d has value of %s\n",i,argv[i]);
  }
}