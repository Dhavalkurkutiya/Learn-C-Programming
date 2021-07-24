#include <stdio.h>

int main(){
  // int a = 34;
  // int* ptra = &a;
  
  // printf("%d\n",ptra);
  // ptra++;
  // printf("%d\n",ptra);
  // printf("%d\n",ptra+1);
  
  
  int arr[] = {1,2,3,4,5,6,7,8,9,0};
  int* arrptr = arr;
  
  printf("Value of positions 3 of tha arey is %d\n",arr[4]);
  printf("The address of first element of tha array is %d\n",&arr[0]);
  printf("The address of first element of tha array is %d\n",arr);
  printf("The address of second  element of tha array is %d\n",&arr[1]);
  printf("The address of second  element of tha array is %d\n",&arr + 1);
  printf("The address of therd  element of tha array is %d\n",&arr[2]);
  printf("The address of therd  element of tha array is %d\n",&arr + 2);
  // arr--; This line will throw an error
  
  printf("The value at address of first element of tha array is %d\n",*(&arr[0]));
  printf("The value at address of first element of tha array is %d\n",arr[0]);
  printf("The value at address of first element of tha array is %d\n",*(arr));
  printf("The value at address of second  element of tha array is %d\n",*(&arr[1]));
  printf("The value at address of second  element of tha array is %d\n",arr[1]);
  printf("The value at address of second  element of tha array is %d\n",*(&arr + 1));
  
  return 0;
}