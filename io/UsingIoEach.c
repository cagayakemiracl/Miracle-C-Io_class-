#include "io.h"

void UsingIoEach(string filename, void (*func)(string line))
{
	FILE *fp = IoReader(filename);

  IoEach(fp, func);

  fclose(fp);
}
