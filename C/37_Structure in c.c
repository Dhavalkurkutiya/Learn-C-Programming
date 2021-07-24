#include <stdio.h>
#include <string.h>

struct students
{
  int id;
  int marks;
  char fav_char;
  char name[34];
}dhaval, mehul, vishal;

// struct students dhaval, mehul, vishal;

void print() {
  printf("%s", dhaval.name);
}

int main() {

  dhaval.id = 1;
  mehul.id = 2;
  vishal.id = 3;

  dhaval.marks = 34;
  mehul.marks = 37;
  vishal.marks = 38;

  dhaval.fav_char = 'A';
  mehul.fav_char = 'B';
  vishal.fav_char = 'C';

  strcpy(dhaval.name, "Dhavalkurkutiya");
  // printf("Dhaval got id: %d\n", dhaval.id);
  // printf("Dhaval's name is : %s\n", dhaval.name);
  print();

  return 0;
}