#include <stdio.h>

int main(void) {
  int x = 10;
  int *ptr = &x;
  printf("%d\n", x);
  printf("Address is: %p\n", ptr);
  printf("Value: %d\n", *ptr);

  return 0;
}
