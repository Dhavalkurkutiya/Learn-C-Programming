#include <stdio.h>
#include <string.h>

union students
{
  int id;
  int marks;
  char fav_char;
  char name[34];
};

int main()
{
  union students s1;
  s1.marks = 455;
  s1.fav_char = 'B';
  strcpy(s1.name,"Dhaval");
  s1.id = 1;
  
  
  printf("The id is %d\n",s1.id);
  printf("The marks is %d\n",s1.marks);
  printf("The fav_char is %c\n",s1.fav_char);
  printf("The name is %s\n",s1.name);
  
	return 0;
}