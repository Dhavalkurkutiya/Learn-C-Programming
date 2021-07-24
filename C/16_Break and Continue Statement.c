#include <stdio.h>

int main()
{
  int i,age;
  for(int i = 0; i<10; i++){
    
    printf("%d\n Enter you age\n",i);
    scanf("%d",&age);
    
    // if(age>10){
    //   break;
    // }
    
    if(age>10){
      continue;
    }
    
    printf("DhavalKurkutiya");
  }
  
  return 0;
}