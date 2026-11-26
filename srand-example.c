#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int r = 0;
  unsigned int attempts = 0;
  do {
    r = rand() % 100;
    printf("Number is %d\n", r);
    attempts++;
  } while (r != 10);

  printf("Took %d attemps\n", attempts);
}
