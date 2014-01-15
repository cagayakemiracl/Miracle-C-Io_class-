#include "io.h"

FILE *IoBinaryReader(string filename)
{
  return IoOpen(filename, "rb");
}
