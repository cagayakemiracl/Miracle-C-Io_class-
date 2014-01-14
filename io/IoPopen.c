#include "io.h"

FILE *IoPopen(string command)
{
  FILE *fp;

  if (!(fp = popen(command, "r"))) {
    printf("コマンドが見つかりません!(%s)\n", command);
    exit(1);
  }

  return fp;
}
