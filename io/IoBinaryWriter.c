#include "io.h"

FILE *IoBinaryWriter(string filename)
{
  return IoOpen(filename, "wb");
}
