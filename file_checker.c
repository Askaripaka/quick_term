#include "file_create.c"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void file_checker(void) {
  file_dir_create();

  chdir("/tmp/journal_files/");
  FILE *file = fopen("file", "r");
  if (file == NULL) {
    perror("\nNO SUCH FILE\n");
    exit(0);
  } else {
    printf("FILE FOUND\n");
  }
}
