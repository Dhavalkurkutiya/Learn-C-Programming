#include <stdio.h>
#include <string.h>

int main()
{
	int chars;
	char a, b;
	int i = 0;
	char *ptr;
	while (i < 3)
	{
		printf("Employe %d: Enter the number of character in your employe Id\n", i + 1);
		scanf("%d", &chars);
		getchar();
		printf("Enter the valu of a \n");
		scanf("%c", &a);
		getchar();
		printf("Enter the valu of b \n");
		scanf("%c", &b);
		ptr = (char *)malloc((chars + 1) * sizeof(char));
		printf("Enter  your employe Id\n");
		scanf("%s", ptr);
		printf("Your employe id id %s\n", ptr);
		free(ptr);
		i = i + 1;
	}
	return 0;
}