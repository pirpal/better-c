#ifndef CUBE_TYPES_H_
#define CUBE_TYPES_H_

#include <stdint.h>



//      C         CUBE
typedef char*     str;
typedef int8_t     i8;
typedef int16_t   i16;
typedef int32_t   i32;
typedef int64_t   i64;
typedef uint8_t   ui8;
typedef uint16_t ui16;
typedef uint32_t ui32;
typedef uint64_t ui64;
typedef float     f32;
typedef double    f64;

#define _BIT  1
#define _BYTE 8

typedef enum _bitCapacity {
  _bitCap8  =  8,
  _bitCap16 = 16,
  _bitCap32 = 32,
  _bitCap64 = 64
} _bitCap;

typedef enum _byteCapacity {
  _byteCap1 = 1,
  _byteCap2 = 2,
  _byteCap4 = 3,
  _byteCap8 = 4
} _byteCap;

typedef enum CubeProperty {
  //              _num char _wchar litt_str C_arr Tree
  _prop_Numeral,
  _prop_Print,
  _prop_Sort,
  _prop_Compare,
} _cbProp;

#endif // CUBE_TYPES_H_
