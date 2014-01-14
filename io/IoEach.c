#include "io.h"

void IoEach(FILE *fp, void (*func)(string line))
{
	string str;

	while (IoReadline(fp, str)) {
		func(str);
	}
}
