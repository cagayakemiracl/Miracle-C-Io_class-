#include "io.h"

void UsingIoBinaryReader(string filename, void (*func)(FILE *fp))
{
  UsingIoOpen(filename, "rb", func);
}
