Better C
--------

This repo contains some utilities I use often in my C projects:


### bc_types.h

Aliases for common types.

Must be included with `#define BC_TYPES_IMPLEMENTATION`
(single header)


### bc_errors.h

Variadic function `errExit`; allows to exit the program and
print relevant backtrace message in a single func call.

Contains other functions that encapsulate a call to
`errExit` for some frequent error checks: `errMaxchar`, `errMalloc`, etc.


### bc_utils.h

`openFile` and `closeFile` are encapsulations of `fopen` and
`fclose` with included error checks.


