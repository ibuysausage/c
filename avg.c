#include <stdio.h>
#include <stdlib.h>

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
    sum += argVF[i + 1];
  }

  avg = sum / argc;
  printf("%f\n", avg);

  return 0;
}
