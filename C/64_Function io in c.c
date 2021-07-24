#include <stdio.h>
#include <string.h>

int main() {
  
  printf("%s",a);
  FILE *ptr = NULL;
  char string[100] = "I Love You";

  /*==========Reading the file==========*/
  // ptr = fopen("love.txt","r");
  // fscanf(ptr,"%s",string);
  // printf("This contemt of this file  has %s\n",string);

  /*==========Write the file==========*/
  ptr = fopen("love.txt", "a"); // appen(a) write(w) mode
  fprintf(ptr, "%s", string);

  return 0;
}