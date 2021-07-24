#include <stdio.h>

int main()
{
  int age;
  printf("Enter Youer Age.....\n");
  scanf("%d",&age);
  printf("Your have enter %d as your age.\n",age);
  
  if(age >= 18){
    printf("Age is 18+");
  }
  else if(age >= 10){
    printf("Age is 1-10")
  }
  else if(age >= 3){
    printf("Age is 3-10")
  }
  else{
    printf("Age in not of 18+");
  }
  return 0;
}

