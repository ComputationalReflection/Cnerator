/*
 * Based on: https://en.wikipedia.org/wiki/C_data_types
 */

#include <stdio.h>
#include "stdtypes.h"


int main(void)
{
    /*
     * _Bool - C99
     */
    printf("sizeof(_Bool) == %lu\n", sizeof(_Bool));
    // printf("sizeof(unsigned _Bool) == %lu\n", sizeof(unsigned _Bool));
    // printf("sizeof(signed _Bool) == %lu\n", sizeof(signed _Bool));

    // printf("sizeof(short _Bool) == %lu\n", sizeof(short _Bool));
    // printf("sizeof(unsigned short _Bool) == %lu\n", sizeof(unsigned short _Bool));
    // printf("sizeof(signed short _Bool) == %lu\n", sizeof(signed short _Bool));

    // printf("sizeof(long _Bool) == %lu\n", sizeof(long _Bool));
    // printf("sizeof(unsigned long _Bool) == %lu\n", sizeof(unsigned long _Bool));
    // printf("sizeof(signed long _Bool) == %lu\n", sizeof(signed long _Bool));

    /*
     * char
     */
    printf("sizeof(char) == %lu\n", sizeof(char));
    printf("sizeof(unsigned char) == %lu\n", sizeof(unsigned char));
    printf("sizeof(signed char) == %lu\n", sizeof(signed char));

    // printf("sizeof(short char) == %lu\n", sizeof(short char));
    // printf("sizeof(unsigned short char) == %lu\n", sizeof(unsigned short char));
    // printf("sizeof(signed short char) == %lu\n", sizeof(signed short char));

    // printf("sizeof(long char) == %lu\n", sizeof(long char));
    // printf("sizeof(unsigned long char) == %lu\n", sizeof(unsigned long char));
    // printf("sizeof(signed long char) == %lu\n", sizeof(signed long char));

    /*
     * int
     */
    printf("sizeof(int) == %lu\n", sizeof(int));
    printf("sizeof(unsigned int) == %lu\n", sizeof(unsigned int));
    printf("sizeof(signed int) == %lu\n", sizeof(signed int));

    printf("sizeof(short int) == %lu\n", sizeof(short int));
    printf("sizeof(unsigned short int) == %lu\n", sizeof(unsigned short int));
    printf("sizeof(signed short int) == %lu\n", sizeof(signed short int));

    printf("sizeof(long int) == %lu\n", sizeof(long int));
    printf("sizeof(unsigned long int) == %lu\n", sizeof(unsigned long int));
    printf("sizeof(signed long int) == %lu\n", sizeof(signed long int));

    /*
     * int - C99
     */
    printf("sizeof(long long int) == %lu\n", sizeof(long long int));
    printf("sizeof(unsigned long long int) == %lu\n", sizeof(unsigned long long int));
    printf("sizeof(signed long long int) == %lu\n", sizeof(signed long long int));

    /*
     * float
     */
    printf("sizeof(float) == %lu\n", sizeof(float));
    // printf("sizeof(unsigned float) == %lu\n", sizeof(unsigned float));
    // printf("sizeof(signed float) == %lu\n", sizeof(signed float));

    // printf("sizeof(short float) == %lu\n", sizeof(short float));
    // printf("sizeof(unsigned short float) == %lu\n", sizeof(unsigned short float));
    // printf("sizeof(signed short float) == %lu\n", sizeof(signed short float));

    // printf("sizeof(long float) == %lu\n", sizeof(long float));
    // printf("sizeof(unsigned long float) == %lu\n", sizeof(unsigned long float));
    // printf("sizeof(signed long float) == %lu\n", sizeof(signed long float));

    /*
     * float _Complex - C99
     */
    printf("sizeof(fcomplex) == %lu\n", sizeof(fcomplex));
    // printf("sizeof(unsigned fcomplex) == %lu\n", sizeof(unsigned fcomplex));
    // printf("sizeof(signed fcomplex) == %lu\n", sizeof(signed fcomplex));

    // printf("sizeof(short fcomplex) == %lu\n", sizeof(short fcomplex));
    // printf("sizeof(unsigned short fcomplex) == %lu\n", sizeof(unsigned short fcomplex));
    // printf("sizeof(signed short fcomplex) == %lu\n", sizeof(signed short fcomplex));

    // printf("sizeof(long fcomplex) == %lu\n", sizeof(long fcomplex));
    // printf("sizeof(unsigned long fcomplex) == %lu\n", sizeof(unsigned long fcomplex));
    // printf("sizeof(signed long fcomplex) == %lu\n", sizeof(signed long fcomplex));

    /*
     * double
     */
    printf("sizeof(double) == %lu\n", sizeof(double));
    // printf("sizeof(unsigned double) == %lu\n", sizeof(unsigned double));
    // printf("sizeof(signed double) == %lu\n", sizeof(signed double));

    // printf("sizeof(short double) == %lu\n", sizeof(short double));
    // printf("sizeof(unsigned short double) == %lu\n", sizeof(unsigned short double));
    // printf("sizeof(signed short double) == %lu\n", sizeof(signed short double));

    printf("sizeof(long double) == %lu\n", sizeof(long double));
    // printf("sizeof(unsigned long double) == %lu\n", sizeof(unsigned long double));
    // printf("sizeof(signed long double) == %lu\n", sizeof(signed long double));

    /*
     * double _Complex - C99
     */
    printf("sizeof(dcomplex) == %lu\n", sizeof(dcomplex));
    // printf("sizeof(unsigned dcomplex) == %lu\n", sizeof(unsigned dcomplex));
    // printf("sizeof(signed dcomplex) == %lu\n", sizeof(signed dcomplex));

    // printf("sizeof(short dcomplex) == %lu\n", sizeof(short dcomplex));
    // printf("sizeof(unsigned short dcomplex) == %lu\n", sizeof(unsigned short dcomplex));
    // printf("sizeof(signed short dcomplex) == %lu\n", sizeof(signed short dcomplex));

    printf("sizeof(lcomplex) == %lu\n", sizeof(lcomplex));
    // printf("sizeof(unsigned lcomplex) == %lu\n", sizeof(unsigned lcomplex));
    // printf("sizeof(signed lcomplex) == %lu\n", sizeof(signed lcomplex));

    /*
     * pointer
     */
    printf("sizeof(void *) == %lu\n", sizeof(void *));
    
    return 0;
}