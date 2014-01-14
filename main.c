/*
  サンプルプログラム
*/

#include "main.h"

void arg_func(char *line, int index);

int main(void)
{
  UsingIoEachWithIndex("text/sample.txt", arg_func);

  return 0;
}

void arg_func(char *line, int index)
{
  printf("%d: %s", index, line);
}
