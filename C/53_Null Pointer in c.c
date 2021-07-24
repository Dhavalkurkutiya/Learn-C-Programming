#include <stdio.h>
#include <string.h>

int main() {
  int a = 34;
  int *ptr = NULL;
  if(ptr != NULL) {
    printf("The address of a is %d", *ptr);
  }
  else {
    printf("The Pointer is a null pointer and can't not be dereferenced");
  }
  return 0;
}