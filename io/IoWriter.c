#include "io.h"

FILE *IoWriter(string filename)
{
  return IoOpen(filename, "w");
}
