#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

main() {

  /*  	int stat(const char *path, struct stat *buf);
   */

  int s;

  int n;
  char string[50];
  n = scanf("%s", string);
  printf("string=%s", string);
}
