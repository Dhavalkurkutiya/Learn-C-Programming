
#include <stdio.h>  // Pre Processing Stetment Command add this stdio.sh file

int main() // Function and main() Function name
{
  int a , b;
  printf("Enter Numbar a\n");
  scanf("%d", &a);

  printf("Enter Numbar b\n");
  scanf("%d", &b);

  printf("Tha sum is %d\n" , a + b);

  // Notes: Complier Exacting Steps
  // gcc -wall -save-temps main.c -o output
  /*
  1. Preprocessing
  2. Compailesan
  3. Assembly
  4. Linking
  */
  return 0;
}