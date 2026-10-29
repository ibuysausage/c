#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  const int min = 1;
  const int max = 100;

  _Bool correct = 0;
  const unsigned short int num = rand() % (max - min + 1) + min;
  unsigned int attemps = 0;

  while (correct == 0) {
    static unsigned short int guess = 0;

    char buf[5];
    char *endptr;

    if (guess == 0) {
      printf("Guess the number: ");
    } else if (guess > num) {
      printf("Too High: ");
    } else {
      printf("Too Low: ");
    }

    attemps++;

    fgets(buf, sizeof(buf), stdin);
    guess = strtol(buf, &endptr, 10);

    if (guess == num) {
      puts("\nYou win!!");
      printf("Number was: %u\n", num);
      printf("Took %u attemps\n", attemps);

      correct = 1;
    }
  }
  return 0;
}
