#include <stdio.h>

int main()
{
	int marks[2][4] = {{12,22,33,44},
					          {22,33,44,55}};

	// for (int i = 0; i < 4; i++) {
	//   printf("Enter tha value of %d elements of array\n", i);
	//   scanf("%d", &marks[i]);
	// }

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
		// 	printf("The value of %d,%d elements of array is %d\n", i, j , marks[i][j]);
		printf("%d ",marks[i][j]);
		}
		printf("\n");
	}

	// marks[0] = 34;
	// printf("Marks of student 1 is %d\n",marks[0]);
	// marks[0] = 34;
	// marks[1] = 48;
	// marks[2] = 54;
	// marks[3] = 64;
	// printf("Marks of student 1 is %d\n",marks[0]);

	return 0;
}