#include <stdio.h>

void printStr(char str[])
{
	int i = 0;
	while (str[i] != '\0')
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
}

int main()
{
	// char str[] = {'d','h','a','v','a','l','\0'};
	// char str[6] = "Dhaval";
	char str[34];
	gets(str);
	printf("Using cutstem function printStr:	");
	printStr(str);
	printf("Using printf %s\n", str);
	printf("Using puts: \n");
	puts(str);
	return 0;
}