#include <stdio.h>
#include <string.h>

#include "bc_utils.h"
#include "bc_errors.h"



FILE*
openFile(const str path, const str mode)
{
  FILE *f = fopen(path, mode);
  if (f == NULL) {
    errExit(err_File, "openFile", "Failed to open file with PATH:\n", path, NULL);
  }
  return f;
}


void
closeFile(FILE *f)
{
  if ((fclose(f)) != 0) {
    errExit(err_File, "closeFile", "Failed to close given FILE*\n", NULL);
  }
  return;
}


void
maxcharCheck(const str s, const int maxchar)
{
  if ((int) strlen(s) >= maxchar) {
    errExit(err_Maxchar, "maxcharCheck", "String length exceeds MAXCHAR\n", NULL);
  }
}



