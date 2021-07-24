#include <stdio.h>

struct Driver {
  char name[34];
  char dlNo[45];
  char route[47];
  int kms;
};


int main() {
  struct Driver d1,d2,d3;
  printf("Enter the details of the Driver No 1\n");
  printf("Enter the name of first drivers\n");
  scanf("%s", &d1.name); 
  printf("Enter the dlNo of first drivers\n");
  scanf("%d", &d1.dlNo); 
  printf("Enter the route of first drivers\n");
  scanf("%s", &d1.route);
  printf("Enter the number of kms of first drivers\n");
  scanf("%d", &d1.kms);
  
  printf("Enter the details of the Driver No 2\n");
  printf("Enter the name of second drivers\n");
  scanf("%s", &d2.name); 
  printf("Enter the dlNo of second drivers\n");
  scanf("%d", &d2.dlNo); 
  printf("Enter the route of second drivers\n");
  scanf("%s", &d2.route);
  printf("Enter the number of kms of second drivers\n");
  scanf("%d", &d2.kms);
  
  printf("Enter the details of the Driver No 3\n");
  printf("Enter the name of therd drivers\n");
  scanf("%s", &d3.name); 
  printf("Enter the dlNo of therd drivers\n");
  scanf("%d", &d3.dlNo); 
  printf("Enter the route of therd drivers\n");
  scanf("%s", &d3.route);
  printf("Enter the number of kms of therd drivers\n");
  scanf("%d", &d3.kms);
  
  
  printf("Printing Information of these drivers:\n");
  
  printf("For Driver No 1:\nName is %s\n",d1.name);
  printf("Dl Number is %s\n",d1.dlNo);
  printf("route is %s\n",d1.route);
  printf("Kms is %d\n",d1.kms);
  
  printf("For Driver No 2:\nName is %s\n",d2.name);
  printf("Dl Number is %s\n",d2.dlNo);
  printf("route is %s\n",d2.route);
  printf("Kms is %d\n",d2.kms);
  
  printf("For Driver No 3:\nName is %s\n",d3.name);
  printf("Dl Number is %s\n",d3.dlNo);
  printf("route is %s\n",d3.route);
  printf("Kms is %d\n",d3.kms);
  return 0;
}