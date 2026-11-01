#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(void) {

  static unsigned long long int num = 0;

  while (1) {
    printf("%llu         ", num + 1);
    fflush(stdout);
    sleep(1);
  }
  return 0;
}
