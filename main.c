#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int num = rand();

  _Bool correct;

  printf("%d\n", num);

  if (correct == 1) {
    printf("You captured the flag!\n");
  }

  return 0;
}
