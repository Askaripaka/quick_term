#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

void file_dir_create(void) {
  FILE *file;

  chdir("/tmp");
  mkdir("journal_files", 0777);

  printf("CREATING THE NEEDED FILES...\n");

  chdir("journal_files");

  file = fopen("file", "w");

  fclose(file);
}
