#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: remeber to remind user that mem is not enough

void file_write(void) {
  FILE *file;

  while (true) {
    char user_escape[] = "q";

    char *user_buffer = malloc(500);
    printf("ENTER HERE(ENTER 'q' to quit loop) -> ");
    scanf("%499s", user_buffer);

    int comp_val = strcmp(user_escape, user_buffer);
    if (comp_val == 0) {
      break;
    } else {
      file = fopen("file", "a");

      fprintf(file, "%s\n", user_buffer);

      free(user_buffer);
    }
    fclose(file);
  }
}
