#ifndef BC_ERRORS_H_
#define BC_ERRORS_H_


typedef enum ErrType {
  err_Error        = 1, // same as stdlib: EXIT_FAILURE
  err_File         = 2,
  err_Malloc       = 3,
  err_Maxchar      = 4,
  err_UnknownArg   = 5,
  err_WrongReturn  = 6,
  err_ZeroDivision = 7
} ErrT;
#define MAX_ERR_CODE err_ZeroDivision


void
errExit(const ErrT err_t, const char *f_name, ...);


#endif // BC_ERRORS_H_
