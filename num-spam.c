#include <stdio.h>

int main(void) {

  int num = 100000;
  for (int i = 0; i < num; i++) {
    switch (i) {
    case 99999:
      printf("%d \n", i + 1);
      break;
    default:
      printf("%d ", i + 1);
    }
  }

  return 0;
}
