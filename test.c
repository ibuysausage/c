#include <stdio.h>
#include <string.h>

int main(void) {
  char buff[10];
  char other[10];

  // Demonstrating the stdin leftover
  printf("Enter in a string: ");

  fgets(buff, sizeof(buff), stdin);
  printf("Buff is %s\n", buff);

  printf("Enter in a string: ");
  fgets(other, sizeof(other), stdin);
  printf("other is: %s", other);

  // Demonstrating how to get rid of stdin newline
  other[strcspn(other, "\n")] = 0;
  // The exclamation mark will be put after the $string\n. so newline will be
  // created then ! will be appended
  printf("other is: %s!\n", other);
  // Also remember that if using atoi you don't need strcspn cus atoi stop
  // parsing at first non digit
}
