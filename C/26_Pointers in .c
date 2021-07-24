#include <stdio.h>

int main()
{
  printf("Lets learn about pointer.\n");
  
  int a = 56;
  int *ptra = &a;
  int *ptr2 ;
  
  printf("The address to pointer to a is %p\n",&ptra);
  
  printf("The adress of a is %p\n",&a);
  printf("The adress of a is %p\n",ptra);
  printf("The adress of some garbege is %p\n",ptr2);
  
  printf("The value of a is %d\n",*ptra);
  printf("The value of a is %d\n",a);
  return 0;
}