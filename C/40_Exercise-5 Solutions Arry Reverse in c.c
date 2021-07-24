#include <stdio.h>
#include <string.h>

// 7
// 1, 2, 3, 4, 5, 6, 7
// 7, 6, 3, 4, 5, 2, 1
// 7, 6, 5, 4, 3, 2, 1
// 7, 6, 5, 4, 3, 2, 1


void arrayRev(int arry[])
{
    int temp;
  	for (int i = 0; i < 7; i++) {
  	 // swap item arry[i] with item (6-1)
  	 temp = arry[i];
  	 arry[i] = arry[6-1];
  	 arry[6-1] = temp;
  	 
	}
}


int main()
{
	int arry[] = {1, 2, 3, 4, 5, 6, 7};
	
	printf("Before Revarsing Arry\n");

	arrayRev(arry);
	printf("\nAfter Revarsing Arry\n");
	for (int i = 0; i < 7; i++) {
	  printf("The value of element %d is %d\n",i,arry[i]);
	}
	return 0;
}