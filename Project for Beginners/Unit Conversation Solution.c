#include <stdio.h>

int main() {
  char input;
  float kmsTomiles = 0.621371;
  float inchesTofoot = 0.0633333;
  float cmsToInches = 0.393701;
  float paundToKgs = 0.453592;
  float inchesTometter = 0.0254;
  float first;
  float second;

  while (1) {
    printf("Enter tha input Character. q to Quit.\n 1. kmsTomiles\n 2. inchesTofoot\n 3. cmsToInches\n 4. paundToKgs\n 5. inchesTometter\n\n");

    scanf(" %c", &input);

    switch (input) {
      case 'q':
      printf("Quiting Tha Program...");
      goto end;
      break;

      case '1':
      printf("Enter quantity in terms of first unit: ");
      scanf("%f", &first);
      second = first * kmsTomiles;
      printf("%f kms is equal to miles %f\n", first, second);
      break;

      case '2':
      printf("Enter quantity in terms of first unit: ");
      scanf("%f", &first);
      second = first * inchesTofoot;
      printf("%f inches is equal to foot %f\n", first, second);
      break;

      case '3':
      printf("Enter quantity in terms of first unit: ");
      scanf("%f", &first);
      second = first * cmsToInches;
      printf("%f cms is  equal to Kgs %f\n", first, second);
      break;

      case '4':
      printf("Enter quantity in terms of first unit: ");
      scanf("%f", &first);
      second = first * paundToKgs;
      printf("%f paund is equal to Kgs %f\n", first, second);
      break;

      case '5':
      printf("Enter quantity in terms of first unit: ");
      scanf("%f", &first);
      second = first * inchesTometter;
      printf("%f inches is equal to  metter %f\n", first, second);
      break;

      default:
      break;
    }
  }
  end:
  return 0;
}