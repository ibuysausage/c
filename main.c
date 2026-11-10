#include <stdio.h>

int main(void) {
  int a = 5;
  printf("%d\n", a);
  printf("%d\n", a++);
  a = 5;
  printf("%d\n", ++a);
  fflush(stdout);
  for (unsigned int i = 0; i < 5; ++i) {
    printf("%d\n");
  }
  return 0;
}
