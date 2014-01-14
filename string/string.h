#ifndef _STRING_H_INCLUDED_
#define _STRING_H_INCLUDED_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define STRING_SIZE 255           // 文字列の長さ
typedef char string[STRING_SIZE]; // string型の定義
typedef wchar_t wstring[STRING_SIZE]; //wstring型の定義

// strの文字数をかえす
int StringLength(string str);
// copyをis_copiedにコピー
void StringCopy(string is_copied, string copy);

#endif
