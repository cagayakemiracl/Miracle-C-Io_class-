#include "io.h"

void UsingIoOpen(string filename, string option, void (*func)(FILE *fp))
{
  FILE *fp = IoOpen(filename, option);

  func(fp);

  fclose(fp);
}
