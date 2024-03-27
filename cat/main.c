#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 2) {
    // TODO: print usage
    return EXIT_FAILURE;
  }

  char *filename = argv[1];
  FILE *fp = fopen(filename, "r");
  int ch = 0;

  while ((ch = fgetc(fp)) != EOF)
    putchar(ch);
  fclose(fp);
}
