#include <stdio.h>
#include <string.h>

int myFunc(int a, int b)
{
	// 	auto int myVar;
	// myVar = a + b;
	// 	extern int myVar;
	static int myVar;
	myVar++;
	printf("The myVar is %d\n", myVar);
	return myVar;
}
int main()
{
	// Declaration:: Telling the compiler about the variabl (No space reserved)
	// Definition :: Declaration + space reservation

	/* Storage Class*/
	// 	auto
	// 	extern
	// 	static
	// 	register

	register int myVar = myFunc(3, 4);
	myVar = myFunc(3, 4);
	myVar = myFunc(3, 4);
	myVar = myFunc(3, 4);
	myVar = myFunc(3, 4);
	myVar = myFunc(3, 4);
	// int myVar = 98;

	return 0;
}