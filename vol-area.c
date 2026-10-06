#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int volume(int volL, int volW, int volH) {

  int volume = volL * volW * volH;
  printf("\nThe volume is: %d\n", volume);

  return volL * volW;
}

int area(int areaL, int areaH) {
  int area = areaL * areaH;

  printf("\nThe Area is: %d\n", area);
  return areaL * areaH;
}

int main(void) {

  int length = 0;
  int width = 0;
  int height = 0;

  char buf[50];
  char *endptr;
  printf("Length: ");
  fgets(buf, sizeof(buf), stdin);
  length = strtol(buf, &endptr, 10);

  printf("Width: ");
  fgets(buf, sizeof(buf), stdin);
  width = strtol(buf, &endptr, 10);

  printf("Height: ");
  fgets(buf, sizeof(buf), stdin);
  height = strtol(buf, &endptr, 10);

  char str[50];
  printf("Area Or Volume?: ");
  fgets(str, sizeof(str), stdin);
  // Needed for strcmp because of the \n
  str[strcspn(str, "\n")] = 0;

  if (strcmp("Area", str) == 0) {
    area(length, height);
  } else {
    volume(length, width, height);
  }

  return 0;
}
