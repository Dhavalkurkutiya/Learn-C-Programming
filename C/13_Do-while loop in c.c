#include <stdio.h>

int main() {
  printf("Loop in C Programming");
  /*
  1. Do While Loop
  2. While Loop
  2. For Loop 
  */
  
  int num , index = 0;
  printf("Enter a Number...\n");
  scanf("%d", &num);

  do {
    printf("%d\n", index);
    index = index + 1;
  }while(index<=num);


  return 0;
}