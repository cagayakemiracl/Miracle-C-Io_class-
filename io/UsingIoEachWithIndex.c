#include "io.h"

void UsingIoEachWithIndex(string filename,
                          void (*func)(string line, int index))
{
  FILE *fp = IoReader(filename);

  IoEachWithIndex(fp, func);

  fclose(fp);
}
