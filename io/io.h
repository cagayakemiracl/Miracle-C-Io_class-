#ifndef _IO_H_INCLUDED_
#define _IO_H_INCLUDED_

#include <stdio.h>
#include <stdlib.h>
#include "../string/string.h"

// filenameファイルをoptionで開く
FILE *IoOpen(string filename, string option);
// filenameファイルを書き込み専用ファイルとして開く
FILE *IoWriter(string filename);
// filenameファイルを読み込み専用ファイルとして開く
FILE *IoReader(string filename);
// commandを実行しその出力を取得
FILE *IoPopen(string command);
// fpを一行読み込みstrに格納
char *IoReadline(FILE *fp, string str);
// fpの全ての行に対しfuncを適応
void IoEach(FILE *fp, void (*func)(string line));
// fpの全ての行に対し行番号を渡してfuncを適用
void IoEachWithIndex(FILE *fp, void (*func)(string line, int index));

// ファイルをオープンし、funcを実行したらファイルを閉じる
void UsingIoOpen(string filename, string option, void (*func)(FILE *fp));
void UsingIoWriter(string filename, void (*func)(FILE *fp));
void UsingIoReader(string filename, void (*func)(FILE *fp));
void UsingIoPopen(string command, void (*func)(FILE *fp));
void UsingIoEach(string filename, void (*func)(string line));
void UsingIoEachWithIndex(string filename,
                          void (*func)(string line, int index));

#endif
