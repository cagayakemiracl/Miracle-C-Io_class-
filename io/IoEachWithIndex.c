#include "io.h"

void IoEachWithIndex(FILE *fp, void (*func)(string line, int index))
{
	int i;
	string str;

	for (i = 0; IoReadline(fp, str); ++i) {
		func(str, i);
	}
}
