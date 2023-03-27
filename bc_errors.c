#include "bc_errors.h"

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

static const char *ERROR_T_STR[] = {
  "err_Error",
  "err_File",
  "err_Malloc",
  "err_Maxchar",
  "err_UnknownArg",
  "err_WrongReturn",
  "err_ZeroDivision"
};


void
errExit(const ErrT err_t, const char *f_name, ...)
{
  if (err_t < err_Error || err_t > MAX_ERR_CODE) {
    fprintf(stderr,
	    "[ERR] Error raised in function '%s'\n",
	    f_name);
  } else {
    fprintf(stderr,
	    "[ERR] %s raised in function: '%s'\n",
	    ERROR_T_STR[err_t - 1], // -1 because first ErrT is 1, not 0
	    f_name);
  }

  va_list args;
  char *arg;
  va_start(args, f_name);
  while ((arg = va_arg(args, char*)) != NULL) {
    fprintf(stderr, "%s", arg);
  }
  va_end(args);
  fprintf(stderr, "\n[EXIT %d]\n", err_t);
  exit(err_t);
}
