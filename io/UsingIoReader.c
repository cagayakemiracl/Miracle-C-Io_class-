#include "io.h"

void UsingIoReader(string filename, void (*func)(FILE *fp))
{
  UsingIoOpen(filename, "r", func);
}
