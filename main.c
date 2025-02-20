#include "file_checker.c"
#include "file_view.c"
#include "file_write.c"
#include <stdio.h>
#include <unistd.h>

void chars(void) {
  printf("HELLO AND WELCOME TO TERM-QUICK\n\n");
  printf("TO WRITE, TYPE 0\n");
  printf("TO READ, TYPE 1\n");
  printf("TO QUIT, TYPE 2\n");
}

enum opt { WRITE, READ, QUIT };

int main(int argc, char *argv[]) {
  chars();

  int user_opt;
  printf("INPUT HERE -> ");
  scanf("%1d", &user_opt);

  switch (user_opt) {
  case WRITE:
    file_checker();
    file_write();

  case READ:
    chdir("/tmp/journal_files/");
    file_view();

  case QUIT:
    printf("EXITING.....");
    exit(0);

  default:
    printf("NO SUCH OPTION......EXITING");
    exit(0);
  }

  return 0;
}
