#include <stdio.h>

int func1(int array[])
{
	for (int i = 0; i < 4; i++)
	{
		printf("Tha value at  %d is %d\n", i, array[i]);
	}
	// array[0] = 384; //Very important point that if you change value here , get reflected in main()
	return 0;
}

void func2(int *ptr)
{
	for (int i = 0; i < 4; i++)
	{
		printf("Tha value at  %d is %d\n", i, *(ptr + i));
	}
	*(ptr + 2) = 66;
}

void func3(arr[2][2]){
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2 ; j++) {
		 printf("Tha value at  %d %d is %d\n", i,j,arr[i][j]);
    }
  }
}

int main()
{
	int arr[][2] = {{2, 5}, {8, 6}};
	// printf("The value at indexe 0 is %d\n",arr[0]);
	// func1(arr);
	// printf("The value at indexe 0 is %d\n",arr[0]);
	// func2(arr);
	// func2(arr);
	func3(arr);
	return 0;
}