#include <stdio.h>

int main(void) {

  static unsigned long long int num = 0;

  while (1) {
    printf("%llu         ", num + 1);
  }
  return 0;
}
