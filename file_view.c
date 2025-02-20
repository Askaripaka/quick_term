#include <stdio.h>
#include <stdlib.h>

void file_view(void) {
  FILE *file;
  char *buff = malloc(1000);

  file = fopen("file", "r");
  if (file == NULL) {
    perror("Error opening file");
    return;
  }

  printf("\n++++====++++====++++====++++====++++====++++====\n");
  while (fgets(buff, sizeof(buff), file) != NULL) {
    printf("%s", buff);
  }
  printf("++++====++++====++++====++++====++++====++++====\n");

  fclose(file);

  free(buff);
}
