#include "cb_errors.h"

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

// This array must stay alphabetically sorted
static const char *ERROR_T_STR[] = {
  "err_File",         // a
  "err_Malloc",       // b
  "err_Maxchar",      // c
  "err_Undefined",    // d
  "err_UnknownArg",   // e
  "err_WrongReturn",  // f
  "err_ZeroDivision", // g
};


void
errExit(const ErrT err_t, const char *f_name, ...)
{
  /*
    Variadic function
    USAGE:
    int e = errno;
    errExit(_err_Malloc,    // ERR_T
            "main",         // F_NAME last named arg
            strerr(e),      // variadic arg
            "extra stuff",  // variadic arg
	    NULL            // variadic stop marker
    );
  */
  if (err_t > MAX_ERR_CODE) {
    fprintf(stderr,
	    "  [ERR] Error raised in function: %s()\n",
	    f_name);
  } else {
    fprintf(stderr,
	    "  [ERR] %s raised in function: %s()\n",
	    ERROR_T_STR[err_t],
	    f_name);
  }

  va_list args;
  char *arg;
  va_start(args, f_name);
  while ((arg = va_arg(args, char*)) != NULL) {
    fprintf(stderr, "  %s\n", arg);
  }
  va_end(args);
  fprintf(stderr, "  [EXIT %d] :(\n", err_t);
  exit(err_t);
}
