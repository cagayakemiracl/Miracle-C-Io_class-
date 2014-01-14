#include "string.h"

void StringCopy(string is_copied, string copy)
{
  snprintf(is_copied, STRING_SIZE, "%s", copy);
}
