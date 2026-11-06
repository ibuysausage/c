#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int volume(int volL, int volW, int volH) {

  unsigned long long int volume = volL * volW * volH;
  printf("\nThe volume is: %llu\n", volume);

  return volL * volW;
}

int area(int areaL, int areaH) {
  unsigned long long int area = areaL * areaH;

  printf("\nThe Area is: %llu\n", area);
  return areaL * areaH;
}

int main(int argc, char *argv[]) {

  unsigned long int length = 0;
  unsigned long int width = 0;
  unsigned long int height = 0;

  char buf[50];
  char *endptr;

  if (argc == 4 && strcmp(argv[1], "-area") == 0) {

    length = strtol(argv[2], &endptr, 10);
    width = strtol(argv[3], &endptr, 10);
    area(length, width);
  } else if (argc == 5 && strcmp(argv[1], "-vol") == 0) {

    length = strtol(argv[2], &endptr, 10);
    width = strtol(argv[3], &endptr, 10);
    height = strtol(argv[4], &endptr, 10);
    volume(length, width, height);
  } else {

    char aov[50];
    printf("Area Or Volume?(a or v): ");
    fgets(aov, sizeof(aov), stdin);
    // Needed for strcmp because of the \n
    // aov[strcspn(aov, "\n")] = 0;

    if (strcmp(aov, "a\n") == 0 || strcmp(aov, "area\n") == 0) {
      printf("Length: ");
      fgets(buf, sizeof(buf), stdin);
      length = strtol(buf, &endptr, 10);

      printf("Width: ");
      fgets(buf, sizeof(buf), stdin);
      width = strtol(buf, &endptr, 10);

      area(length, width);
    } else if (strcmp(aov, "v\n") == 0 || strcmp(aov, "volume\n") == 0) {
      printf("Length: ");
      fgets(buf, sizeof(buf), stdin);
      length = strtol(buf, &endptr, 10);

      printf("Width: ");
      fgets(buf, sizeof(buf), stdin);
      width = strtol(buf, &endptr, 10);

      printf("Height: ");
      fgets(buf, sizeof(buf), stdin);
      height = strtol(buf, &endptr, 10);

      volume(length, width, height);
    }
  }
  return 0;
}
