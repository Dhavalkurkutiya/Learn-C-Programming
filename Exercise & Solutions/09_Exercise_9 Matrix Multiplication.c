#include <stdio.h>
#include <string.h>

int main() {
  int m,
  n,
  sum = 0;
  int a[3][4],
  b[4][2],
  result[3][2];

  printf("Enter the your firsy matrix\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      // printf("Enter the %d %d element your firsy matrix\n",i,j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter the  second matrix\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 2; j++) {
      // printf("Enter the %d %d element your firsy matrix\n",i,j);
      scanf("%d", &b[i][j]);
    }
  }

  // print result matrix
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      // calculate the result
      for (int k = 0; k < 4; k++) {
        sum += a[i][k] * b[k][j];
      }
      result[i][j] = sum;
      sum = 0;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      // print result
      printf("%d \t", result[i][j]);
      sum = 0;
    }
    printf("\n");
  }

  return 0;
}