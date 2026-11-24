#include <stdio.h>
#include <stdlib.h>

/*
 * Because c can't find the type of the arguments they are just characters.
 * But this is where endptr comes into play
 * endptr points at the char that the strto$ could not convert
 * so if it could convert all of it because it was truly a float or int
 * it would point at the null terminator \0 so we look for that to decide if the
 * paramets are actually numbers.
 *
 * Also another reason why ato# is bad. you cant use endptr to find
 * out if it is actually a number.
 */

int main(int argc, char *argv[]) {

  if (argc == 1) {
    printf("Please add your values!\n");
    exit(1);
  }

  argc--;
  float argVF[argc];
  float sum = 0;
  float avg = 0;
  char *endptr;

  for (int i = 0; i < argc; ++i) {
    argVF[i + 1] = strtof(argv[i + 1], &endptr);
    if (*endptr != '\0') {
      printf("Please use numbers!!!\n");
      exit(1);
    };
    sum += argVF[i + 1];
  }

  avg = sum / argc;
  printf("%.2f\n", avg);

  return 0;
}
