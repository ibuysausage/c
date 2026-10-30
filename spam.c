#include <stdio.h>
#include <unistd.h>

int main(void) {

  static unsigned long long int num = 0;

  while (1) {
    printf("%llu         ", num + 1);
    sleep(2);
  }
  return 0;
}
