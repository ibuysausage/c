#include <stdio.h>

int main(void) {
  int d = 2;
  printf("Welcome to bug\n");
  scanf("%d", d);
  printf("you did %d\n", d);
  return 0;
}
