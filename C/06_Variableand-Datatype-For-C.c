#include <stdio.h>
int main() {
  // Flow of a C program
  /*
  1. Preprocessing
  2. Compilation
  3. Assembly
  4. Linking
  5. Loading
  */

  // Rules For Defining Variable in
  
  /*
  1. A variable name can only have letters (both uppercase and lowercase letters), digits and underscore.
  2. The first letter of a variable should be either a letter or an underscore.
  3. There is no rule on how long a variable name (identifier) can be. However, you may run into problems in some compilers if the variable name is longer than 31 characters.
  */
  
  // Data Type in C
  /*
  Basic Data Type : int char float double
  Derived Data Type : array pointer structure union
  Enumeration data Type : emum
  Void Data Type : void
  */

  // 1 Byte = 8 Bites
  /*
  4 Gb = 4 Gb * 1024 Mb * 1024 Kb * 1024 Bytes * 8 Bits
  */
  printf("%lu", sizeof(int));
  return 0;
}