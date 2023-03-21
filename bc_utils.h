#ifndef BC_UTILS_H_
#define BC_UTILS_H_

#include <stdio.h>
#include <stdlib.h>

#define BC_TYPES_IMPLEMENTATION
#include "bc_types.h"



FILE* openFile(const str path, const str mode);

void closeFile(FILE *f);

void maxcharCheck(const str s, const int maxchar);


#endif // BC_UTILS_H_
