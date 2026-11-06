#include <stdio.h>

int main(void) {
  int k = 5;
  int *ptr;
  ptr = &k;
  printf("%p\n", ptr);
  printf("%d\n", *ptr);
  *ptr = 7;
  printf("%d\n", *ptr);
  return 0;
}
