#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char height[50];
  char *endptr;
  printf("Enter your height in cm: ");
  fgets(height, sizeof(height), stdin);
  int heightint = strtol(height, &endptr, 10);

  if (heightint >= 160) {
    printf("Tall enough\n");
  } else {
    printf("not tall enough\n");
  }

  return 0;
}
