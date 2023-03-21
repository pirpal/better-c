#include "cb_utils.h"
#include "cb_errors.h"
#include <stdio.h>
#include <string.h>


FILE*
openFile(const char* path, const char* mode)
{
  FILE *f = fopen(path, mode);
  if (f == NULL) {
    errExit(err_FileHandling,
             "cb_fopen",
             "failed to open file with given PATH",
             NULL);
  }
  return f;
}


void
closeFile(FILE *f)
{
  if ((fclose(f)) != 0) {
    errExit(err_FileHandling,
             "cb_fclose",
             "failed to close given FILE*",
             NULL);
  }
  return;
}


// Often needed boolean functions
bool maxcharCheck(const char *s, const int maxchar)
{
  return ((int) strlen(s) < maxchar);
}



