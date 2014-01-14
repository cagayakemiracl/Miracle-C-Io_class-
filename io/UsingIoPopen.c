#include "io.h"

void UsingIoPopen(string command, void (*func)(FILE *fp))
{
  FILE *fp = IoPopen(command);

  func(fp);

  pclose(fp);
}
