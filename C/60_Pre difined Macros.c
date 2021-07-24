#include <stdio.h>
#include <string.h>

int main(){
  printf("File name is %s\n",__FILE__);
  printf("Tody's Date is  %s\n",__DATE__);
  printf("Time Now is %s\n",__TIME__);
  printf("Line number is %d\n",__LINE__);
  printf("ANSI: %d\n",__STDC__);
  return 0;
}