#include <stdio.h>
#include "main.c"
#define PI 3.14
#define SQUARE(r) r*r

int main(){
  float var = PI;
  int r = 4;
  printf("This valu of pi is %f\n",var);
  printf("This area of this curical is %f\n",PI * SQUARE(r));
  return 0;
}