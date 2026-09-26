#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
  srand(time(NULL));
  int num = rand() % 100 + 1;
  int guess;

  printf("GUESS THE NUMBER GAME \n");
  printf("enter 0000 to quit \n");

  do {
    printf("Enter your Guess (between 1 - 100): ");
    scanf("%d", &guess);

    if (guess == 0000) {
      printf("Ok!, the number was %d\n", num);
      break;
    } else if (guess > num) {
      printf("Too High\n");
    } else if (guess < num) {
      printf("Too Low\n");
    } else if (guess == num) {
      printf("Correct Guess\n");
    }

  } while (guess != num);
}