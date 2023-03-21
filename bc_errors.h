#ifndef CB_ERRORS_H_
#define CB_ERRORS_H_


typedef enum ErrType {
  err_FileHandling, // a
  err_Malloc,       // b
  err_Maxchar,      // c
  err_Undefined,    // d
  err_UnknownArg,   // e
  err_WrongReturn,  // f
  err_ZeroDivision, // g
} ErrT;
#define MAX_ERR_CODE err_ZeroDivision


void
errExit(const ErrT err_t, const char *f_name, ...);


#endif // CB_ERRORS_H_
