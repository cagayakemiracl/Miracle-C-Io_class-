#include "string.h"

int StringLength(string str)
{
  wstring wstr;
  
  setlocale(LC_CTYPE, "jpn");
  
  return mbstowcs(wstr, str, STRING_SIZE);
}
