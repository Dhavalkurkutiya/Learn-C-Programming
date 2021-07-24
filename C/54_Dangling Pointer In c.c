#include <stdio.h>
#include <stdlib.h>


 int functionDangling(){
    int* a,b,sum;
    a = 10;
    b = 5;
   sum = a + b;
  }


int main() {
  //case:1 De allocation of a memory block
  int *ptr = (int *) malloc(7*sizeof(int));
  ptr[0] = 34;
  ptr[1] = 53;
  ptr[2] = 23;
  ptr[3] = 45;
  free(ptr); //ptr is now a dangling pointer

  //case:2  Function returning local variable address
  int* dangPtr = functionDangling(); //ptr is now a dangling pointer
  
  
  int* danglingPtr3;
  //case:3  If a variable goes out of scope
  {
    int a = 34;
    danglingPtr3 = &a;
  }
  //Here variable a goes out of scope which means danglingPtr3 is pointing  to a location which is freed and hence danglingPtr3 is now a dangling ppointer
  
  return 0;
}