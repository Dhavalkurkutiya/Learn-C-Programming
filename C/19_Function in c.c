/* Types of Function */
// 1. Library Function
// 2. User Defined Function

/* Declaration Definition And Call */

//1. Declaration - A Function is decler to tell a compiler about its existence.

//2. Definition - A Function is difine to get some task done.

//3. Call - A Function is Call in order to be used.

/* Function Code Examples */
// 1. Without argument and without return values
// 2. without argument and with return value
// 3. with argument and without return value
// 4. with argument and with return value

#include <stdio.h>
// 4. with argument and with return value
int sum(int a, int b) {
  return a + b;
}

// 3. with argument and without return value
int printstar(int n) {
  for (int i = 0; i < n; i++) {
    printf("%c", '*');
  }
}

// 2. without argument and with return value
int takenumber(){
  int i;
  printf("Enter a number");
  scanf("%d",&i);
  return i;
}
int main() {
  int a,b,c;
  a = 7;
  b = 43;
  // c = sum(a, b);
  // printstar(7);
  // printf("The sum is %d\n", c);
  c = takenumber();
  printf("The number enter is %d\n", c);
  return 0;
}