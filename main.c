#include <stdio.h>
#include <string.h>

int main(void) {
  struct sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
  } sigline, *sigline_p;

  sigline.signum = 5;
  strcpy(sigline.signame, "SIGINT");
  strcpy(sigline.sigdesc, "Interup from keyboard");
  if (sigline.signum == 5) {
    printf("fah\n");
  }
  sigline_p = &sigline;
  return 0;
};
