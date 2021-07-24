#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 34;
  int *ptr; //This is wild pointer
  // *ptr = 34; //This is  not to go thing to do
  ptr = &a; //ptr is no longer  a wiled pointer
  printf("This value of a is %d\n",*ptr);
  return 0;
}