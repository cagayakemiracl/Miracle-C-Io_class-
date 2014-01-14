#include "io.h"

char *IoReadline(FILE *fp, string str)
{
  return fgets(str, STRING_SIZE, fp);
}
