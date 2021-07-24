#include <stdio.h>
#include <string.h>

int main(){
  FILE *ptr = NULL;
  ptr = fopen("love.txt","r");
  // char c = fgetc(ptr);
  // printf("The character i read was %c\n",c);
  
  // c = fgetc(ptr);
  // printf("The character i read was %c\n",c);
  
   char str[34];
   fgets(str, 3, ptr);
   printf("The string is %s\n",str);
  
//  fputc('p',ptr);
//  fputs("This is a bag",ptr);
  
  fclose(ptr);
  return 0;
}