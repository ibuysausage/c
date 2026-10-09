#include <stdio.h>
#include <string.h>

int main(void) {
  char name[50];

  printf("Enter your full name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = 0;

  printf("Hi! %s\n", name);

  return 0;
}
