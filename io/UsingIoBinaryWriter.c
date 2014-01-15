#include "io.h"

void UsingIoBinaryWriter(string filename, void (*func)(FILE *fp))
{
  UsingIoOpen(filename, "wb", func);
}

