#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generatRandomNumber(int n) {
  srand(time(NULL));
  return rand() % n;
}

int greater(char char1, char char2) {
  if (char1 == char2) {
    return -1;
  }
  else if ((char1 == 'r') && (char2 == 's')) {
    return 1;
  }
  else if ((char2 == 'r') && (char1 == 's')) {
    return 0;
  }

  else if ((char1 == 'p') && (char2 == 'r')) {
    return 1;
  }
  else if ((char2 == 'p') && (char1 == 'r')) {
    return 0;
  }

  else if ((char1 == 's') && (char2 == 'p')) {
    return 1;
  }
  else if ((char2 == 's') && (char1 == 'p')) {
    return 0;
  }
}

int main() {
  int playerScore = 0,
  compScore = 0,
  temp;
  char playerChar,
  CompChar;
  char dict[] = {
    'r',
    'p',
    's'
  };

  printf("Welcome to the Rock , Paper , Scissor\n");
  for (int i = 0; i < 3; i++) {
    printf("Players 1's Turn:");
    printf("Choose 1 for rock ,  2 for paper , 3 for Scissor\n");
    scanf("%d", &temp);
    getchar();
    playerChar = dict[temp - 1];
    printf("You Choose %c\n\n", playerChar);

    printf("Computer 1's Turn:");
    printf("Choose 1 for rock ,  2 for paper , 3 for Scissor\n");
    temp = generatRandomNumber(3) + 1;
    CompChar = dict[temp - 1];
    printf("Computer Choose %c\n\n", CompChar);

    if (greater(CompChar, CompChar) == 1) {
      compScore += 1;
      printf("CPU Got'it");
    }

    else if (greater(CompChar, CompChar) == -1) {
      compScore += 1;
      playerScore += 1;
      printf("It's drow");
    }

    else
    {
      playerScore += 1;
      printf("You Got'it");
    }
    printf("You: %d\n Computer:%d", playerScore, compScore);
  }

  if (playerScore > compScore) {
    printf("You Win!");
  }
  else if (playerScore < compScore) {
    printf("Computer Win!");
  }
  else
  {
    printf("It s drow!");
  }
}