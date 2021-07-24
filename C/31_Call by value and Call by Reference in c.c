#include <stdio.h>

void changValue(int *address)
{
	*address = 345;
}

void addNumber(int *num, int *num2)
{
  *num + *num2;
  *num- *num2;
}

int main()
{
	int a = 34, b = 56;
	int numberA = 5, numberB = 4;
	printf("Tha value if a now is %d\n", a);
	changValue(&a);
	printf("Tha value if a now is %d\n", a);

	printf("Tha value if numberA now is %d\n", numberA);
	printf("Tha value if numberA now is %d\n", numberB);
	addNumber(&numberA, &numberB);
	
	printf("-------------------------------\n");
	printf("Tha value if numberA now is %d\n", numberA);
	printf("Tha value if numberA now is %d\n", numberB);

	return 0;
}
