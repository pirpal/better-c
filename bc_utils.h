#ifndef CB_UTILS_H_
#define CB_UTILS_H_

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

FILE* openFile(const char* path, const char* mode);
void closeFile(FILE *f);
bool maxcharCheck(const char *s, const int maxchar);


#endif // CB_UTILS_H_
