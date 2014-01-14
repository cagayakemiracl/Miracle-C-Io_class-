#include "io.h"

FILE *IoReader(string filename)
{
  return IoOpen(filename, "r");
}
