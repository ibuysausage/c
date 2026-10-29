#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  const int min = 1;
  const int max = 100;

  _Bool correct;

  while (1) {
    int num = rand() % (max - min + 1) + min;
    printf("%d\n", num);
  }

  if (correct == 1) {
    printf("You captured the flag!\n");
  }

  return 0;
}
