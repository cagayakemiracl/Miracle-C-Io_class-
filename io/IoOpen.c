#include "io.h"

FILE *IoOpen(string filename, string option)
{
	FILE *fp;

	if (!(fp = fopen(filename, option))) {
    printf("ファイルが見つかりません!(%s)\n", filename);
    exit(1);
  }

  return fp;
}
