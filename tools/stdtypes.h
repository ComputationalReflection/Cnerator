#ifndef __STD_TYPES__
#define __STD_TYPES__

#include <stdbool.h>
#include <complex.h>
#if defined(_WIN32) || defined(_WIN64)
#define fcomplex _Fcomplex
#define dcomplex _Dcomplex
#define lcomplex _Lcomplex
#else
#define fcomplex float _Complex
#define dcomplex double _Complex
#define lcomplex long double _Complex 
#endif

#endif