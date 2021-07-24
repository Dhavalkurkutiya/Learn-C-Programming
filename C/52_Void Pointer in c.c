#include <stdio.h>
#include <string.h>

int main() {
  int a = 56;
  float b = 3.14;
  void *ptr;
  ptr = &a;
  printf("The value of a is %d\n", *((int *)ptr));
  ptr = &b;
  printf("The value of a is %f\n", *((float *)ptr));

  return 0; 
}