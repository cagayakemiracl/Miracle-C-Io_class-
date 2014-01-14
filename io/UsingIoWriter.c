#include "io.h"

void UsingIoWriter(string filename, void (*func)(FILE *fp))
{
  UsingIoOpen(filename, "w", func);
}
