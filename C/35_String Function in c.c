#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "Dhaval";
  char s2[] = "Bhai";
  char s3[53];

  printf("The strcmp for s1 , s2 return %d\n", strcmp(s1, s2));
  // puts(strcat(s1,s2));
  // printf("The length of s1 is %d\n", strlen(s1));
  // printf("The length of s2 is %d\n", strlen(s2));

  // printf("The reverse string s1 is: ");
  // puts(strcat(s1));
  // printf("The reverse string s2 is: ");
  // puts(strrev(s2));

  // strcpy(s3 , strcat(s1,s2));
  // puts(s3);
  return 0;
}