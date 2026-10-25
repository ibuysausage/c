#include <stdio.h>

int main(void) {
  for (int i = 0; i < 5; i++) {
    int x = 10;
    x++;
    printf("%d\n", i + 1);
    printf("%d\n", x);
  }
  return 0;
}
