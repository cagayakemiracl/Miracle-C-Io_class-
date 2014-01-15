#include "io.h"

char IoReadByte(FILE *fp)
{
  char c;
  
  if (fread(&c, sizeof(char), 1, fp)) {
    return c;
  }

  return EOF;
}
