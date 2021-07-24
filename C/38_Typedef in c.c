#include <stdio.h>

typedef struct students
{
  int id;
  int marks;
  char fav_char;
  char name[34];
} std;

int main() {
  
  // int* a,b;
  typedef int*  intPointer;
  intPointer a,b;
  int c = 89;
  
  a = &c;
  b = &c;
  
  // struct students s1,s2;
  // 	std s1, s2;
  // 	s1.id = 45;
  // 	s2.id = 76;
  // 	printf("Value of s1 id %d\n", s1.id);
  // 	printf("Value of s2 id %d\n", s2.id);

  // 	typedef <previous_name>  <alias_name>;
  // 	typedef unsigned long ul;
  // 	typedef int integer;
  // 	ul l1, l2, l3;
  // 	integer a = 78;
  // 	printf("Value of a is %d", a);
  
  
  
  return 0;
}