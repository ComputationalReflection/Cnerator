/*
 * Based on: https://en.wikipedia.org/wiki/C_data_types
 */

#include <stdio.h>
#include "stdtypes.h"



int main(void)
{
    _Bool b = true;
    char c = 'A';
    unsigned char uc = 'B';
    signed char sc = 'C';
    int i = 1;
    unsigned int ui = 2;
    signed int si = 3;
    short int Si = 4;
    unsigned short int uSi = 5;
    signed short int sSi = 6;
    long int Li = 7;
    unsigned long int uLi = 8;
    signed long int sLi = 9;
    long long int LLi = 7;
    unsigned long long int uLLi = 8;
    signed long long int sLLi = 9;
    float f = 0.1f;
    double d = 0.2;
    long double Ld = 0.3;
    
    // void * pv = NULL;
    char * p_c = (char *) 0;

    /***************************************************************************
     * Pointer operations
     ***/
    
    /*
    * ADD
    */
    
    p_c = p_c + b;
    p_c = b + p_c;
    p_c = p_c + c;
    p_c = c + p_c;
    p_c = p_c + uc;
    p_c = uc + p_c;
    p_c = p_c + sc;
    p_c = sc + p_c;
    p_c = p_c + i;
    p_c = i + p_c;
    p_c = p_c + ui;
    p_c = ui + p_c;
    p_c = p_c + si;
    p_c = si + p_c;
    p_c = p_c + Si;
    p_c = Si + p_c;
    p_c = p_c + uSi;
    p_c = uSi + p_c;
    p_c = p_c + sSi;
    p_c = sSi + p_c;
    p_c = p_c + Li;
    p_c = Li + p_c;
    p_c = p_c + uLi;
    p_c = uLi + p_c;
    p_c = p_c + sLi;
    p_c = sLi + p_c;
    p_c = p_c + LLi;
    p_c = LLi + p_c;
    p_c = p_c + uLLi;
    p_c = uLLi + p_c;
    p_c = p_c + sLLi;
    p_c = sLLi + p_c;
    // p_c = p_c + f;
    // p_c = f + p_c;
    // p_c = p_c + d;
    // p_c = d + p_c;
    // p_c = p_c + Ld;
    // p_c = Ld + p_c;
    
    // p_c = p_c + p_c;
    
    /*
    * SUB
    */
    
    p_c = p_c - b;
    // p_c = b - p_c;
    p_c = p_c - c;
    // p_c = c - p_c;
    p_c = p_c - uc;
    // p_c = uc - p_c;
    p_c = p_c - sc;
    // p_c = sc - p_c;
    p_c = p_c - i;
    // p_c = i - p_c;
    p_c = p_c - ui;
    // p_c = ui - p_c;
    p_c = p_c - si;
    // p_c = si - p_c;
    p_c = p_c - Si;
    // p_c = Si - p_c;
    p_c = p_c - uSi;
    // p_c = uSi - p_c;
    p_c = p_c - sSi;
    // p_c = sSi - p_c;
    p_c = p_c - Li;
    // p_c = Li - p_c;
    p_c = p_c - uLi;
    // p_c = uLi - p_c;
    p_c = p_c - sLi;
    // p_c = sLi - p_c;
    p_c = p_c - LLi;
    // p_c = LLi - p_c;
    p_c = p_c - uLLi;
    // p_c = uLLi - p_c;
    p_c = p_c - sLLi;
    // p_c = sLLi - p_c;
    // p_c = p_c - f;
    // p_c = f - p_c;
    // p_c = p_c - d;
    // p_c = d - p_c;
    // p_c = p_c - Ld;
    // p_c = Ld - p_c;
    
    i = p_c - p_c;
    
    /*
    * Prefix INC
    */
    
    p_c = ++ p_c;
    
    /*
    * Prefix DEC
    */
    
    p_c = -- p_c;
    
    /*
    * Postfix INC
    */
    
    p_c = p_c ++;
    
    /*
    * Postfix DEC
    */
    
    p_c = p_c ++;
    
    /*
    * EQ
    */
    
    i = p_c == p_c;
    
    /*
    * NE
    */
    
    i = p_c != p_c;
    
    /*
    * GT
    */
    
    i = p_c > p_c;
    
    /*
    * LT
    */
    
    i = p_c < p_c;
    
    /*
    * GE
    */
    
    i = p_c >= p_c;
    
    /*
    * LE
    */
    
    i = p_c <= p_c;

    /***************************************************************************
     * Arithmetic operations
     ***/

    /*
     * ADD
     */

    /* _Bool [int standard] */
    i = b + b;
    i = b + c;
    i = b + uc;
    i = b + sc;
    i = b + i;
    ui = b + ui;
    i = b + si;
    i = b + Si;
    i = b + uSi;
    i = b + sSi;
    Li = b + Li;
    uLi = b + uLi;
    Li = b + sLi;
    LLi = b + LLi;
    uLLi = b + uLLi;
    LLi = b + sLLi;
    f = b + f;
    d = b + d;
    Ld = b + Ld;

    /* char [int standard] */
    i = c + b;
    i = c + c;
    i = c + uc;
    i = c + sc;
    i = c + i;
    ui = c + ui;
    i = c + si;
    i = c + Si;
    i = c + uSi;
    i = c + sSi;
    Li = c + Li;
    uLi = c + uLi;
    Li = c + sLi;
    LLi = c + LLi;
    uLLi = c + uLLi;
    LLi = c + sLLi;
    f = c + f;
    d = c + d;
    Ld = c + Ld;

    /* unsigned char [int standard] */
    i = uc + b;
    i = uc + c;
    i = uc + uc;
    i = uc + sc;
    i = uc + i;
    ui = uc + ui;
    i = uc + si;
    i = uc + Si;
    i = uc + uSi;
    i = uc + sSi;
    Li = uc + Li;
    uLi = uc + uLi;
    Li = uc + sLi;
    LLi = uc + LLi;
    uLLi = uc + uLLi;
    LLi = uc + sLLi;
    f = uc + f;
    d = uc + d;
    Ld = uc + Ld;

    /* signed char [int standard] */
    i = sc + b;
    i = sc + c;
    i = sc + uc;
    i = sc + sc;
    i = sc + i;
    ui = sc + ui;
    i = sc + si;
    i = sc + Si;
    i = sc + uSi;
    i = sc + sSi;
    Li = sc + Li;
    uLi = sc + uLi;
    Li = sc + sLi;
    LLi = sc + LLi;
    uLLi = sc + uLLi;
    LLi = sc + sLLi;
    f = sc + f;
    d = sc + d;
    Ld = sc + Ld;

    /* int [int standard] */
    i = i + b;
    i = i + c;
    i = i + uc;
    i = i + sc;
    i = i + i;
    ui = i + ui;
    i = i + si;
    i = i + Si;
    i = i + uSi;
    i = i + sSi;
    Li = i + Li;
    uLi = i + uLi;
    Li = i + sLi;
    LLi = i + LLi;
    uLLi = i + uLLi;
    LLi = i + sLLi;
    f = i + f;
    d = i + d;
    Ld = i + Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    ui = ui + b;
    ui = ui + c;
    ui = ui + uc;
    ui = ui + sc;
    ui = ui + i;
    ui = ui + ui;
    ui = ui + si;
    ui = ui + Si;
    ui = ui + uSi;
    ui = ui + sSi;
    uLi = ui + Li;
    uLi = ui + uLi;
    uLi = ui + sLi;
    LLi = ui + LLi;
    uLLi = ui + uLLi;
    LLi = ui + sLLi;
    f = ui + f;
    d = ui + d;
    Ld = ui + Ld;

    /* signed int [int standard] */
    i = si + b;
    i = si + c;
    i = si + uc;
    i = si + sc;
    i = si + i;
    ui = si + ui;
    i = si + si;
    i = si + Si;
    i = si + uSi;
    i = si + sSi;
    Li = si + Li;
    uLi = si + uLi;
    Li = si + sLi;
    LLi = si + LLi;
    uLLi = si + uLLi;
    LLi = si + sLLi;
    f = si + f;
    d = si + d;
    Ld = si + Ld;

    /* short int [int standard] */
    i = Si + b;
    i = Si + c;
    i = Si + uc;
    i = Si + sc;
    i = Si + i;
    ui = Si + ui;
    i = Si + si;
    i = Si + Si;
    i = Si + uSi;
    i = Si + sSi;
    Li = Si + Li;
    uLi = Si + uLi;
    Li = Si + sLi;
    LLi = Si + LLi;
    uLLi = Si + uLLi;
    LLi = Si + sLLi;
    f = Si + f;
    d = Si + d;
    Ld = Si + Ld;

    /* unsigned short int [int standard] */
    i = uSi + b;
    i = uSi + c;
    i = uSi + uc;
    i = uSi + sc;
    i = uSi + i;
    ui = uSi + ui;
    i = uSi + si;
    i = uSi + Si;
    i = uSi + uSi;
    i = uSi + sSi;
    Li = uSi + Li;
    uLi = uSi + uLi;
    Li = uSi + sLi;
    LLi = uSi + LLi;
    uLLi = uSi + uLLi;
    LLi = uSi + sLLi;
    f = uSi + f;
    d = uSi + d;
    Ld = uSi + Ld;

    /* signed short int [int standard] */
    i = sSi + b;
    i = sSi + c;
    i = sSi + uc;
    i = sSi + sc;
    i = sSi + i;
    ui = sSi + ui;
    i = sSi + si;
    i = sSi + Si;
    i = sSi + uSi;
    i = sSi + sSi;
    Li = sSi + Li;
    uLi = sSi + uLi;
    Li = sSi + sLi;
    LLi = sSi + LLi;
    uLLi = sSi + uLLi;
    LLi = sSi + sLLi;
    f = sSi + f;
    d = sSi + d;
    Ld = sSi + Ld;

    /* long int [long int standard] */
    Li = Li + b;
    Li = Li + c;
    Li = Li + uc;
    Li = Li + sc;
    Li = Li + i;
    uLi = Li + ui;
    Li = Li + si;
    Li = Li + Si;
    Li = Li + uSi;
    Li = Li + sSi;
    Li = Li + Li;
    uLi = Li + uLi;
    Li = Li + sLi;
    LLi = Li + LLi;
    uLLi = Li + uLLi;
    LLi = Li + sLLi;
    f = Li + f;
    d = Li + d;
    Ld = Li + Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    uLi = uLi + b;
    uLi = uLi + c;
    uLi = uLi + uc;
    uLi = uLi + sc;
    uLi = uLi + i;
    uLi = uLi + ui;
    uLi = uLi + si;
    uLi = uLi + Si;
    uLi = uLi + uSi;
    uLi = uLi + sSi;
    uLi = uLi + Li;
    uLi = uLi + uLi;
    uLi = uLi + sLi;
    LLi = uLi + LLi;
    uLLi = uLi + uLLi;
    LLi = uLi + sLLi;
    f = uLi + f;
    d = uLi + d;
    Ld = uLi + Ld;

    /* signed long int [long int standard] */
    Li = sLi + b;
    Li = sLi + c;
    Li = sLi + uc;
    Li = sLi + sc;
    Li = sLi + i;
    uLi = sLi + ui;
    Li = sLi + si;
    Li = sLi + Si;
    Li = sLi + uSi;
    Li = sLi + sSi;
    Li = sLi + Li;
    uLi = sLi + uLi;
    Li = sLi + sLi;
    LLi = sLi + LLi;
    uLLi = sLi + uLLi;
    LLi = sLi + sLLi;
    f = sLi + f;
    d = sLi + d;
    Ld = sLi + Ld;

    /* long long int [long long int standard] */
    LLi = LLi + b;
    LLi = LLi + c;
    LLi = LLi + uc;
    LLi = LLi + sc;
    LLi = LLi + i;
    LLi = LLi + ui;
    LLi = LLi + si;
    LLi = LLi + Si;
    LLi = LLi + uSi;
    LLi = LLi + sSi;
    LLi = LLi + Li;
    LLi = LLi + uLi;
    LLi = LLi + sLi;
    LLi = LLi + LLi;
    uLLi = LLi + uLLi;
    LLi = LLi + sLLi;
    f = LLi + f;
    d = LLi + d;
    Ld = LLi + Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    uLLi = uLLi + b;
    uLLi = uLLi + c;
    uLLi = uLLi + uc;
    uLLi = uLLi + sc;
    uLLi = uLLi + i;
    uLLi = uLLi + ui;
    uLLi = uLLi + si;
    uLLi = uLLi + Si;
    uLLi = uLLi + uSi;
    uLLi = uLLi + sSi;
    uLLi = uLLi + Li;
    uLLi = uLLi + uLi;
    uLLi = uLLi + sLi;
    uLLi = uLLi + LLi;
    uLLi = uLLi + uLLi;
    uLLi = uLLi + sLLi;
    f = uLLi + f;
    d = uLLi + d;
    Ld = uLLi + Ld;

    /* signed long long int [long long int standard] */
    LLi = sLLi + b;
    LLi = sLLi + c;
    LLi = sLLi + uc;
    LLi = sLLi + sc;
    LLi = sLLi + i;
    LLi = sLLi + ui;
    LLi = sLLi + si;
    LLi = sLLi + Si;
    LLi = sLLi + uSi;
    LLi = sLLi + sSi;
    LLi = sLLi + Li;
    LLi = sLLi + uLi;
    LLi = sLLi + sLi;
    LLi = sLLi + LLi;
    uLLi = sLLi + uLLi;
    LLi = sLLi + sLLi;
    f = sLLi + f;
    d = sLLi + d;
    Ld = sLLi + Ld;

    /* float */
    f = f + b;
    f = f + c;
    f = f + uc;
    f = f + sc;
    f = f + i;
    f = f + ui;
    f = f + si;
    f = f + Si;
    f = f + uSi;
    f = f + sSi;
    f = f + Li;
    f = f + uLi;
    f = f + sLi;
    f = f + LLi;
    f = f + uLLi;
    f = f + sLLi;
    f = f + f;
    d = f + d;
    Ld = f + Ld;

    /* double */
    d = d + b;
    d = d + c;
    d = d + uc;
    d = d + sc;
    d = d + i;
    d = d + ui;
    d = d + si;
    d = d + Si;
    d = d + uSi;
    d = d + sSi;
    d = d + Li;
    d = d + uLi;
    d = d + sLi;
    d = d + LLi;
    d = d + uLLi;
    d = d + sLLi;
    d = d + f;
    d = d + d;
    Ld = d + Ld;

    /* long double */
    Ld = Ld + b;
    Ld = Ld + c;
    Ld = Ld + uc;
    Ld = Ld + sc;
    Ld = Ld + i;
    Ld = Ld + ui;
    Ld = Ld + si;
    Ld = Ld + Si;
    Ld = Ld + uSi;
    Ld = Ld + sSi;
    Ld = Ld + Li;
    Ld = Ld + uLi;
    Ld = Ld + sLi;
    Ld = Ld + LLi;
    Ld = Ld + uLLi;
    Ld = Ld + sLLi;
    Ld = Ld + f;
    Ld = Ld + d;
    Ld = Ld + Ld;


    /*
     * SUB
     */

    /* _Bool [int standard] */
    i = b - b;
    i = b - c;
    i = b - uc;
    i = b - sc;
    i = b - i;
    ui = b - ui;
    i = b - si;
    i = b - Si;
    i = b - uSi;
    i = b - sSi;
    Li = b - Li;
    uLi = b - uLi;
    Li = b - sLi;
    LLi = b - LLi;
    uLLi = b - uLLi;
    LLi = b - sLLi;
    f = b - f;
    d = b - d;
    Ld = b - Ld;

    /* char [int standard] */
    i = c - b;
    i = c - c;
    i = c - uc;
    i = c - sc;
    i = c - i;
    ui = c - ui;
    i = c - si;
    i = c - Si;
    i = c - uSi;
    i = c - sSi;
    Li = c - Li;
    uLi = c - uLi;
    Li = c - sLi;
    LLi = c - LLi;
    uLLi = c - uLLi;
    LLi = c - sLLi;
    f = c - f;
    d = c - d;
    Ld = c - Ld;

    /* unsigned char [int standard] */
    i = uc - b;
    i = uc - c;
    i = uc - uc;
    i = uc - sc;
    i = uc - i;
    ui = uc - ui;
    i = uc - si;
    i = uc - Si;
    i = uc - uSi;
    i = uc - sSi;
    Li = uc - Li;
    uLi = uc - uLi;
    Li = uc - sLi;
    LLi = uc - LLi;
    uLLi = uc - uLLi;
    LLi = uc - sLLi;
    f = uc - f;
    d = uc - d;
    Ld = uc - Ld;

    /* signed char [int standard] */
    i = sc - b;
    i = sc - c;
    i = sc - uc;
    i = sc - sc;
    i = sc - i;
    ui = sc - ui;
    i = sc - si;
    i = sc - Si;
    i = sc - uSi;
    i = sc - sSi;
    Li = sc - Li;
    uLi = sc - uLi;
    Li = sc - sLi;
    LLi = sc - LLi;
    uLLi = sc - uLLi;
    LLi = sc - sLLi;
    f = sc - f;
    d = sc - d;
    Ld = sc - Ld;

    /* int [int standard] */
    i = i - b;
    i = i - c;
    i = i - uc;
    i = i - sc;
    i = i - i;
    ui = i - ui;
    i = i - si;
    i = i - Si;
    i = i - uSi;
    i = i - sSi;
    Li = i - Li;
    uLi = i - uLi;
    Li = i - sLi;
    LLi = i - LLi;
    uLLi = i - uLLi;
    LLi = i - sLLi;
    f = i - f;
    d = i - d;
    Ld = i - Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    ui = ui - b;
    ui = ui - c;
    ui = ui - uc;
    ui = ui - sc;
    ui = ui - i;
    ui = ui - ui;
    ui = ui - si;
    ui = ui - Si;
    ui = ui - uSi;
    ui = ui - sSi;
    uLi = ui - Li;
    uLi = ui - uLi;
    uLi = ui - sLi;
    LLi = ui - LLi;
    uLLi = ui - uLLi;
    LLi = ui - sLLi;
    f = ui - f;
    d = ui - d;
    Ld = ui - Ld;

    /* signed int [int standard] */
    i = si - b;
    i = si - c;
    i = si - uc;
    i = si - sc;
    i = si - i;
    ui = si - ui;
    i = si - si;
    i = si - Si;
    i = si - uSi;
    i = si - sSi;
    Li = si - Li;
    uLi = si - uLi;
    Li = si - sLi;
    LLi = si - LLi;
    uLLi = si - uLLi;
    LLi = si - sLLi;
    f = si - f;
    d = si - d;
    Ld = si - Ld;

    /* short int [int standard] */
    i = Si - b;
    i = Si - c;
    i = Si - uc;
    i = Si - sc;
    i = Si - i;
    ui = Si - ui;
    i = Si - si;
    i = Si - Si;
    i = Si - uSi;
    i = Si - sSi;
    Li = Si - Li;
    uLi = Si - uLi;
    Li = Si - sLi;
    LLi = Si - LLi;
    uLLi = Si - uLLi;
    LLi = Si - sLLi;
    f = Si - f;
    d = Si - d;
    Ld = Si - Ld;

    /* unsigned short int [int standard] */
    i = uSi - b;
    i = uSi - c;
    i = uSi - uc;
    i = uSi - sc;
    i = uSi - i;
    ui = uSi - ui;
    i = uSi - si;
    i = uSi - Si;
    i = uSi - uSi;
    i = uSi - sSi;
    Li = uSi - Li;
    uLi = uSi - uLi;
    Li = uSi - sLi;
    LLi = uSi - LLi;
    uLLi = uSi - uLLi;
    LLi = uSi - sLLi;
    f = uSi - f;
    d = uSi - d;
    Ld = uSi - Ld;

    /* signed short int [int standard] */
    i = sSi - b;
    i = sSi - c;
    i = sSi - uc;
    i = sSi - sc;
    i = sSi - i;
    ui = sSi - ui;
    i = sSi - si;
    i = sSi - Si;
    i = sSi - uSi;
    i = sSi - sSi;
    Li = sSi - Li;
    uLi = sSi - uLi;
    Li = sSi - sLi;
    LLi = sSi - LLi;
    uLLi = sSi - uLLi;
    LLi = sSi - sLLi;
    f = sSi - f;
    d = sSi - d;
    Ld = sSi - Ld;

    /* long int [long int standard] */
    Li = Li - b;
    Li = Li - c;
    Li = Li - uc;
    Li = Li - sc;
    Li = Li - i;
    uLi = Li - ui;
    Li = Li - si;
    Li = Li - Si;
    Li = Li - uSi;
    Li = Li - sSi;
    Li = Li - Li;
    uLi = Li - uLi;
    Li = Li - sLi;
    LLi = Li - LLi;
    uLLi = Li - uLLi;
    LLi = Li - sLLi;
    f = Li - f;
    d = Li - d;
    Ld = Li - Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    uLi = uLi - b;
    uLi = uLi - c;
    uLi = uLi - uc;
    uLi = uLi - sc;
    uLi = uLi - i;
    uLi = uLi - ui;
    uLi = uLi - si;
    uLi = uLi - Si;
    uLi = uLi - uSi;
    uLi = uLi - sSi;
    uLi = uLi - Li;
    uLi = uLi - uLi;
    uLi = uLi - sLi;
    LLi = uLi - LLi;
    uLLi = uLi - uLLi;
    LLi = uLi - sLLi;
    f = uLi - f;
    d = uLi - d;
    Ld = uLi - Ld;

    /* signed long int [long int standard] */
    Li = sLi - b;
    Li = sLi - c;
    Li = sLi - uc;
    Li = sLi - sc;
    Li = sLi - i;
    uLi = sLi - ui;
    Li = sLi - si;
    Li = sLi - Si;
    Li = sLi - uSi;
    Li = sLi - sSi;
    Li = sLi - Li;
    uLi = sLi - uLi;
    Li = sLi - sLi;
    LLi = sLi - LLi;
    uLLi = sLi - uLLi;
    LLi = sLi - sLLi;
    f = sLi - f;
    d = sLi - d;
    Ld = sLi - Ld;

    /* long long int [long long int standard] */
    LLi = LLi - b;
    LLi = LLi - c;
    LLi = LLi - uc;
    LLi = LLi - sc;
    LLi = LLi - i;
    LLi = LLi - ui;
    LLi = LLi - si;
    LLi = LLi - Si;
    LLi = LLi - uSi;
    LLi = LLi - sSi;
    LLi = LLi - Li;
    LLi = LLi - uLi;
    LLi = LLi - sLi;
    LLi = LLi - LLi;
    uLLi = LLi - uLLi;
    LLi = LLi - sLLi;
    f = LLi - f;
    d = LLi - d;
    Ld = LLi - Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    uLLi = uLLi - b;
    uLLi = uLLi - c;
    uLLi = uLLi - uc;
    uLLi = uLLi - sc;
    uLLi = uLLi - i;
    uLLi = uLLi - ui;
    uLLi = uLLi - si;
    uLLi = uLLi - Si;
    uLLi = uLLi - uSi;
    uLLi = uLLi - sSi;
    uLLi = uLLi - Li;
    uLLi = uLLi - uLi;
    uLLi = uLLi - sLi;
    uLLi = uLLi - LLi;
    uLLi = uLLi - uLLi;
    uLLi = uLLi - sLLi;
    f = uLLi - f;
    d = uLLi - d;
    Ld = uLLi - Ld;

    /* signed long long int [long long int standard] */
    LLi = sLLi - b;
    LLi = sLLi - c;
    LLi = sLLi - uc;
    LLi = sLLi - sc;
    LLi = sLLi - i;
    LLi = sLLi - ui;
    LLi = sLLi - si;
    LLi = sLLi - Si;
    LLi = sLLi - uSi;
    LLi = sLLi - sSi;
    LLi = sLLi - Li;
    LLi = sLLi - uLi;
    LLi = sLLi - sLi;
    LLi = sLLi - LLi;
    uLLi = sLLi - uLLi;
    LLi = sLLi - sLLi;
    f = sLLi - f;
    d = sLLi - d;
    Ld = sLLi - Ld;

    /* float */
    f = f - b;
    f = f - c;
    f = f - uc;
    f = f - sc;
    f = f - i;
    f = f - ui;
    f = f - si;
    f = f - Si;
    f = f - uSi;
    f = f - sSi;
    f = f - Li;
    f = f - uLi;
    f = f - sLi;
    f = f - LLi;
    f = f - uLLi;
    f = f - sLLi;
    f = f - f;
    d = f - d;
    Ld = f - Ld;

    /* double */
    d = d - b;
    d = d - c;
    d = d - uc;
    d = d - sc;
    d = d - i;
    d = d - ui;
    d = d - si;
    d = d - Si;
    d = d - uSi;
    d = d - sSi;
    d = d - Li;
    d = d - uLi;
    d = d - sLi;
    d = d - LLi;
    d = d - uLLi;
    d = d - sLLi;
    d = d - f;
    d = d - d;
    Ld = d - Ld;

    /* long double */
    Ld = Ld - b;
    Ld = Ld - c;
    Ld = Ld - uc;
    Ld = Ld - sc;
    Ld = Ld - i;
    Ld = Ld - ui;
    Ld = Ld - si;
    Ld = Ld - Si;
    Ld = Ld - uSi;
    Ld = Ld - sSi;
    Ld = Ld - Li;
    Ld = Ld - uLi;
    Ld = Ld - sLi;
    Ld = Ld - LLi;
    Ld = Ld - uLLi;
    Ld = Ld - sLLi;
    Ld = Ld - f;
    Ld = Ld - d;
    Ld = Ld - Ld;


    /*
     * MUL
     */

    /* _Bool [int standard] */
    i = b * b;
    i = b * c;
    i = b * uc;
    i = b * sc;
    i = b * i;
    ui = b * ui;
    i = b * si;
    i = b * Si;
    i = b * uSi;
    i = b * sSi;
    Li = b * Li;
    uLi = b * uLi;
    Li = b * sLi;
    LLi = b * LLi;
    uLLi = b * uLLi;
    LLi = b * sLLi;
    f = b * f;
    d = b * d;
    Ld = b * Ld;

    /* char [int standard] */
    i = c * b;
    i = c * c;
    i = c * uc;
    i = c * sc;
    i = c * i;
    ui = c * ui;
    i = c * si;
    i = c * Si;
    i = c * uSi;
    i = c * sSi;
    Li = c * Li;
    uLi = c * uLi;
    Li = c * sLi;
    LLi = c * LLi;
    uLLi = c * uLLi;
    LLi = c * sLLi;
    f = c * f;
    d = c * d;
    Ld = c * Ld;

    /* unsigned char [int standard] */
    i = uc * b;
    i = uc * c;
    i = uc * uc;
    i = uc * sc;
    i = uc * i;
    ui = uc * ui;
    i = uc * si;
    i = uc * Si;
    i = uc * uSi;
    i = uc * sSi;
    Li = uc * Li;
    uLi = uc * uLi;
    Li = uc * sLi;
    LLi = uc * LLi;
    uLLi = uc * uLLi;
    LLi = uc * sLLi;
    f = uc * f;
    d = uc * d;
    Ld = uc * Ld;

    /* signed char [int standard] */
    i = sc * b;
    i = sc * c;
    i = sc * uc;
    i = sc * sc;
    i = sc * i;
    ui = sc * ui;
    i = sc * si;
    i = sc * Si;
    i = sc * uSi;
    i = sc * sSi;
    Li = sc * Li;
    uLi = sc * uLi;
    Li = sc * sLi;
    LLi = sc * LLi;
    uLLi = sc * uLLi;
    LLi = sc * sLLi;
    f = sc * f;
    d = sc * d;
    Ld = sc * Ld;

    /* int [int standard] */
    i = i * b;
    i = i * c;
    i = i * uc;
    i = i * sc;
    i = i * i;
    ui = i * ui;
    i = i * si;
    i = i * Si;
    i = i * uSi;
    i = i * sSi;
    Li = i * Li;
    uLi = i * uLi;
    Li = i * sLi;
    LLi = i * LLi;
    uLLi = i * uLLi;
    LLi = i * sLLi;
    f = i * f;
    d = i * d;
    Ld = i * Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    ui = ui * b;
    ui = ui * c;
    ui = ui * uc;
    ui = ui * sc;
    ui = ui * i;
    ui = ui * ui;
    ui = ui * si;
    ui = ui * Si;
    ui = ui * uSi;
    ui = ui * sSi;
    uLi = ui * Li;
    uLi = ui * uLi;
    uLi = ui * sLi;
    LLi = ui * LLi;
    uLLi = ui * uLLi;
    LLi = ui * sLLi;
    f = ui * f;
    d = ui * d;
    Ld = ui * Ld;

    /* signed int [int standard] */
    i = si * b;
    i = si * c;
    i = si * uc;
    i = si * sc;
    i = si * i;
    ui = si * ui;
    i = si * si;
    i = si * Si;
    i = si * uSi;
    i = si * sSi;
    Li = si * Li;
    uLi = si * uLi;
    Li = si * sLi;
    LLi = si * LLi;
    uLLi = si * uLLi;
    LLi = si * sLLi;
    f = si * f;
    d = si * d;
    Ld = si * Ld;

    /* short int [int standard] */
    i = Si * b;
    i = Si * c;
    i = Si * uc;
    i = Si * sc;
    i = Si * i;
    ui = Si * ui;
    i = Si * si;
    i = Si * Si;
    i = Si * uSi;
    i = Si * sSi;
    Li = Si * Li;
    uLi = Si * uLi;
    Li = Si * sLi;
    LLi = Si * LLi;
    uLLi = Si * uLLi;
    LLi = Si * sLLi;
    f = Si * f;
    d = Si * d;
    Ld = Si * Ld;

    /* unsigned short int [int standard] */
    i = uSi * b;
    i = uSi * c;
    i = uSi * uc;
    i = uSi * sc;
    i = uSi * i;
    ui = uSi * ui;
    i = uSi * si;
    i = uSi * Si;
    i = uSi * uSi;
    i = uSi * sSi;
    Li = uSi * Li;
    uLi = uSi * uLi;
    Li = uSi * sLi;
    LLi = uSi * LLi;
    uLLi = uSi * uLLi;
    LLi = uSi * sLLi;
    f = uSi * f;
    d = uSi * d;
    Ld = uSi * Ld;

    /* signed short int [int standard] */
    i = sSi * b;
    i = sSi * c;
    i = sSi * uc;
    i = sSi * sc;
    i = sSi * i;
    ui = sSi * ui;
    i = sSi * si;
    i = sSi * Si;
    i = sSi * uSi;
    i = sSi * sSi;
    Li = sSi * Li;
    uLi = sSi * uLi;
    Li = sSi * sLi;
    LLi = sSi * LLi;
    uLLi = sSi * uLLi;
    LLi = sSi * sLLi;
    f = sSi * f;
    d = sSi * d;
    Ld = sSi * Ld;

    /* long int [long int standard] */
    Li = Li * b;
    Li = Li * c;
    Li = Li * uc;
    Li = Li * sc;
    Li = Li * i;
    uLi = Li * ui;
    Li = Li * si;
    Li = Li * Si;
    Li = Li * uSi;
    Li = Li * sSi;
    Li = Li * Li;
    uLi = Li * uLi;
    Li = Li * sLi;
    LLi = Li * LLi;
    uLLi = Li * uLLi;
    LLi = Li * sLLi;
    f = Li * f;
    d = Li * d;
    Ld = Li * Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    uLi = uLi * b;
    uLi = uLi * c;
    uLi = uLi * uc;
    uLi = uLi * sc;
    uLi = uLi * i;
    uLi = uLi * ui;
    uLi = uLi * si;
    uLi = uLi * Si;
    uLi = uLi * uSi;
    uLi = uLi * sSi;
    uLi = uLi * Li;
    uLi = uLi * uLi;
    uLi = uLi * sLi;
    LLi = uLi * LLi;
    uLLi = uLi * uLLi;
    LLi = uLi * sLLi;
    f = uLi * f;
    d = uLi * d;
    Ld = uLi * Ld;

    /* signed long int [long int standard] */
    Li = sLi * b;
    Li = sLi * c;
    Li = sLi * uc;
    Li = sLi * sc;
    Li = sLi * i;
    uLi = sLi * ui;
    Li = sLi * si;
    Li = sLi * Si;
    Li = sLi * uSi;
    Li = sLi * sSi;
    Li = sLi * Li;
    uLi = sLi * uLi;
    Li = sLi * sLi;
    LLi = sLi * LLi;
    uLLi = sLi * uLLi;
    LLi = sLi * sLLi;
    f = sLi * f;
    d = sLi * d;
    Ld = sLi * Ld;

    /* long long int [long long int standard] */
    LLi = LLi * b;
    LLi = LLi * c;
    LLi = LLi * uc;
    LLi = LLi * sc;
    LLi = LLi * i;
    LLi = LLi * ui;
    LLi = LLi * si;
    LLi = LLi * Si;
    LLi = LLi * uSi;
    LLi = LLi * sSi;
    LLi = LLi * Li;
    LLi = LLi * uLi;
    LLi = LLi * sLi;
    LLi = LLi * LLi;
    uLLi = LLi * uLLi;
    LLi = LLi * sLLi;
    f = LLi * f;
    d = LLi * d;
    Ld = LLi * Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    uLLi = uLLi * b;
    uLLi = uLLi * c;
    uLLi = uLLi * uc;
    uLLi = uLLi * sc;
    uLLi = uLLi * i;
    uLLi = uLLi * ui;
    uLLi = uLLi * si;
    uLLi = uLLi * Si;
    uLLi = uLLi * uSi;
    uLLi = uLLi * sSi;
    uLLi = uLLi * Li;
    uLLi = uLLi * uLi;
    uLLi = uLLi * sLi;
    uLLi = uLLi * LLi;
    uLLi = uLLi * uLLi;
    uLLi = uLLi * sLLi;
    f = uLLi * f;
    d = uLLi * d;
    Ld = uLLi * Ld;

    /* signed long long int [long long int standard] */
    LLi = sLLi * b;
    LLi = sLLi * c;
    LLi = sLLi * uc;
    LLi = sLLi * sc;
    LLi = sLLi * i;
    LLi = sLLi * ui;
    LLi = sLLi * si;
    LLi = sLLi * Si;
    LLi = sLLi * uSi;
    LLi = sLLi * sSi;
    LLi = sLLi * Li;
    LLi = sLLi * uLi;
    LLi = sLLi * sLi;
    LLi = sLLi * LLi;
    uLLi = sLLi * uLLi;
    LLi = sLLi * sLLi;
    f = sLLi * f;
    d = sLLi * d;
    Ld = sLLi * Ld;

    /* float */
    f = f * b;
    f = f * c;
    f = f * uc;
    f = f * sc;
    f = f * i;
    f = f * ui;
    f = f * si;
    f = f * Si;
    f = f * uSi;
    f = f * sSi;
    f = f * Li;
    f = f * uLi;
    f = f * sLi;
    f = f * LLi;
    f = f * uLLi;
    f = f * sLLi;
    f = f * f;
    d = f * d;
    Ld = f * Ld;

    /* double */
    d = d * b;
    d = d * c;
    d = d * uc;
    d = d * sc;
    d = d * i;
    d = d * ui;
    d = d * si;
    d = d * Si;
    d = d * uSi;
    d = d * sSi;
    d = d * Li;
    d = d * uLi;
    d = d * sLi;
    d = d * LLi;
    d = d * uLLi;
    d = d * sLLi;
    d = d * f;
    d = d * d;
    Ld = d * Ld;

    /* long double */
    Ld = Ld * b;
    Ld = Ld * c;
    Ld = Ld * uc;
    Ld = Ld * sc;
    Ld = Ld * i;
    Ld = Ld * ui;
    Ld = Ld * si;
    Ld = Ld * Si;
    Ld = Ld * uSi;
    Ld = Ld * sSi;
    Ld = Ld * Li;
    Ld = Ld * uLi;
    Ld = Ld * sLi;
    Ld = Ld * LLi;
    Ld = Ld * uLLi;
    Ld = Ld * sLLi;
    Ld = Ld * f;
    Ld = Ld * d;
    Ld = Ld * Ld;


    /*
     * DIV
     */

    /* _Bool [int standard] */
    i = b / b;
    i = b / c;
    i = b / uc;
    i = b / sc;
    i = b / i;
    ui = b / ui;
    i = b / si;
    i = b / Si;
    i = b / uSi;
    i = b / sSi;
    Li = b / Li;
    uLi = b / uLi;
    Li = b / sLi;
    LLi = b / LLi;
    uLLi = b / uLLi;
    LLi = b / sLLi;
    f = b / f;
    d = b / d;
    Ld = b / Ld;

    /* char [int standard] */
    i = c / b;
    i = c / c;
    i = c / uc;
    i = c / sc;
    i = c / i;
    ui = c / ui;
    i = c / si;
    i = c / Si;
    i = c / uSi;
    i = c / sSi;
    Li = c / Li;
    uLi = c / uLi;
    Li = c / sLi;
    LLi = c / LLi;
    uLLi = c / uLLi;
    LLi = c / sLLi;
    f = c / f;
    d = c / d;
    Ld = c / Ld;

    /* unsigned char [int standard] */
    i = uc / b;
    i = uc / c;
    i = uc / uc;
    i = uc / sc;
    i = uc / i;
    ui = uc / ui;
    i = uc / si;
    i = uc / Si;
    i = uc / uSi;
    i = uc / sSi;
    Li = uc / Li;
    uLi = uc / uLi;
    Li = uc / sLi;
    LLi = uc / LLi;
    uLLi = uc / uLLi;
    LLi = uc / sLLi;
    f = uc / f;
    d = uc / d;
    Ld = uc / Ld;

    /* signed char [int standard] */
    i = sc / b;
    i = sc / c;
    i = sc / uc;
    i = sc / sc;
    i = sc / i;
    ui = sc / ui;
    i = sc / si;
    i = sc / Si;
    i = sc / uSi;
    i = sc / sSi;
    Li = sc / Li;
    uLi = sc / uLi;
    Li = sc / sLi;
    LLi = sc / LLi;
    uLLi = sc / uLLi;
    LLi = sc / sLLi;
    f = sc / f;
    d = sc / d;
    Ld = sc / Ld;

    /* int [int standard] */
    i = i / b;
    i = i / c;
    i = i / uc;
    i = i / sc;
    i = i / i;
    ui = i / ui;
    i = i / si;
    i = i / Si;
    i = i / uSi;
    i = i / sSi;
    Li = i / Li;
    uLi = i / uLi;
    Li = i / sLi;
    LLi = i / LLi;
    uLLi = i / uLLi;
    LLi = i / sLLi;
    f = i / f;
    d = i / d;
    Ld = i / Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    ui = ui / b;
    ui = ui / c;
    ui = ui / uc;
    ui = ui / sc;
    ui = ui / i;
    ui = ui / ui;
    ui = ui / si;
    ui = ui / Si;
    ui = ui / uSi;
    ui = ui / sSi;
    uLi = ui / Li;
    uLi = ui / uLi;
    uLi = ui / sLi;
    LLi = ui / LLi;
    uLLi = ui / uLLi;
    LLi = ui / sLLi;
    f = ui / f;
    d = ui / d;
    Ld = ui / Ld;

    /* signed int [int standard] */
    i = si / b;
    i = si / c;
    i = si / uc;
    i = si / sc;
    i = si / i;
    ui = si / ui;
    i = si / si;
    i = si / Si;
    i = si / uSi;
    i = si / sSi;
    Li = si / Li;
    uLi = si / uLi;
    Li = si / sLi;
    LLi = si / LLi;
    uLLi = si / uLLi;
    LLi = si / sLLi;
    f = si / f;
    d = si / d;
    Ld = si / Ld;

    /* short int [int standard] */
    i = Si / b;
    i = Si / c;
    i = Si / uc;
    i = Si / sc;
    i = Si / i;
    ui = Si / ui;
    i = Si / si;
    i = Si / Si;
    i = Si / uSi;
    i = Si / sSi;
    Li = Si / Li;
    uLi = Si / uLi;
    Li = Si / sLi;
    LLi = Si / LLi;
    uLLi = Si / uLLi;
    LLi = Si / sLLi;
    f = Si / f;
    d = Si / d;
    Ld = Si / Ld;

    /* unsigned short int [int standard] */
    i = uSi / b;
    i = uSi / c;
    i = uSi / uc;
    i = uSi / sc;
    i = uSi / i;
    ui = uSi / ui;
    i = uSi / si;
    i = uSi / Si;
    i = uSi / uSi;
    i = uSi / sSi;
    Li = uSi / Li;
    uLi = uSi / uLi;
    Li = uSi / sLi;
    LLi = uSi / LLi;
    uLLi = uSi / uLLi;
    LLi = uSi / sLLi;
    f = uSi / f;
    d = uSi / d;
    Ld = uSi / Ld;

    /* signed short int [int standard] */
    i = sSi / b;
    i = sSi / c;
    i = sSi / uc;
    i = sSi / sc;
    i = sSi / i;
    ui = sSi / ui;
    i = sSi / si;
    i = sSi / Si;
    i = sSi / uSi;
    i = sSi / sSi;
    Li = sSi / Li;
    uLi = sSi / uLi;
    Li = sSi / sLi;
    LLi = sSi / LLi;
    uLLi = sSi / uLLi;
    LLi = sSi / sLLi;
    f = sSi / f;
    d = sSi / d;
    Ld = sSi / Ld;

    /* long int [long int standard] */
    Li = Li / b;
    Li = Li / c;
    Li = Li / uc;
    Li = Li / sc;
    Li = Li / i;
    uLi = Li / ui;
    Li = Li / si;
    Li = Li / Si;
    Li = Li / uSi;
    Li = Li / sSi;
    Li = Li / Li;
    uLi = Li / uLi;
    Li = Li / sLi;
    LLi = Li / LLi;
    uLLi = Li / uLLi;
    LLi = Li / sLLi;
    f = Li / f;
    d = Li / d;
    Ld = Li / Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    uLi = uLi / b;
    uLi = uLi / c;
    uLi = uLi / uc;
    uLi = uLi / sc;
    uLi = uLi / i;
    uLi = uLi / ui;
    uLi = uLi / si;
    uLi = uLi / Si;
    uLi = uLi / uSi;
    uLi = uLi / sSi;
    uLi = uLi / Li;
    uLi = uLi / uLi;
    uLi = uLi / sLi;
    LLi = uLi / LLi;
    uLLi = uLi / uLLi;
    LLi = uLi / sLLi;
    f = uLi / f;
    d = uLi / d;
    Ld = uLi / Ld;

    /* signed long int [long int standard] */
    Li = sLi / b;
    Li = sLi / c;
    Li = sLi / uc;
    Li = sLi / sc;
    Li = sLi / i;
    uLi = sLi / ui;
    Li = sLi / si;
    Li = sLi / Si;
    Li = sLi / uSi;
    Li = sLi / sSi;
    Li = sLi / Li;
    uLi = sLi / uLi;
    Li = sLi / sLi;
    LLi = sLi / LLi;
    uLLi = sLi / uLLi;
    LLi = sLi / sLLi;
    f = sLi / f;
    d = sLi / d;
    Ld = sLi / Ld;

    /* long long int [long long int standard] */
    LLi = LLi / b;
    LLi = LLi / c;
    LLi = LLi / uc;
    LLi = LLi / sc;
    LLi = LLi / i;
    LLi = LLi / ui;
    LLi = LLi / si;
    LLi = LLi / Si;
    LLi = LLi / uSi;
    LLi = LLi / sSi;
    LLi = LLi / Li;
    LLi = LLi / uLi;
    LLi = LLi / sLi;
    LLi = LLi / LLi;
    uLLi = LLi / uLLi;
    LLi = LLi / sLLi;
    f = LLi / f;
    d = LLi / d;
    Ld = LLi / Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    uLLi = uLLi / b;
    uLLi = uLLi / c;
    uLLi = uLLi / uc;
    uLLi = uLLi / sc;
    uLLi = uLLi / i;
    uLLi = uLLi / ui;
    uLLi = uLLi / si;
    uLLi = uLLi / Si;
    uLLi = uLLi / uSi;
    uLLi = uLLi / sSi;
    uLLi = uLLi / Li;
    uLLi = uLLi / uLi;
    uLLi = uLLi / sLi;
    uLLi = uLLi / LLi;
    uLLi = uLLi / uLLi;
    uLLi = uLLi / sLLi;
    f = uLLi / f;
    d = uLLi / d;
    Ld = uLLi / Ld;

    /* signed long long int [long long int standard] */
    LLi = sLLi / b;
    LLi = sLLi / c;
    LLi = sLLi / uc;
    LLi = sLLi / sc;
    LLi = sLLi / i;
    LLi = sLLi / ui;
    LLi = sLLi / si;
    LLi = sLLi / Si;
    LLi = sLLi / uSi;
    LLi = sLLi / sSi;
    LLi = sLLi / Li;
    LLi = sLLi / uLi;
    LLi = sLLi / sLi;
    LLi = sLLi / LLi;
    uLLi = sLLi / uLLi;
    LLi = sLLi / sLLi;
    f = sLLi / f;
    d = sLLi / d;
    Ld = sLLi / Ld;

    /* float */
    f = f / b;
    f = f / c;
    f = f / uc;
    f = f / sc;
    f = f / i;
    f = f / ui;
    f = f / si;
    f = f / Si;
    f = f / uSi;
    f = f / sSi;
    f = f / Li;
    f = f / uLi;
    f = f / sLi;
    f = f / LLi;
    f = f / uLLi;
    f = f / sLLi;
    f = f / f;
    d = f / d;
    Ld = f / Ld;

    /* double */
    d = d / b;
    d = d / c;
    d = d / uc;
    d = d / sc;
    d = d / i;
    d = d / ui;
    d = d / si;
    d = d / Si;
    d = d / uSi;
    d = d / sSi;
    d = d / Li;
    d = d / uLi;
    d = d / sLi;
    d = d / LLi;
    d = d / uLLi;
    d = d / sLLi;
    d = d / f;
    d = d / d;
    Ld = d / Ld;

    /* long double */
    Ld = Ld / b;
    Ld = Ld / c;
    Ld = Ld / uc;
    Ld = Ld / sc;
    Ld = Ld / i;
    Ld = Ld / ui;
    Ld = Ld / si;
    Ld = Ld / Si;
    Ld = Ld / uSi;
    Ld = Ld / sSi;
    Ld = Ld / Li;
    Ld = Ld / uLi;
    Ld = Ld / sLi;
    Ld = Ld / LLi;
    Ld = Ld / uLLi;
    Ld = Ld / sLLi;
    Ld = Ld / f;
    Ld = Ld / d;
    Ld = Ld / Ld;


    /*
     * MOD
     */

    /* _Bool [int standard] */
    i = b % b;
    i = b % c;
    i = b % uc;
    i = b % sc;
    i = b % i;
    ui = b % ui;
    i = b % si;
    i = b % Si;
    i = b % uSi;
    i = b % sSi;
    Li = b % Li;
    uLi = b % uLi;
    Li = b % sLi;
    LLi = b % LLi;
    uLLi = b % uLLi;
    LLi = b % sLLi;
    // f = b % f;
    // d = b % d;
    // Ld = b % Ld;

    /* char [int standard] */
    i = c % b;
    i = c % c;
    i = c % uc;
    i = c % sc;
    i = c % i;
    ui = c % ui;
    i = c % si;
    i = c % Si;
    i = c % uSi;
    i = c % sSi;
    Li = c % Li;
    uLi = c % uLi;
    Li = c % sLi;
    LLi = c % LLi;
    uLLi = c % uLLi;
    LLi = c % sLLi;
    // f = c % f;
    // d = c % d;
    // Ld = c % Ld;

    /* unsigned char [int standard] */
    i = uc % b;
    i = uc % c;
    i = uc % uc;
    i = uc % sc;
    i = uc % i;
    ui = uc % ui;
    i = uc % si;
    i = uc % Si;
    i = uc % uSi;
    i = uc % sSi;
    Li = uc % Li;
    uLi = uc % uLi;
    Li = uc % sLi;
    LLi = uc % LLi;
    uLLi = uc % uLLi;
    LLi = uc % sLLi;
    // f = uc % f;
    // d = uc % d;
    // Ld = uc % Ld;

    /* signed char [int standard] */
    i = sc % b;
    i = sc % c;
    i = sc % uc;
    i = sc % sc;
    i = sc % i;
    ui = sc % ui;
    i = sc % si;
    i = sc % Si;
    i = sc % uSi;
    i = sc % sSi;
    Li = sc % Li;
    uLi = sc % uLi;
    Li = sc % sLi;
    LLi = sc % LLi;
    uLLi = sc % uLLi;
    LLi = sc % sLLi;
    // f = sc % f;
    // d = sc % d;
    // Ld = sc % Ld;

    /* int [int standard] */
    i = i % b;
    i = i % c;
    i = i % uc;
    i = i % sc;
    i = i % i;
    ui = i % ui;
    i = i % si;
    i = i % Si;
    i = i % uSi;
    i = i % sSi;
    Li = i % Li;
    uLi = i % uLi;
    Li = i % sLi;
    LLi = i % LLi;
    uLLi = i % uLLi;
    LLi = i % sLLi;
    // f = i % f;
    // d = i % d;
    // Ld = i % Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    ui = ui % b;
    ui = ui % c;
    ui = ui % uc;
    ui = ui % sc;
    ui = ui % i;
    ui = ui % ui;
    ui = ui % si;
    ui = ui % Si;
    ui = ui % uSi;
    ui = ui % sSi;
    uLi = ui % Li;
    uLi = ui % uLi;
    uLi = ui % sLi;
    LLi = ui % LLi;
    uLLi = ui % uLLi;
    LLi = ui % sLLi;
    // f = ui % f;
    // d = ui % d;
    // Ld = ui % Ld;

    /* signed int [int standard] */
    i = si % b;
    i = si % c;
    i = si % uc;
    i = si % sc;
    i = si % i;
    ui = si % ui;
    i = si % si;
    i = si % Si;
    i = si % uSi;
    i = si % sSi;
    Li = si % Li;
    uLi = si % uLi;
    Li = si % sLi;
    LLi = si % LLi;
    uLLi = si % uLLi;
    LLi = si % sLLi;
    // f = si % f;
    // d = si % d;
    // Ld = si % Ld;

    /* short int [int standard] */
    i = Si % b;
    i = Si % c;
    i = Si % uc;
    i = Si % sc;
    i = Si % i;
    ui = Si % ui;
    i = Si % si;
    i = Si % Si;
    i = Si % uSi;
    i = Si % sSi;
    Li = Si % Li;
    uLi = Si % uLi;
    Li = Si % sLi;
    LLi = Si % LLi;
    uLLi = Si % uLLi;
    LLi = Si % sLLi;
    // f = Si % f;
    // d = Si % d;
    // Ld = Si % Ld;

    /* unsigned short int [int standard] */
    i = uSi % b;
    i = uSi % c;
    i = uSi % uc;
    i = uSi % sc;
    i = uSi % i;
    ui = uSi % ui;
    i = uSi % si;
    i = uSi % Si;
    i = uSi % uSi;
    i = uSi % sSi;
    Li = uSi % Li;
    uLi = uSi % uLi;
    Li = uSi % sLi;
    LLi = uSi % LLi;
    uLLi = uSi % uLLi;
    LLi = uSi % sLLi;
    // f = uSi % f;
    // d = uSi % d;
    // Ld = uSi % Ld;

    /* signed short int [int standard] */
    i = sSi % b;
    i = sSi % c;
    i = sSi % uc;
    i = sSi % sc;
    i = sSi % i;
    ui = sSi % ui;
    i = sSi % si;
    i = sSi % Si;
    i = sSi % uSi;
    i = sSi % sSi;
    Li = sSi % Li;
    uLi = sSi % uLi;
    Li = sSi % sLi;
    LLi = sSi % LLi;
    uLLi = sSi % uLLi;
    LLi = sSi % sLLi;
    // f = sSi % f;
    // d = sSi % d;
    // Ld = sSi % Ld;

    /* long int [long int standard] */
    Li = Li % b;
    Li = Li % c;
    Li = Li % uc;
    Li = Li % sc;
    Li = Li % i;
    uLi = Li % ui;
    Li = Li % si;
    Li = Li % Si;
    Li = Li % uSi;
    Li = Li % sSi;
    Li = Li % Li;
    uLi = Li % uLi;
    Li = Li % sLi;
    LLi = Li % LLi;
    uLLi = Li % uLLi;
    LLi = Li % sLLi;
    // f = Li % f;
    // d = Li % d;
    // Ld = Li % Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    uLi = uLi % b;
    uLi = uLi % c;
    uLi = uLi % uc;
    uLi = uLi % sc;
    uLi = uLi % i;
    uLi = uLi % ui;
    uLi = uLi % si;
    uLi = uLi % Si;
    uLi = uLi % uSi;
    uLi = uLi % sSi;
    uLi = uLi % Li;
    uLi = uLi % uLi;
    uLi = uLi % sLi;
    LLi = uLi % LLi;
    uLLi = uLi % uLLi;
    LLi = uLi % sLLi;
    // f = uLi % f;
    // d = uLi % d;
    // Ld = uLi % Ld;

    /* signed long int [long int standard] */
    Li = sLi % b;
    Li = sLi % c;
    Li = sLi % uc;
    Li = sLi % sc;
    Li = sLi % i;
    uLi = sLi % ui;
    Li = sLi % si;
    Li = sLi % Si;
    Li = sLi % uSi;
    Li = sLi % sSi;
    Li = sLi % Li;
    uLi = sLi % uLi;
    Li = sLi % sLi;
    LLi = sLi % LLi;
    uLLi = sLi % uLLi;
    LLi = sLi % sLLi;
    // f = sLi % f;
    // d = sLi % d;
    // Ld = sLi % Ld;

    /* long long int [long long int standard] */
    LLi = LLi % b;
    LLi = LLi % c;
    LLi = LLi % uc;
    LLi = LLi % sc;
    LLi = LLi % i;
    LLi = LLi % ui;
    LLi = LLi % si;
    LLi = LLi % Si;
    LLi = LLi % uSi;
    LLi = LLi % sSi;
    LLi = LLi % Li;
    LLi = LLi % uLi;
    LLi = LLi % sLi;
    LLi = LLi % LLi;
    uLLi = LLi % uLLi;
    LLi = LLi % sLLi;
    // f = LLi % f;
    // d = LLi % d;
    // Ld = LLi % Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    uLLi = uLLi % b;
    uLLi = uLLi % c;
    uLLi = uLLi % uc;
    uLLi = uLLi % sc;
    uLLi = uLLi % i;
    uLLi = uLLi % ui;
    uLLi = uLLi % si;
    uLLi = uLLi % Si;
    uLLi = uLLi % uSi;
    uLLi = uLLi % sSi;
    uLLi = uLLi % Li;
    uLLi = uLLi % uLi;
    uLLi = uLLi % sLi;
    uLLi = uLLi % LLi;
    uLLi = uLLi % uLLi;
    uLLi = uLLi % sLLi;
    // f = uLLi % f;
    // d = uLLi % d;
    // Ld = uLLi % Ld;

    /* signed long long int [long long int standard] */
    LLi = sLLi % b;
    LLi = sLLi % c;
    LLi = sLLi % uc;
    LLi = sLLi % sc;
    LLi = sLLi % i;
    LLi = sLLi % ui;
    LLi = sLLi % si;
    LLi = sLLi % Si;
    LLi = sLLi % uSi;
    LLi = sLLi % sSi;
    LLi = sLLi % Li;
    LLi = sLLi % uLi;
    LLi = sLLi % sLi;
    LLi = sLLi % LLi;
    uLLi = sLLi % uLLi;
    LLi = sLLi % sLLi;
    // f = sLLi % f;
    // d = sLLi % d;
    // Ld = sLLi % Ld;

    /* float (Error) */
    // f = f % b;
    // f = f % c;
    // f = f % uc;
    // f = f % sc;
    // f = f % i;
    // f = f % ui;
    // f = f % si;
    // f = f % Si;
    // f = f % uSi;
    // f = f % sSi;
    // f = f % Li;
    // f = f % uLi;
    // f = f % sLi;
    // f = f % LLi;
    // f = f % uLLi;
    // f = f % sLLi;
    // f = f % f;
    // d = f % d;
    // Ld = f % Ld;

    /* double (Error) */
    // d = d % b;
    // d = d % c;
    // d = d % uc;
    // d = d % sc;
    // d = d % i;
    // d = d % ui;
    // d = d % si;
    // d = d % Si;
    // d = d % uSi;
    // d = d % sSi;
    // d = d % Li;
    // d = d % uLi;
    // d = d % sLi;
    // d = d % LLi;
    // d = d % uLLi;
    // d = d % sLLi;
    // d = d % f;
    // d = d % d;
    // Ld = d % Ld;

    /* long double (Error) */
    // Ld = Ld % b;
    // Ld = Ld % c;
    // Ld = Ld % uc;
    // Ld = Ld % sc;
    // Ld = Ld % i;
    // Ld = Ld % ui;
    // Ld = Ld % si;
    // Ld = Ld % Si;
    // Ld = Ld % uSi;
    // Ld = Ld % sSi;
    // Ld = Ld % Li;
    // Ld = Ld % uLi;
    // Ld = Ld % sLi;
    // Ld = Ld % LLi;
    // Ld = Ld % uLLi;
    // Ld = Ld % sLLi;
    // Ld = Ld % f;
    // Ld = Ld % d;
    // Ld = Ld % Ld;


    /***************************************************************************
     * Comparison operations
     ***/

    /*
     * EQ
     */

    #pragma warning(push)
    #pragma warning(disable: 4388)
    #pragma warning(disable: 4389)

    /* _Bool [int standard] */
    i = b == b;
    i = b == c;
    i = b == uc;
    i = b == sc;
    i = b == i;
    i = b == ui;
    i = b == si;
    i = b == Si;
    i = b == uSi;
    i = b == sSi;
    i = b == Li;
    i = b == uLi;
    i = b == sLi;
    i = b == LLi;
    i = b == uLLi;
    i = b == sLLi;
    i = b == f;
    i = b == d;
    i = b == Ld;

    /* char [int standard] */
    i = c == b;
    i = c == c;
    i = c == uc;
    i = c == sc;
    i = c == i;
    i = c == ui;
    i = c == si;
    i = c == Si;
    i = c == uSi;
    i = c == sSi;
    i = c == Li;
    i = c == uLi;
    i = c == sLi;
    i = c == LLi;
    i = c == uLLi;
    i = c == sLLi;
    i = c == f;
    i = c == d;
    i = c == Ld;

    /* unsigned char [int standard] */
    i = uc == b;
    i = uc == c;
    i = uc == uc;
    i = uc == sc;
    i = uc == i;
    i = uc == ui;
    i = uc == si;
    i = uc == Si;
    i = uc == uSi;
    i = uc == sSi;
    i = uc == Li;
    i = uc == uLi;
    i = uc == sLi;
    i = uc == LLi;
    i = uc == uLLi;
    i = uc == sLLi;
    i = uc == f;
    i = uc == d;
    i = uc == Ld;

    /* signed char [int standard] */
    i = sc == b;
    i = sc == c;
    i = sc == uc;
    i = sc == sc;
    i = sc == i;
    i = sc == ui;
    i = sc == si;
    i = sc == Si;
    i = sc == uSi;
    i = sc == sSi;
    i = sc == Li;
    i = sc == uLi;
    i = sc == sLi;
    i = sc == LLi;
    i = sc == uLLi;
    i = sc == sLLi;
    i = sc == f;
    i = sc == d;
    i = sc == Ld;

    /* int [int standard] */
    i = i == b;
    i = i == c;
    i = i == uc;
    i = i == sc;
    i = i == i;
    i = i == ui;
    i = i == si;
    i = i == Si;
    i = i == uSi;
    i = i == sSi;
    i = i == Li;
    i = i == uLi;
    i = i == sLi;
    i = i == LLi;
    i = i == uLLi;
    i = i == sLLi;
    i = i == f;
    i = i == d;
    i = i == Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    i = ui == b;
    i = ui == c;
    i = ui == uc;
    i = ui == sc;
    i = ui == i;
    i = ui == ui;
    i = ui == si;
    i = ui == Si;
    i = ui == uSi;
    i = ui == sSi;
    i = ui == Li;
    i = ui == uLi;
    i = ui == sLi;
    i = ui == LLi;
    i = ui == uLLi;
    i = ui == sLLi;
    i = ui == f;
    i = ui == d;
    i = ui == Ld;

    /* signed int [int standard] */
    i = si == b;
    i = si == c;
    i = si == uc;
    i = si == sc;
    i = si == i;
    i = si == ui;
    i = si == si;
    i = si == Si;
    i = si == uSi;
    i = si == sSi;
    i = si == Li;
    i = si == uLi;
    i = si == sLi;
    i = si == LLi;
    i = si == uLLi;
    i = si == sLLi;
    i = si == f;
    i = si == d;
    i = si == Ld;

    /* short int [int standard] */
    i = Si == b;
    i = Si == c;
    i = Si == uc;
    i = Si == sc;
    i = Si == i;
    i = Si == ui;
    i = Si == si;
    i = Si == Si;
    i = Si == uSi;
    i = Si == sSi;
    i = Si == Li;
    i = Si == uLi;
    i = Si == sLi;
    i = Si == LLi;
    i = Si == uLLi;
    i = Si == sLLi;
    i = Si == f;
    i = Si == d;
    i = Si == Ld;

    /* unsigned short int [int standard] */
    i = uSi == b;
    i = uSi == c;
    i = uSi == uc;
    i = uSi == sc;
    i = uSi == i;
    i = uSi == ui;
    i = uSi == si;
    i = uSi == Si;
    i = uSi == uSi;
    i = uSi == sSi;
    i = uSi == Li;
    i = uSi == uLi;
    i = uSi == sLi;
    i = uSi == LLi;
    i = uSi == uLLi;
    i = uSi == sLLi;
    i = uSi == f;
    i = uSi == d;
    i = uSi == Ld;

    /* signed short int [int standard] */
    i = sSi == b;
    i = sSi == c;
    i = sSi == uc;
    i = sSi == sc;
    i = sSi == i;
    i = sSi == ui;
    i = sSi == si;
    i = sSi == Si;
    i = sSi == uSi;
    i = sSi == sSi;
    i = sSi == Li;
    i = sSi == uLi;
    i = sSi == sLi;
    i = sSi == LLi;
    i = sSi == uLLi;
    i = sSi == sLLi;
    i = sSi == f;
    i = sSi == d;
    i = sSi == Ld;

    /* long int [long int standard] */
    i = Li == b;
    i = Li == c;
    i = Li == uc;
    i = Li == sc;
    i = Li == i;
    i = Li == ui;
    i = Li == si;
    i = Li == Si;
    i = Li == uSi;
    i = Li == sSi;
    i = Li == Li;
    i = Li == uLi;
    i = Li == sLi;
    i = Li == LLi;
    i = Li == uLLi;
    i = Li == sLLi;
    i = Li == f;
    i = Li == d;
    i = Li == Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    i = uLi == b;
    i = uLi == c;
    i = uLi == uc;
    i = uLi == sc;
    i = uLi == i;
    i = uLi == ui;
    i = uLi == si;
    i = uLi == Si;
    i = uLi == uSi;
    i = uLi == sSi;
    i = uLi == Li;
    i = uLi == uLi;
    i = uLi == sLi;
    i = uLi == LLi;
    i = uLi == uLLi;
    i = uLi == sLLi;
    i = uLi == f;
    i = uLi == d;
    i = uLi == Ld;

    /* signed long int [long int standard] */
    i = sLi == b;
    i = sLi == c;
    i = sLi == uc;
    i = sLi == sc;
    i = sLi == i;
    i = sLi == ui;
    i = sLi == si;
    i = sLi == Si;
    i = sLi == uSi;
    i = sLi == sSi;
    i = sLi == Li;
    i = sLi == uLi;
    i = sLi == sLi;
    i = sLi == LLi;
    i = sLi == uLLi;
    i = sLi == sLLi;
    i = sLi == f;
    i = sLi == d;
    i = sLi == Ld;

    /* long long int [long long int standard] */
    i = LLi == b;
    i = LLi == c;
    i = LLi == uc;
    i = LLi == sc;
    i = LLi == i;
    i = LLi == ui;
    i = LLi == si;
    i = LLi == Si;
    i = LLi == uSi;
    i = LLi == sSi;
    i = LLi == Li;
    i = LLi == uLi;
    i = LLi == sLi;
    i = LLi == LLi;
    i = LLi == uLLi;
    i = LLi == sLLi;
    i = LLi == f;
    i = LLi == d;
    i = LLi == Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    i = uLLi == b;
    i = uLLi == c;
    i = uLLi == uc;
    i = uLLi == sc;
    i = uLLi == i;
    i = uLLi == ui;
    i = uLLi == si;
    i = uLLi == Si;
    i = uLLi == uSi;
    i = uLLi == sSi;
    i = uLLi == Li;
    i = uLLi == uLi;
    i = uLLi == sLi;
    i = uLLi == LLi;
    i = uLLi == uLLi;
    i = uLLi == sLLi;
    i = uLLi == f;
    i = uLLi == d;
    i = uLLi == Ld;

    /* signed long long int [long long int standard] */
    i = sLLi == b;
    i = sLLi == c;
    i = sLLi == uc;
    i = sLLi == sc;
    i = sLLi == i;
    i = sLLi == ui;
    i = sLLi == si;
    i = sLLi == Si;
    i = sLLi == uSi;
    i = sLLi == sSi;
    i = sLLi == Li;
    i = sLLi == uLi;
    i = sLLi == sLi;
    i = sLLi == LLi;
    i = sLLi == uLLi;
    i = sLLi == sLLi;
    i = sLLi == f;
    i = sLLi == d;
    i = sLLi == Ld;

    /* float */
    i = f == b;
    i = f == c;
    i = f == uc;
    i = f == sc;
    i = f == i;
    i = f == ui;
    i = f == si;
    i = f == Si;
    i = f == uSi;
    i = f == sSi;
    i = f == Li;
    i = f == uLi;
    i = f == sLi;
    i = f == LLi;
    i = f == uLLi;
    i = f == sLLi;
    i = f == f;
    i = f == d;
    i = f == Ld;

    /* double */
    i = d == b;
    i = d == c;
    i = d == uc;
    i = d == sc;
    i = d == i;
    i = d == ui;
    i = d == si;
    i = d == Si;
    i = d == uSi;
    i = d == sSi;
    i = d == Li;
    i = d == uLi;
    i = d == sLi;
    i = d == LLi;
    i = d == uLLi;
    i = d == sLLi;
    i = d == f;
    i = d == d;
    i = d == Ld;

    /* long double */
    i = Ld == b;
    i = Ld == c;
    i = Ld == uc;
    i = Ld == sc;
    i = Ld == i;
    i = Ld == ui;
    i = Ld == si;
    i = Ld == Si;
    i = Ld == uSi;
    i = Ld == sSi;
    i = Ld == Li;
    i = Ld == uLi;
    i = Ld == sLi;
    i = Ld == LLi;
    i = Ld == uLLi;
    i = Ld == sLLi;
    i = Ld == f;
    i = Ld == d;
    i = Ld == Ld;

    #pragma warning(pop)


    /*
     * NE
     */

    #pragma warning(push)
    #pragma warning(disable: 4388)
    #pragma warning(disable: 4389)

    /* _Bool [int standard] */
    i = b != b;
    i = b != c;
    i = b != uc;
    i = b != sc;
    i = b != i;
    i = b != ui;
    i = b != si;
    i = b != Si;
    i = b != uSi;
    i = b != sSi;
    i = b != Li;
    i = b != uLi;
    i = b != sLi;
    i = b != LLi;
    i = b != uLLi;
    i = b != sLLi;
    i = b != f;
    i = b != d;
    i = b != Ld;

    /* char [int standard] */
    i = c != b;
    i = c != c;
    i = c != uc;
    i = c != sc;
    i = c != i;
    i = c != ui;
    i = c != si;
    i = c != Si;
    i = c != uSi;
    i = c != sSi;
    i = c != Li;
    i = c != uLi;
    i = c != sLi;
    i = c != LLi;
    i = c != uLLi;
    i = c != sLLi;
    i = c != f;
    i = c != d;
    i = c != Ld;

    /* unsigned char [int standard] */
    i = uc != b;
    i = uc != c;
    i = uc != uc;
    i = uc != sc;
    i = uc != i;
    i = uc != ui;
    i = uc != si;
    i = uc != Si;
    i = uc != uSi;
    i = uc != sSi;
    i = uc != Li;
    i = uc != uLi;
    i = uc != sLi;
    i = uc != LLi;
    i = uc != uLLi;
    i = uc != sLLi;
    i = uc != f;
    i = uc != d;
    i = uc != Ld;

    /* signed char [int standard] */
    i = sc != b;
    i = sc != c;
    i = sc != uc;
    i = sc != sc;
    i = sc != i;
    i = sc != ui;
    i = sc != si;
    i = sc != Si;
    i = sc != uSi;
    i = sc != sSi;
    i = sc != Li;
    i = sc != uLi;
    i = sc != sLi;
    i = sc != LLi;
    i = sc != uLLi;
    i = sc != sLLi;
    i = sc != f;
    i = sc != d;
    i = sc != Ld;

    /* int [int standard] */
    i = i != b;
    i = i != c;
    i = i != uc;
    i = i != sc;
    i = i != i;
    i = i != ui;
    i = i != si;
    i = i != Si;
    i = i != uSi;
    i = i != sSi;
    i = i != Li;
    i = i != uLi;
    i = i != sLi;
    i = i != LLi;
    i = i != uLLi;
    i = i != sLLi;
    i = i != f;
    i = i != d;
    i = i != Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    i = ui != b;
    i = ui != c;
    i = ui != uc;
    i = ui != sc;
    i = ui != i;
    i = ui != ui;
    i = ui != si;
    i = ui != Si;
    i = ui != uSi;
    i = ui != sSi;
    i = ui != Li;
    i = ui != uLi;
    i = ui != sLi;
    i = ui != LLi;
    i = ui != uLLi;
    i = ui != sLLi;
    i = ui != f;
    i = ui != d;
    i = ui != Ld;

    /* signed int [int standard] */
    i = si != b;
    i = si != c;
    i = si != uc;
    i = si != sc;
    i = si != i;
    i = si != ui;
    i = si != si;
    i = si != Si;
    i = si != uSi;
    i = si != sSi;
    i = si != Li;
    i = si != uLi;
    i = si != sLi;
    i = si != LLi;
    i = si != uLLi;
    i = si != sLLi;
    i = si != f;
    i = si != d;
    i = si != Ld;

    /* short int [int standard] */
    i = Si != b;
    i = Si != c;
    i = Si != uc;
    i = Si != sc;
    i = Si != i;
    i = Si != ui;
    i = Si != si;
    i = Si != Si;
    i = Si != uSi;
    i = Si != sSi;
    i = Si != Li;
    i = Si != uLi;
    i = Si != sLi;
    i = Si != LLi;
    i = Si != uLLi;
    i = Si != sLLi;
    i = Si != f;
    i = Si != d;
    i = Si != Ld;

    /* unsigned short int [int standard] */
    i = uSi != b;
    i = uSi != c;
    i = uSi != uc;
    i = uSi != sc;
    i = uSi != i;
    i = uSi != ui;
    i = uSi != si;
    i = uSi != Si;
    i = uSi != uSi;
    i = uSi != sSi;
    i = uSi != Li;
    i = uSi != uLi;
    i = uSi != sLi;
    i = uSi != LLi;
    i = uSi != uLLi;
    i = uSi != sLLi;
    i = uSi != f;
    i = uSi != d;
    i = uSi != Ld;

    /* signed short int [int standard] */
    i = sSi != b;
    i = sSi != c;
    i = sSi != uc;
    i = sSi != sc;
    i = sSi != i;
    i = sSi != ui;
    i = sSi != si;
    i = sSi != Si;
    i = sSi != uSi;
    i = sSi != sSi;
    i = sSi != Li;
    i = sSi != uLi;
    i = sSi != sLi;
    i = sSi != LLi;
    i = sSi != uLLi;
    i = sSi != sLLi;
    i = sSi != f;
    i = sSi != d;
    i = sSi != Ld;

    /* long int [long int standard] */
    i = Li != b;
    i = Li != c;
    i = Li != uc;
    i = Li != sc;
    i = Li != i;
    i = Li != ui;
    i = Li != si;
    i = Li != Si;
    i = Li != uSi;
    i = Li != sSi;
    i = Li != Li;
    i = Li != uLi;
    i = Li != sLi;
    i = Li != LLi;
    i = Li != uLLi;
    i = Li != sLLi;
    i = Li != f;
    i = Li != d;
    i = Li != Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    i = uLi != b;
    i = uLi != c;
    i = uLi != uc;
    i = uLi != sc;
    i = uLi != i;
    i = uLi != ui;
    i = uLi != si;
    i = uLi != Si;
    i = uLi != uSi;
    i = uLi != sSi;
    i = uLi != Li;
    i = uLi != uLi;
    i = uLi != sLi;
    i = uLi != LLi;
    i = uLi != uLLi;
    i = uLi != sLLi;
    i = uLi != f;
    i = uLi != d;
    i = uLi != Ld;

    /* signed long int [long int standard] */
    i = sLi != b;
    i = sLi != c;
    i = sLi != uc;
    i = sLi != sc;
    i = sLi != i;
    i = sLi != ui;
    i = sLi != si;
    i = sLi != Si;
    i = sLi != uSi;
    i = sLi != sSi;
    i = sLi != Li;
    i = sLi != uLi;
    i = sLi != sLi;
    i = sLi != LLi;
    i = sLi != uLLi;
    i = sLi != sLLi;
    i = sLi != f;
    i = sLi != d;
    i = sLi != Ld;

    /* long long int [long long int standard] */
    i = LLi != b;
    i = LLi != c;
    i = LLi != uc;
    i = LLi != sc;
    i = LLi != i;
    i = LLi != ui;
    i = LLi != si;
    i = LLi != Si;
    i = LLi != uSi;
    i = LLi != sSi;
    i = LLi != Li;
    i = LLi != uLi;
    i = LLi != sLi;
    i = LLi != LLi;
    i = LLi != uLLi;
    i = LLi != sLLi;
    i = LLi != f;
    i = LLi != d;
    i = LLi != Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    i = uLLi != b;
    i = uLLi != c;
    i = uLLi != uc;
    i = uLLi != sc;
    i = uLLi != i;
    i = uLLi != ui;
    i = uLLi != si;
    i = uLLi != Si;
    i = uLLi != uSi;
    i = uLLi != sSi;
    i = uLLi != Li;
    i = uLLi != uLi;
    i = uLLi != sLi;
    i = uLLi != LLi;
    i = uLLi != uLLi;
    i = uLLi != sLLi;
    i = uLLi != f;
    i = uLLi != d;
    i = uLLi != Ld;

    /* signed long long int [long long int standard] */
    i = sLLi != b;
    i = sLLi != c;
    i = sLLi != uc;
    i = sLLi != sc;
    i = sLLi != i;
    i = sLLi != ui;
    i = sLLi != si;
    i = sLLi != Si;
    i = sLLi != uSi;
    i = sLLi != sSi;
    i = sLLi != Li;
    i = sLLi != uLi;
    i = sLLi != sLi;
    i = sLLi != LLi;
    i = sLLi != uLLi;
    i = sLLi != sLLi;
    i = sLLi != f;
    i = sLLi != d;
    i = sLLi != Ld;

    /* float */
    i = f != b;
    i = f != c;
    i = f != uc;
    i = f != sc;
    i = f != i;
    i = f != ui;
    i = f != si;
    i = f != Si;
    i = f != uSi;
    i = f != sSi;
    i = f != Li;
    i = f != uLi;
    i = f != sLi;
    i = f != LLi;
    i = f != uLLi;
    i = f != sLLi;
    i = f != f;
    i = f != d;
    i = f != Ld;

    /* double */
    i = d != b;
    i = d != c;
    i = d != uc;
    i = d != sc;
    i = d != i;
    i = d != ui;
    i = d != si;
    i = d != Si;
    i = d != uSi;
    i = d != sSi;
    i = d != Li;
    i = d != uLi;
    i = d != sLi;
    i = d != LLi;
    i = d != uLLi;
    i = d != sLLi;
    i = d != f;
    i = d != d;
    i = d != Ld;

    /* long double */
    i = Ld != b;
    i = Ld != c;
    i = Ld != uc;
    i = Ld != sc;
    i = Ld != i;
    i = Ld != ui;
    i = Ld != si;
    i = Ld != Si;
    i = Ld != uSi;
    i = Ld != sSi;
    i = Ld != Li;
    i = Ld != uLi;
    i = Ld != sLi;
    i = Ld != LLi;
    i = Ld != uLLi;
    i = Ld != sLLi;
    i = Ld != f;
    i = Ld != d;
    i = Ld != Ld;

    #pragma warning(pop)


    /*
     * GT
     */

    #pragma warning(push)
    #pragma warning(disable: 4018)
    #pragma warning(disable: 4388)

    /* _Bool [int standard] */
    i = b > b;
    i = b > c;
    i = b > uc;
    i = b > sc;
    i = b > i;
    i = b > ui;
    i = b > si;
    i = b > Si;
    i = b > uSi;
    i = b > sSi;
    i = b > Li;
    i = b > uLi;
    i = b > sLi;
    i = b > LLi;
    i = b > uLLi;
    i = b > sLLi;
    i = b > f;
    i = b > d;
    i = b > Ld;

    /* char [int standard] */
    i = c > b;
    i = c > c;
    i = c > uc;
    i = c > sc;
    i = c > i;
    i = c > ui;
    i = c > si;
    i = c > Si;
    i = c > uSi;
    i = c > sSi;
    i = c > Li;
    i = c > uLi;
    i = c > sLi;
    i = c > LLi;
    i = c > uLLi;
    i = c > sLLi;
    i = c > f;
    i = c > d;
    i = c > Ld;

    /* unsigned char [int standard] */
    i = uc > b;
    i = uc > c;
    i = uc > uc;
    i = uc > sc;
    i = uc > i;
    i = uc > ui;
    i = uc > si;
    i = uc > Si;
    i = uc > uSi;
    i = uc > sSi;
    i = uc > Li;
    i = uc > uLi;
    i = uc > sLi;
    i = uc > LLi;
    i = uc > uLLi;
    i = uc > sLLi;
    i = uc > f;
    i = uc > d;
    i = uc > Ld;

    /* signed char [int standard] */
    i = sc > b;
    i = sc > c;
    i = sc > uc;
    i = sc > sc;
    i = sc > i;
    i = sc > ui;
    i = sc > si;
    i = sc > Si;
    i = sc > uSi;
    i = sc > sSi;
    i = sc > Li;
    i = sc > uLi;
    i = sc > sLi;
    i = sc > LLi;
    i = sc > uLLi;
    i = sc > sLLi;
    i = sc > f;
    i = sc > d;
    i = sc > Ld;

    /* int [int standard] */
    i = i > b;
    i = i > c;
    i = i > uc;
    i = i > sc;
    i = i > i;
    i = i > ui;
    i = i > si;
    i = i > Si;
    i = i > uSi;
    i = i > sSi;
    i = i > Li;
    i = i > uLi;
    i = i > sLi;
    i = i > LLi;
    i = i > uLLi;
    i = i > sLLi;
    i = i > f;
    i = i > d;
    i = i > Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    i = ui > b;
    i = ui > c;
    i = ui > uc;
    i = ui > sc;
    i = ui > i;
    i = ui > ui;
    i = ui > si;
    i = ui > Si;
    i = ui > uSi;
    i = ui > sSi;
    i = ui > Li;
    i = ui > uLi;
    i = ui > sLi;
    i = ui > LLi;
    i = ui > uLLi;
    i = ui > sLLi;
    i = ui > f;
    i = ui > d;
    i = ui > Ld;

    /* signed int [int standard] */
    i = si > b;
    i = si > c;
    i = si > uc;
    i = si > sc;
    i = si > i;
    i = si > ui;
    i = si > si;
    i = si > Si;
    i = si > uSi;
    i = si > sSi;
    i = si > Li;
    i = si > uLi;
    i = si > sLi;
    i = si > LLi;
    i = si > uLLi;
    i = si > sLLi;
    i = si > f;
    i = si > d;
    i = si > Ld;

    /* short int [int standard] */
    i = Si > b;
    i = Si > c;
    i = Si > uc;
    i = Si > sc;
    i = Si > i;
    i = Si > ui;
    i = Si > si;
    i = Si > Si;
    i = Si > uSi;
    i = Si > sSi;
    i = Si > Li;
    i = Si > uLi;
    i = Si > sLi;
    i = Si > LLi;
    i = Si > uLLi;
    i = Si > sLLi;
    i = Si > f;
    i = Si > d;
    i = Si > Ld;

    /* unsigned short int [int standard] */
    i = uSi > b;
    i = uSi > c;
    i = uSi > uc;
    i = uSi > sc;
    i = uSi > i;
    i = uSi > ui;
    i = uSi > si;
    i = uSi > Si;
    i = uSi > uSi;
    i = uSi > sSi;
    i = uSi > Li;
    i = uSi > uLi;
    i = uSi > sLi;
    i = uSi > LLi;
    i = uSi > uLLi;
    i = uSi > sLLi;
    i = uSi > f;
    i = uSi > d;
    i = uSi > Ld;

    /* signed short int [int standard] */
    i = sSi > b;
    i = sSi > c;
    i = sSi > uc;
    i = sSi > sc;
    i = sSi > i;
    i = sSi > ui;
    i = sSi > si;
    i = sSi > Si;
    i = sSi > uSi;
    i = sSi > sSi;
    i = sSi > Li;
    i = sSi > uLi;
    i = sSi > sLi;
    i = sSi > LLi;
    i = sSi > uLLi;
    i = sSi > sLLi;
    i = sSi > f;
    i = sSi > d;
    i = sSi > Ld;

    /* long int [long int standard] */
    i = Li > b;
    i = Li > c;
    i = Li > uc;
    i = Li > sc;
    i = Li > i;
    i = Li > ui;
    i = Li > si;
    i = Li > Si;
    i = Li > uSi;
    i = Li > sSi;
    i = Li > Li;
    i = Li > uLi;
    i = Li > sLi;
    i = Li > LLi;
    i = Li > uLLi;
    i = Li > sLLi;
    i = Li > f;
    i = Li > d;
    i = Li > Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    i = uLi > b;
    i = uLi > c;
    i = uLi > uc;
    i = uLi > sc;
    i = uLi > i;
    i = uLi > ui;
    i = uLi > si;
    i = uLi > Si;
    i = uLi > uSi;
    i = uLi > sSi;
    i = uLi > Li;
    i = uLi > uLi;
    i = uLi > sLi;
    i = uLi > LLi;
    i = uLi > uLLi;
    i = uLi > sLLi;
    i = uLi > f;
    i = uLi > d;
    i = uLi > Ld;

    /* signed long int [long int standard] */
    i = sLi > b;
    i = sLi > c;
    i = sLi > uc;
    i = sLi > sc;
    i = sLi > i;
    i = sLi > ui;
    i = sLi > si;
    i = sLi > Si;
    i = sLi > uSi;
    i = sLi > sSi;
    i = sLi > Li;
    i = sLi > uLi;
    i = sLi > sLi;
    i = sLi > LLi;
    i = sLi > uLLi;
    i = sLi > sLLi;
    i = sLi > f;
    i = sLi > d;
    i = sLi > Ld;

    /* long long int [long long int standard] */
    i = LLi > b;
    i = LLi > c;
    i = LLi > uc;
    i = LLi > sc;
    i = LLi > i;
    i = LLi > ui;
    i = LLi > si;
    i = LLi > Si;
    i = LLi > uSi;
    i = LLi > sSi;
    i = LLi > Li;
    i = LLi > uLi;
    i = LLi > sLi;
    i = LLi > LLi;
    i = LLi > uLLi;
    i = LLi > sLLi;
    i = LLi > f;
    i = LLi > d;
    i = LLi > Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    i = uLLi > b;
    i = uLLi > c;
    i = uLLi > uc;
    i = uLLi > sc;
    i = uLLi > i;
    i = uLLi > ui;
    i = uLLi > si;
    i = uLLi > Si;
    i = uLLi > uSi;
    i = uLLi > sSi;
    i = uLLi > Li;
    i = uLLi > uLi;
    i = uLLi > sLi;
    i = uLLi > LLi;
    i = uLLi > uLLi;
    i = uLLi > sLLi;
    i = uLLi > f;
    i = uLLi > d;
    i = uLLi > Ld;

    /* signed long long int [long long int standard] */
    i = sLLi > b;
    i = sLLi > c;
    i = sLLi > uc;
    i = sLLi > sc;
    i = sLLi > i;
    i = sLLi > ui;
    i = sLLi > si;
    i = sLLi > Si;
    i = sLLi > uSi;
    i = sLLi > sSi;
    i = sLLi > Li;
    i = sLLi > uLi;
    i = sLLi > sLi;
    i = sLLi > LLi;
    i = sLLi > uLLi;
    i = sLLi > sLLi;
    i = sLLi > f;
    i = sLLi > d;
    i = sLLi > Ld;

    /* float */
    i = f > b;
    i = f > c;
    i = f > uc;
    i = f > sc;
    i = f > i;
    i = f > ui;
    i = f > si;
    i = f > Si;
    i = f > uSi;
    i = f > sSi;
    i = f > Li;
    i = f > uLi;
    i = f > sLi;
    i = f > LLi;
    i = f > uLLi;
    i = f > sLLi;
    i = f > f;
    i = f > d;
    i = f > Ld;

    /* double */
    i = d > b;
    i = d > c;
    i = d > uc;
    i = d > sc;
    i = d > i;
    i = d > ui;
    i = d > si;
    i = d > Si;
    i = d > uSi;
    i = d > sSi;
    i = d > Li;
    i = d > uLi;
    i = d > sLi;
    i = d > LLi;
    i = d > uLLi;
    i = d > sLLi;
    i = d > f;
    i = d > d;
    i = d > Ld;

    /* long double */
    i = Ld > b;
    i = Ld > c;
    i = Ld > uc;
    i = Ld > sc;
    i = Ld > i;
    i = Ld > ui;
    i = Ld > si;
    i = Ld > Si;
    i = Ld > uSi;
    i = Ld > sSi;
    i = Ld > Li;
    i = Ld > uLi;
    i = Ld > sLi;
    i = Ld > LLi;
    i = Ld > uLLi;
    i = Ld > sLLi;
    i = Ld > f;
    i = Ld > d;
    i = Ld > Ld;

    #pragma warning(pop)


    /*
     * LT
     */

    #pragma warning(push)
    #pragma warning(disable: 4018)
    #pragma warning(disable: 4388)

    /* _Bool [int standard] */
    i = b < b;
    i = b < c;
    i = b < uc;
    i = b < sc;
    i = b < i;
    i = b < ui;
    i = b < si;
    i = b < Si;
    i = b < uSi;
    i = b < sSi;
    i = b < Li;
    i = b < uLi;
    i = b < sLi;
    i = b < LLi;
    i = b < uLLi;
    i = b < sLLi;
    i = b < f;
    i = b < d;
    i = b < Ld;

    /* char [int standard] */
    i = c < b;
    i = c < c;
    i = c < uc;
    i = c < sc;
    i = c < i;
    i = c < ui;
    i = c < si;
    i = c < Si;
    i = c < uSi;
    i = c < sSi;
    i = c < Li;
    i = c < uLi;
    i = c < sLi;
    i = c < LLi;
    i = c < uLLi;
    i = c < sLLi;
    i = c < f;
    i = c < d;
    i = c < Ld;

    /* unsigned char [int standard] */
    i = uc < b;
    i = uc < c;
    i = uc < uc;
    i = uc < sc;
    i = uc < i;
    i = uc < ui;
    i = uc < si;
    i = uc < Si;
    i = uc < uSi;
    i = uc < sSi;
    i = uc < Li;
    i = uc < uLi;
    i = uc < sLi;
    i = uc < LLi;
    i = uc < uLLi;
    i = uc < sLLi;
    i = uc < f;
    i = uc < d;
    i = uc < Ld;

    /* signed char [int standard] */
    i = sc < b;
    i = sc < c;
    i = sc < uc;
    i = sc < sc;
    i = sc < i;
    i = sc < ui;
    i = sc < si;
    i = sc < Si;
    i = sc < uSi;
    i = sc < sSi;
    i = sc < Li;
    i = sc < uLi;
    i = sc < sLi;
    i = sc < LLi;
    i = sc < uLLi;
    i = sc < sLLi;
    i = sc < f;
    i = sc < d;
    i = sc < Ld;

    /* int [int standard] */
    i = i < b;
    i = i < c;
    i = i < uc;
    i = i < sc;
    i = i < i;
    i = i < ui;
    i = i < si;
    i = i < Si;
    i = i < uSi;
    i = i < sSi;
    i = i < Li;
    i = i < uLi;
    i = i < sLi;
    i = i < LLi;
    i = i < uLLi;
    i = i < sLLi;
    i = i < f;
    i = i < d;
    i = i < Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    i = ui < b;
    i = ui < c;
    i = ui < uc;
    i = ui < sc;
    i = ui < i;
    i = ui < ui;
    i = ui < si;
    i = ui < Si;
    i = ui < uSi;
    i = ui < sSi;
    i = ui < Li;
    i = ui < uLi;
    i = ui < sLi;
    i = ui < LLi;
    i = ui < uLLi;
    i = ui < sLLi;
    i = ui < f;
    i = ui < d;
    i = ui < Ld;

    /* signed int [int standard] */
    i = si < b;
    i = si < c;
    i = si < uc;
    i = si < sc;
    i = si < i;
    i = si < ui;
    i = si < si;
    i = si < Si;
    i = si < uSi;
    i = si < sSi;
    i = si < Li;
    i = si < uLi;
    i = si < sLi;
    i = si < LLi;
    i = si < uLLi;
    i = si < sLLi;
    i = si < f;
    i = si < d;
    i = si < Ld;

    /* short int [int standard] */
    i = Si < b;
    i = Si < c;
    i = Si < uc;
    i = Si < sc;
    i = Si < i;
    i = Si < ui;
    i = Si < si;
    i = Si < Si;
    i = Si < uSi;
    i = Si < sSi;
    i = Si < Li;
    i = Si < uLi;
    i = Si < sLi;
    i = Si < LLi;
    i = Si < uLLi;
    i = Si < sLLi;
    i = Si < f;
    i = Si < d;
    i = Si < Ld;

    /* unsigned short int [int standard] */
    i = uSi < b;
    i = uSi < c;
    i = uSi < uc;
    i = uSi < sc;
    i = uSi < i;
    i = uSi < ui;
    i = uSi < si;
    i = uSi < Si;
    i = uSi < uSi;
    i = uSi < sSi;
    i = uSi < Li;
    i = uSi < uLi;
    i = uSi < sLi;
    i = uSi < LLi;
    i = uSi < uLLi;
    i = uSi < sLLi;
    i = uSi < f;
    i = uSi < d;
    i = uSi < Ld;

    /* signed short int [int standard] */
    i = sSi < b;
    i = sSi < c;
    i = sSi < uc;
    i = sSi < sc;
    i = sSi < i;
    i = sSi < ui;
    i = sSi < si;
    i = sSi < Si;
    i = sSi < uSi;
    i = sSi < sSi;
    i = sSi < Li;
    i = sSi < uLi;
    i = sSi < sLi;
    i = sSi < LLi;
    i = sSi < uLLi;
    i = sSi < sLLi;
    i = sSi < f;
    i = sSi < d;
    i = sSi < Ld;

    /* long int [long int standard] */
    i = Li < b;
    i = Li < c;
    i = Li < uc;
    i = Li < sc;
    i = Li < i;
    i = Li < ui;
    i = Li < si;
    i = Li < Si;
    i = Li < uSi;
    i = Li < sSi;
    i = Li < Li;
    i = Li < uLi;
    i = Li < sLi;
    i = Li < LLi;
    i = Li < uLLi;
    i = Li < sLLi;
    i = Li < f;
    i = Li < d;
    i = Li < Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    i = uLi < b;
    i = uLi < c;
    i = uLi < uc;
    i = uLi < sc;
    i = uLi < i;
    i = uLi < ui;
    i = uLi < si;
    i = uLi < Si;
    i = uLi < uSi;
    i = uLi < sSi;
    i = uLi < Li;
    i = uLi < uLi;
    i = uLi < sLi;
    i = uLi < LLi;
    i = uLi < uLLi;
    i = uLi < sLLi;
    i = uLi < f;
    i = uLi < d;
    i = uLi < Ld;

    /* signed long int [long int standard] */
    i = sLi < b;
    i = sLi < c;
    i = sLi < uc;
    i = sLi < sc;
    i = sLi < i;
    i = sLi < ui;
    i = sLi < si;
    i = sLi < Si;
    i = sLi < uSi;
    i = sLi < sSi;
    i = sLi < Li;
    i = sLi < uLi;
    i = sLi < sLi;
    i = sLi < LLi;
    i = sLi < uLLi;
    i = sLi < sLLi;
    i = sLi < f;
    i = sLi < d;
    i = sLi < Ld;

    /* long long int [long long int standard] */
    i = LLi < b;
    i = LLi < c;
    i = LLi < uc;
    i = LLi < sc;
    i = LLi < i;
    i = LLi < ui;
    i = LLi < si;
    i = LLi < Si;
    i = LLi < uSi;
    i = LLi < sSi;
    i = LLi < Li;
    i = LLi < uLi;
    i = LLi < sLi;
    i = LLi < LLi;
    i = LLi < uLLi;
    i = LLi < sLLi;
    i = LLi < f;
    i = LLi < d;
    i = LLi < Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    i = uLLi < b;
    i = uLLi < c;
    i = uLLi < uc;
    i = uLLi < sc;
    i = uLLi < i;
    i = uLLi < ui;
    i = uLLi < si;
    i = uLLi < Si;
    i = uLLi < uSi;
    i = uLLi < sSi;
    i = uLLi < Li;
    i = uLLi < uLi;
    i = uLLi < sLi;
    i = uLLi < LLi;
    i = uLLi < uLLi;
    i = uLLi < sLLi;
    i = uLLi < f;
    i = uLLi < d;
    i = uLLi < Ld;

    /* signed long long int [long long int standard] */
    i = sLLi < b;
    i = sLLi < c;
    i = sLLi < uc;
    i = sLLi < sc;
    i = sLLi < i;
    i = sLLi < ui;
    i = sLLi < si;
    i = sLLi < Si;
    i = sLLi < uSi;
    i = sLLi < sSi;
    i = sLLi < Li;
    i = sLLi < uLi;
    i = sLLi < sLi;
    i = sLLi < LLi;
    i = sLLi < uLLi;
    i = sLLi < sLLi;
    i = sLLi < f;
    i = sLLi < d;
    i = sLLi < Ld;

    /* float */
    i = f < b;
    i = f < c;
    i = f < uc;
    i = f < sc;
    i = f < i;
    i = f < ui;
    i = f < si;
    i = f < Si;
    i = f < uSi;
    i = f < sSi;
    i = f < Li;
    i = f < uLi;
    i = f < sLi;
    i = f < LLi;
    i = f < uLLi;
    i = f < sLLi;
    i = f < f;
    i = f < d;
    i = f < Ld;

    /* double */
    i = d < b;
    i = d < c;
    i = d < uc;
    i = d < sc;
    i = d < i;
    i = d < ui;
    i = d < si;
    i = d < Si;
    i = d < uSi;
    i = d < sSi;
    i = d < Li;
    i = d < uLi;
    i = d < sLi;
    i = d < LLi;
    i = d < uLLi;
    i = d < sLLi;
    i = d < f;
    i = d < d;
    i = d < Ld;

    /* long double */
    i = Ld < b;
    i = Ld < c;
    i = Ld < uc;
    i = Ld < sc;
    i = Ld < i;
    i = Ld < ui;
    i = Ld < si;
    i = Ld < Si;
    i = Ld < uSi;
    i = Ld < sSi;
    i = Ld < Li;
    i = Ld < uLi;
    i = Ld < sLi;
    i = Ld < LLi;
    i = Ld < uLLi;
    i = Ld < sLLi;
    i = Ld < f;
    i = Ld < d;
    i = Ld < Ld;

    #pragma warning(pop)


    /*
     * GE
     */

    #pragma warning(push)
    #pragma warning(disable: 4018)
    #pragma warning(disable: 4388)

    /* _Bool [int standard] */
    i = b >= b;
    i = b >= c;
    i = b >= uc;
    i = b >= sc;
    i = b >= i;
    i = b >= ui;
    i = b >= si;
    i = b >= Si;
    i = b >= uSi;
    i = b >= sSi;
    i = b >= Li;
    i = b >= uLi;
    i = b >= sLi;
    i = b >= LLi;
    i = b >= uLLi;
    i = b >= sLLi;
    i = b >= f;
    i = b >= d;
    i = b >= Ld;

    /* char [int standard] */
    i = c >= b;
    i = c >= c;
    i = c >= uc;
    i = c >= sc;
    i = c >= i;
    i = c >= ui;
    i = c >= si;
    i = c >= Si;
    i = c >= uSi;
    i = c >= sSi;
    i = c >= Li;
    i = c >= uLi;
    i = c >= sLi;
    i = c >= LLi;
    i = c >= uLLi;
    i = c >= sLLi;
    i = c >= f;
    i = c >= d;
    i = c >= Ld;

    /* unsigned char [int standard] */
    i = uc >= b;
    i = uc >= c;
    i = uc >= uc;
    i = uc >= sc;
    i = uc >= i;
    i = uc >= ui;
    i = uc >= si;
    i = uc >= Si;
    i = uc >= uSi;
    i = uc >= sSi;
    i = uc >= Li;
    i = uc >= uLi;
    i = uc >= sLi;
    i = uc >= LLi;
    i = uc >= uLLi;
    i = uc >= sLLi;
    i = uc >= f;
    i = uc >= d;
    i = uc >= Ld;

    /* signed char [int standard] */
    i = sc >= b;
    i = sc >= c;
    i = sc >= uc;
    i = sc >= sc;
    i = sc >= i;
    i = sc >= ui;
    i = sc >= si;
    i = sc >= Si;
    i = sc >= uSi;
    i = sc >= sSi;
    i = sc >= Li;
    i = sc >= uLi;
    i = sc >= sLi;
    i = sc >= LLi;
    i = sc >= uLLi;
    i = sc >= sLLi;
    i = sc >= f;
    i = sc >= d;
    i = sc >= Ld;

    /* int [int standard] */
    i = i >= b;
    i = i >= c;
    i = i >= uc;
    i = i >= sc;
    i = i >= i;
    i = i >= ui;
    i = i >= si;
    i = i >= Si;
    i = i >= uSi;
    i = i >= sSi;
    i = i >= Li;
    i = i >= uLi;
    i = i >= sLi;
    i = i >= LLi;
    i = i >= uLLi;
    i = i >= sLLi;
    i = i >= f;
    i = i >= d;
    i = i >= Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    i = ui >= b;
    i = ui >= c;
    i = ui >= uc;
    i = ui >= sc;
    i = ui >= i;
    i = ui >= ui;
    i = ui >= si;
    i = ui >= Si;
    i = ui >= uSi;
    i = ui >= sSi;
    i = ui >= Li;
    i = ui >= uLi;
    i = ui >= sLi;
    i = ui >= LLi;
    i = ui >= uLLi;
    i = ui >= sLLi;
    i = ui >= f;
    i = ui >= d;
    i = ui >= Ld;

    /* signed int [int standard] */
    i = si >= b;
    i = si >= c;
    i = si >= uc;
    i = si >= sc;
    i = si >= i;
    i = si >= ui;
    i = si >= si;
    i = si >= Si;
    i = si >= uSi;
    i = si >= sSi;
    i = si >= Li;
    i = si >= uLi;
    i = si >= sLi;
    i = si >= LLi;
    i = si >= uLLi;
    i = si >= sLLi;
    i = si >= f;
    i = si >= d;
    i = si >= Ld;

    /* short int [int standard] */
    i = Si >= b;
    i = Si >= c;
    i = Si >= uc;
    i = Si >= sc;
    i = Si >= i;
    i = Si >= ui;
    i = Si >= si;
    i = Si >= Si;
    i = Si >= uSi;
    i = Si >= sSi;
    i = Si >= Li;
    i = Si >= uLi;
    i = Si >= sLi;
    i = Si >= LLi;
    i = Si >= uLLi;
    i = Si >= sLLi;
    i = Si >= f;
    i = Si >= d;
    i = Si >= Ld;

    /* unsigned short int [int standard] */
    i = uSi >= b;
    i = uSi >= c;
    i = uSi >= uc;
    i = uSi >= sc;
    i = uSi >= i;
    i = uSi >= ui;
    i = uSi >= si;
    i = uSi >= Si;
    i = uSi >= uSi;
    i = uSi >= sSi;
    i = uSi >= Li;
    i = uSi >= uLi;
    i = uSi >= sLi;
    i = uSi >= LLi;
    i = uSi >= uLLi;
    i = uSi >= sLLi;
    i = uSi >= f;
    i = uSi >= d;
    i = uSi >= Ld;

    /* signed short int [int standard] */
    i = sSi >= b;
    i = sSi >= c;
    i = sSi >= uc;
    i = sSi >= sc;
    i = sSi >= i;
    i = sSi >= ui;
    i = sSi >= si;
    i = sSi >= Si;
    i = sSi >= uSi;
    i = sSi >= sSi;
    i = sSi >= Li;
    i = sSi >= uLi;
    i = sSi >= sLi;
    i = sSi >= LLi;
    i = sSi >= uLLi;
    i = sSi >= sLLi;
    i = sSi >= f;
    i = sSi >= d;
    i = sSi >= Ld;

    /* long int [long int standard] */
    i = Li >= b;
    i = Li >= c;
    i = Li >= uc;
    i = Li >= sc;
    i = Li >= i;
    i = Li >= ui;
    i = Li >= si;
    i = Li >= Si;
    i = Li >= uSi;
    i = Li >= sSi;
    i = Li >= Li;
    i = Li >= uLi;
    i = Li >= sLi;
    i = Li >= LLi;
    i = Li >= uLLi;
    i = Li >= sLLi;
    i = Li >= f;
    i = Li >= d;
    i = Li >= Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    i = uLi >= b;
    i = uLi >= c;
    i = uLi >= uc;
    i = uLi >= sc;
    i = uLi >= i;
    i = uLi >= ui;
    i = uLi >= si;
    i = uLi >= Si;
    i = uLi >= uSi;
    i = uLi >= sSi;
    i = uLi >= Li;
    i = uLi >= uLi;
    i = uLi >= sLi;
    i = uLi >= LLi;
    i = uLi >= uLLi;
    i = uLi >= sLLi;
    i = uLi >= f;
    i = uLi >= d;
    i = uLi >= Ld;

    /* signed long int [long int standard] */
    i = sLi >= b;
    i = sLi >= c;
    i = sLi >= uc;
    i = sLi >= sc;
    i = sLi >= i;
    i = sLi >= ui;
    i = sLi >= si;
    i = sLi >= Si;
    i = sLi >= uSi;
    i = sLi >= sSi;
    i = sLi >= Li;
    i = sLi >= uLi;
    i = sLi >= sLi;
    i = sLi >= LLi;
    i = sLi >= uLLi;
    i = sLi >= sLLi;
    i = sLi >= f;
    i = sLi >= d;
    i = sLi >= Ld;

    /* long long int [long long int standard] */
    i = LLi >= b;
    i = LLi >= c;
    i = LLi >= uc;
    i = LLi >= sc;
    i = LLi >= i;
    i = LLi >= ui;
    i = LLi >= si;
    i = LLi >= Si;
    i = LLi >= uSi;
    i = LLi >= sSi;
    i = LLi >= Li;
    i = LLi >= uLi;
    i = LLi >= sLi;
    i = LLi >= LLi;
    i = LLi >= uLLi;
    i = LLi >= sLLi;
    i = LLi >= f;
    i = LLi >= d;
    i = LLi >= Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    i = uLLi >= b;
    i = uLLi >= c;
    i = uLLi >= uc;
    i = uLLi >= sc;
    i = uLLi >= i;
    i = uLLi >= ui;
    i = uLLi >= si;
    i = uLLi >= Si;
    i = uLLi >= uSi;
    i = uLLi >= sSi;
    i = uLLi >= Li;
    i = uLLi >= uLi;
    i = uLLi >= sLi;
    i = uLLi >= LLi;
    i = uLLi >= uLLi;
    i = uLLi >= sLLi;
    i = uLLi >= f;
    i = uLLi >= d;
    i = uLLi >= Ld;

    /* signed long long int [long long int standard] */
    i = sLLi >= b;
    i = sLLi >= c;
    i = sLLi >= uc;
    i = sLLi >= sc;
    i = sLLi >= i;
    i = sLLi >= ui;
    i = sLLi >= si;
    i = sLLi >= Si;
    i = sLLi >= uSi;
    i = sLLi >= sSi;
    i = sLLi >= Li;
    i = sLLi >= uLi;
    i = sLLi >= sLi;
    i = sLLi >= LLi;
    i = sLLi >= uLLi;
    i = sLLi >= sLLi;
    i = sLLi >= f;
    i = sLLi >= d;
    i = sLLi >= Ld;

    /* float */
    i = f >= b;
    i = f >= c;
    i = f >= uc;
    i = f >= sc;
    i = f >= i;
    i = f >= ui;
    i = f >= si;
    i = f >= Si;
    i = f >= uSi;
    i = f >= sSi;
    i = f >= Li;
    i = f >= uLi;
    i = f >= sLi;
    i = f >= LLi;
    i = f >= uLLi;
    i = f >= sLLi;
    i = f >= f;
    i = f >= d;
    i = f >= Ld;

    /* double */
    i = d >= b;
    i = d >= c;
    i = d >= uc;
    i = d >= sc;
    i = d >= i;
    i = d >= ui;
    i = d >= si;
    i = d >= Si;
    i = d >= uSi;
    i = d >= sSi;
    i = d >= Li;
    i = d >= uLi;
    i = d >= sLi;
    i = d >= LLi;
    i = d >= uLLi;
    i = d >= sLLi;
    i = d >= f;
    i = d >= d;
    i = d >= Ld;

    /* long double */
    i = Ld >= b;
    i = Ld >= c;
    i = Ld >= uc;
    i = Ld >= sc;
    i = Ld >= i;
    i = Ld >= ui;
    i = Ld >= si;
    i = Ld >= Si;
    i = Ld >= uSi;
    i = Ld >= sSi;
    i = Ld >= Li;
    i = Ld >= uLi;
    i = Ld >= sLi;
    i = Ld >= LLi;
    i = Ld >= uLLi;
    i = Ld >= sLLi;
    i = Ld >= f;
    i = Ld >= d;
    i = Ld >= Ld;

    #pragma warning(pop)


    /*
     * LE
     */

    #pragma warning(push)
    #pragma warning(disable: 4018)
    #pragma warning(disable: 4388)

    /* _Bool [int standard] */
    i = b <= b;
    i = b <= c;
    i = b <= uc;
    i = b <= sc;
    i = b <= i;
    i = b <= ui;
    i = b <= si;
    i = b <= Si;
    i = b <= uSi;
    i = b <= sSi;
    i = b <= Li;
    i = b <= uLi;
    i = b <= sLi;
    i = b <= LLi;
    i = b <= uLLi;
    i = b <= sLLi;
    i = b <= f;
    i = b <= d;
    i = b <= Ld;

    /* char [int standard] */
    i = c <= b;
    i = c <= c;
    i = c <= uc;
    i = c <= sc;
    i = c <= i;
    i = c <= ui;
    i = c <= si;
    i = c <= Si;
    i = c <= uSi;
    i = c <= sSi;
    i = c <= Li;
    i = c <= uLi;
    i = c <= sLi;
    i = c <= LLi;
    i = c <= uLLi;
    i = c <= sLLi;
    i = c <= f;
    i = c <= d;
    i = c <= Ld;

    /* unsigned char [int standard] */
    i = uc <= b;
    i = uc <= c;
    i = uc <= uc;
    i = uc <= sc;
    i = uc <= i;
    i = uc <= ui;
    i = uc <= si;
    i = uc <= Si;
    i = uc <= uSi;
    i = uc <= sSi;
    i = uc <= Li;
    i = uc <= uLi;
    i = uc <= sLi;
    i = uc <= LLi;
    i = uc <= uLLi;
    i = uc <= sLLi;
    i = uc <= f;
    i = uc <= d;
    i = uc <= Ld;

    /* signed char [int standard] */
    i = sc <= b;
    i = sc <= c;
    i = sc <= uc;
    i = sc <= sc;
    i = sc <= i;
    i = sc <= ui;
    i = sc <= si;
    i = sc <= Si;
    i = sc <= uSi;
    i = sc <= sSi;
    i = sc <= Li;
    i = sc <= uLi;
    i = sc <= sLi;
    i = sc <= LLi;
    i = sc <= uLLi;
    i = sc <= sLLi;
    i = sc <= f;
    i = sc <= d;
    i = sc <= Ld;

    /* int [int standard] */
    i = i <= b;
    i = i <= c;
    i = i <= uc;
    i = i <= sc;
    i = i <= i;
    i = i <= ui;
    i = i <= si;
    i = i <= Si;
    i = i <= uSi;
    i = i <= sSi;
    i = i <= Li;
    i = i <= uLi;
    i = i <= sLi;
    i = i <= LLi;
    i = i <= uLLi;
    i = i <= sLLi;
    i = i <= f;
    i = i <= d;
    i = i <= Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    i = ui <= b;
    i = ui <= c;
    i = ui <= uc;
    i = ui <= sc;
    i = ui <= i;
    i = ui <= ui;
    i = ui <= si;
    i = ui <= Si;
    i = ui <= uSi;
    i = ui <= sSi;
    i = ui <= Li;
    i = ui <= uLi;
    i = ui <= sLi;
    i = ui <= LLi;
    i = ui <= uLLi;
    i = ui <= sLLi;
    i = ui <= f;
    i = ui <= d;
    i = ui <= Ld;

    /* signed int [int standard] */
    i = si <= b;
    i = si <= c;
    i = si <= uc;
    i = si <= sc;
    i = si <= i;
    i = si <= ui;
    i = si <= si;
    i = si <= Si;
    i = si <= uSi;
    i = si <= sSi;
    i = si <= Li;
    i = si <= uLi;
    i = si <= sLi;
    i = si <= LLi;
    i = si <= uLLi;
    i = si <= sLLi;
    i = si <= f;
    i = si <= d;
    i = si <= Ld;

    /* short int [int standard] */
    i = Si <= b;
    i = Si <= c;
    i = Si <= uc;
    i = Si <= sc;
    i = Si <= i;
    i = Si <= ui;
    i = Si <= si;
    i = Si <= Si;
    i = Si <= uSi;
    i = Si <= sSi;
    i = Si <= Li;
    i = Si <= uLi;
    i = Si <= sLi;
    i = Si <= LLi;
    i = Si <= uLLi;
    i = Si <= sLLi;
    i = Si <= f;
    i = Si <= d;
    i = Si <= Ld;

    /* unsigned short int [int standard] */
    i = uSi <= b;
    i = uSi <= c;
    i = uSi <= uc;
    i = uSi <= sc;
    i = uSi <= i;
    i = uSi <= ui;
    i = uSi <= si;
    i = uSi <= Si;
    i = uSi <= uSi;
    i = uSi <= sSi;
    i = uSi <= Li;
    i = uSi <= uLi;
    i = uSi <= sLi;
    i = uSi <= LLi;
    i = uSi <= uLLi;
    i = uSi <= sLLi;
    i = uSi <= f;
    i = uSi <= d;
    i = uSi <= Ld;

    /* signed short int [int standard] */
    i = sSi <= b;
    i = sSi <= c;
    i = sSi <= uc;
    i = sSi <= sc;
    i = sSi <= i;
    i = sSi <= ui;
    i = sSi <= si;
    i = sSi <= Si;
    i = sSi <= uSi;
    i = sSi <= sSi;
    i = sSi <= Li;
    i = sSi <= uLi;
    i = sSi <= sLi;
    i = sSi <= LLi;
    i = sSi <= uLLi;
    i = sSi <= sLLi;
    i = sSi <= f;
    i = sSi <= d;
    i = sSi <= Ld;

    /* long int [long int standard] */
    i = Li <= b;
    i = Li <= c;
    i = Li <= uc;
    i = Li <= sc;
    i = Li <= i;
    i = Li <= ui;
    i = Li <= si;
    i = Li <= Si;
    i = Li <= uSi;
    i = Li <= sSi;
    i = Li <= Li;
    i = Li <= uLi;
    i = Li <= sLi;
    i = Li <= LLi;
    i = Li <= uLLi;
    i = Li <= sLLi;
    i = Li <= f;
    i = Li <= d;
    i = Li <= Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    i = uLi <= b;
    i = uLi <= c;
    i = uLi <= uc;
    i = uLi <= sc;
    i = uLi <= i;
    i = uLi <= ui;
    i = uLi <= si;
    i = uLi <= Si;
    i = uLi <= uSi;
    i = uLi <= sSi;
    i = uLi <= Li;
    i = uLi <= uLi;
    i = uLi <= sLi;
    i = uLi <= LLi;
    i = uLi <= uLLi;
    i = uLi <= sLLi;
    i = uLi <= f;
    i = uLi <= d;
    i = uLi <= Ld;

    /* signed long int [long int standard] */
    i = sLi <= b;
    i = sLi <= c;
    i = sLi <= uc;
    i = sLi <= sc;
    i = sLi <= i;
    i = sLi <= ui;
    i = sLi <= si;
    i = sLi <= Si;
    i = sLi <= uSi;
    i = sLi <= sSi;
    i = sLi <= Li;
    i = sLi <= uLi;
    i = sLi <= sLi;
    i = sLi <= LLi;
    i = sLi <= uLLi;
    i = sLi <= sLLi;
    i = sLi <= f;
    i = sLi <= d;
    i = sLi <= Ld;

    /* long long int [long long int standard] */
    i = LLi <= b;
    i = LLi <= c;
    i = LLi <= uc;
    i = LLi <= sc;
    i = LLi <= i;
    i = LLi <= ui;
    i = LLi <= si;
    i = LLi <= Si;
    i = LLi <= uSi;
    i = LLi <= sSi;
    i = LLi <= Li;
    i = LLi <= uLi;
    i = LLi <= sLi;
    i = LLi <= LLi;
    i = LLi <= uLLi;
    i = LLi <= sLLi;
    i = LLi <= f;
    i = LLi <= d;
    i = LLi <= Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    i = uLLi <= b;
    i = uLLi <= c;
    i = uLLi <= uc;
    i = uLLi <= sc;
    i = uLLi <= i;
    i = uLLi <= ui;
    i = uLLi <= si;
    i = uLLi <= Si;
    i = uLLi <= uSi;
    i = uLLi <= sSi;
    i = uLLi <= Li;
    i = uLLi <= uLi;
    i = uLLi <= sLi;
    i = uLLi <= LLi;
    i = uLLi <= uLLi;
    i = uLLi <= sLLi;
    i = uLLi <= f;
    i = uLLi <= d;
    i = uLLi <= Ld;

    /* signed long long int [long long int standard] */
    i = sLLi <= b;
    i = sLLi <= c;
    i = sLLi <= uc;
    i = sLLi <= sc;
    i = sLLi <= i;
    i = sLLi <= ui;
    i = sLLi <= si;
    i = sLLi <= Si;
    i = sLLi <= uSi;
    i = sLLi <= sSi;
    i = sLLi <= Li;
    i = sLLi <= uLi;
    i = sLLi <= sLi;
    i = sLLi <= LLi;
    i = sLLi <= uLLi;
    i = sLLi <= sLLi;
    i = sLLi <= f;
    i = sLLi <= d;
    i = sLLi <= Ld;

    /* float */
    i = f <= b;
    i = f <= c;
    i = f <= uc;
    i = f <= sc;
    i = f <= i;
    i = f <= ui;
    i = f <= si;
    i = f <= Si;
    i = f <= uSi;
    i = f <= sSi;
    i = f <= Li;
    i = f <= uLi;
    i = f <= sLi;
    i = f <= LLi;
    i = f <= uLLi;
    i = f <= sLLi;
    i = f <= f;
    i = f <= d;
    i = f <= Ld;

    /* double */
    i = d <= b;
    i = d <= c;
    i = d <= uc;
    i = d <= sc;
    i = d <= i;
    i = d <= ui;
    i = d <= si;
    i = d <= Si;
    i = d <= uSi;
    i = d <= sSi;
    i = d <= Li;
    i = d <= uLi;
    i = d <= sLi;
    i = d <= LLi;
    i = d <= uLLi;
    i = d <= sLLi;
    i = d <= f;
    i = d <= d;
    i = d <= Ld;

    /* long double */
    i = Ld <= b;
    i = Ld <= c;
    i = Ld <= uc;
    i = Ld <= sc;
    i = Ld <= i;
    i = Ld <= ui;
    i = Ld <= si;
    i = Ld <= Si;
    i = Ld <= uSi;
    i = Ld <= sSi;
    i = Ld <= Li;
    i = Ld <= uLi;
    i = Ld <= sLi;
    i = Ld <= LLi;
    i = Ld <= uLLi;
    i = Ld <= sLLi;
    i = Ld <= f;
    i = Ld <= d;
    i = Ld <= Ld;

    #pragma warning(pop)


    /***************************************************************************
     * Bitwise operations
     ***/

    /*
     * Bitwise AND
     */

    /* _Bool [int standard] */
    i = b & b;
    i = b & c;
    i = b & uc;
    i = b & sc;
    i = b & i;
    ui = b & ui;
    i = b & si;
    i = b & Si;
    i = b & uSi;
    i = b & sSi;
    Li = b & Li;
    uLi = b & uLi;
    Li = b & sLi;
    LLi = b & LLi;
    uLLi = b & uLLi;
    LLi = b & sLLi;
    // f = b & f;
    // d = b & d;
    // Ld = b & Ld;

    /* char [int standard] */
    i = c & b;
    i = c & c;
    i = c & uc;
    i = c & sc;
    i = c & i;
    ui = c & ui;
    i = c & si;
    i = c & Si;
    i = c & uSi;
    i = c & sSi;
    Li = c & Li;
    uLi = c & uLi;
    Li = c & sLi;
    LLi = c & LLi;
    uLLi = c & uLLi;
    LLi = c & sLLi;
    // f = c & f;
    // d = c & d;
    // Ld = c & Ld;

    /* unsigned char [int standard] */
    i = uc & b;
    i = uc & c;
    i = uc & uc;
    i = uc & sc;
    i = uc & i;
    ui = uc & ui;
    i = uc & si;
    i = uc & Si;
    i = uc & uSi;
    i = uc & sSi;
    Li = uc & Li;
    uLi = uc & uLi;
    Li = uc & sLi;
    LLi = uc & LLi;
    uLLi = uc & uLLi;
    LLi = uc & sLLi;
    // f = uc & f;
    // d = uc & d;
    // Ld = uc & Ld;

    /* signed char [int standard] */
    i = sc & b;
    i = sc & c;
    i = sc & uc;
    i = sc & sc;
    i = sc & i;
    ui = sc & ui;
    i = sc & si;
    i = sc & Si;
    i = sc & uSi;
    i = sc & sSi;
    Li = sc & Li;
    uLi = sc & uLi;
    Li = sc & sLi;
    LLi = sc & LLi;
    uLLi = sc & uLLi;
    LLi = sc & sLLi;
    // f = sc & f;
    // d = sc & d;
    // Ld = sc & Ld;

    /* int [int standard] */
    i = i & b;
    i = i & c;
    i = i & uc;
    i = i & sc;
    i = i & i;
    ui = i & ui;
    i = i & si;
    i = i & Si;
    i = i & uSi;
    i = i & sSi;
    Li = i & Li;
    uLi = i & uLi;
    Li = i & sLi;
    LLi = i & LLi;
    uLLi = i & uLLi;
    LLi = i & sLLi;
    // f = i & f;
    // d = i & d;
    // Ld = i & Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    ui = ui & b;
    ui = ui & c;
    ui = ui & uc;
    ui = ui & sc;
    ui = ui & i;
    ui = ui & ui;
    ui = ui & si;
    ui = ui & Si;
    ui = ui & uSi;
    ui = ui & sSi;
    uLi = ui & Li;
    uLi = ui & uLi;
    uLi = ui & sLi;
    LLi = ui & LLi;
    uLLi = ui & uLLi;
    LLi = ui & sLLi;
    // f = ui & f;
    // d = ui & d;
    // Ld = ui & Ld;

    /* signed int [int standard] */
    i = si & b;
    i = si & c;
    i = si & uc;
    i = si & sc;
    i = si & i;
    ui = si & ui;
    i = si & si;
    i = si & Si;
    i = si & uSi;
    i = si & sSi;
    Li = si & Li;
    uLi = si & uLi;
    Li = si & sLi;
    LLi = si & LLi;
    uLLi = si & uLLi;
    LLi = si & sLLi;
    // f = si & f;
    // d = si & d;
    // Ld = si & Ld;

    /* short int [int standard] */
    i = Si & b;
    i = Si & c;
    i = Si & uc;
    i = Si & sc;
    i = Si & i;
    ui = Si & ui;
    i = Si & si;
    i = Si & Si;
    i = Si & uSi;
    i = Si & sSi;
    Li = Si & Li;
    uLi = Si & uLi;
    Li = Si & sLi;
    LLi = Si & LLi;
    uLLi = Si & uLLi;
    LLi = Si & sLLi;
    // f = Si & f;
    // d = Si & d;
    // Ld = Si & Ld;

    /* unsigned short int [int standard] */
    i = uSi & b;
    i = uSi & c;
    i = uSi & uc;
    i = uSi & sc;
    i = uSi & i;
    ui = uSi & ui;
    i = uSi & si;
    i = uSi & Si;
    i = uSi & uSi;
    i = uSi & sSi;
    Li = uSi & Li;
    uLi = uSi & uLi;
    Li = uSi & sLi;
    LLi = uSi & LLi;
    uLLi = uSi & uLLi;
    LLi = uSi & sLLi;
    // f = uSi & f;
    // d = uSi & d;
    // Ld = uSi & Ld;

    /* signed short int [int standard] */
    i = sSi & b;
    i = sSi & c;
    i = sSi & uc;
    i = sSi & sc;
    i = sSi & i;
    ui = sSi & ui;
    i = sSi & si;
    i = sSi & Si;
    i = sSi & uSi;
    i = sSi & sSi;
    Li = sSi & Li;
    uLi = sSi & uLi;
    Li = sSi & sLi;
    LLi = sSi & LLi;
    uLLi = sSi & uLLi;
    LLi = sSi & sLLi;
    // f = sSi & f;
    // d = sSi & d;
    // Ld = sSi & Ld;

    /* long int [long int standard] */
    Li = Li & b;
    Li = Li & c;
    Li = Li & uc;
    Li = Li & sc;
    Li = Li & i;
    uLi = Li & ui;
    Li = Li & si;
    Li = Li & Si;
    Li = Li & uSi;
    Li = Li & sSi;
    Li = Li & Li;
    uLi = Li & uLi;
    Li = Li & sLi;
    LLi = Li & LLi;
    uLLi = Li & uLLi;
    LLi = Li & sLLi;
    // f = Li & f;
    // d = Li & d;
    // Ld = Li & Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    uLi = uLi & b;
    uLi = uLi & c;
    uLi = uLi & uc;
    uLi = uLi & sc;
    uLi = uLi & i;
    uLi = uLi & ui;
    uLi = uLi & si;
    uLi = uLi & Si;
    uLi = uLi & uSi;
    uLi = uLi & sSi;
    uLi = uLi & Li;
    uLi = uLi & uLi;
    uLi = uLi & sLi;
    LLi = uLi & LLi;
    uLLi = uLi & uLLi;
    LLi = uLi & sLLi;
    // f = uLi & f;
    // d = uLi & d;
    // Ld = uLi & Ld;

    /* signed long int [long int standard] */
    Li = sLi & b;
    Li = sLi & c;
    Li = sLi & uc;
    Li = sLi & sc;
    Li = sLi & i;
    uLi = sLi & ui;
    Li = sLi & si;
    Li = sLi & Si;
    Li = sLi & uSi;
    Li = sLi & sSi;
    Li = sLi & Li;
    uLi = sLi & uLi;
    Li = sLi & sLi;
    LLi = sLi & LLi;
    uLLi = sLi & uLLi;
    LLi = sLi & sLLi;
    // f = sLi & f;
    // d = sLi & d;
    // Ld = sLi & Ld;

    /* long long int [long long int standard] */
    LLi = LLi & b;
    LLi = LLi & c;
    LLi = LLi & uc;
    LLi = LLi & sc;
    LLi = LLi & i;
    LLi = LLi & ui;
    LLi = LLi & si;
    LLi = LLi & Si;
    LLi = LLi & uSi;
    LLi = LLi & sSi;
    LLi = LLi & Li;
    LLi = LLi & uLi;
    LLi = LLi & sLi;
    LLi = LLi & LLi;
    uLLi = LLi & uLLi;
    LLi = LLi & sLLi;
    // f = LLi & f;
    // d = LLi & d;
    // Ld = LLi & Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    uLLi = uLLi & b;
    uLLi = uLLi & c;
    uLLi = uLLi & uc;
    uLLi = uLLi & sc;
    uLLi = uLLi & i;
    uLLi = uLLi & ui;
    uLLi = uLLi & si;
    uLLi = uLLi & Si;
    uLLi = uLLi & uSi;
    uLLi = uLLi & sSi;
    uLLi = uLLi & Li;
    uLLi = uLLi & uLi;
    uLLi = uLLi & sLi;
    uLLi = uLLi & LLi;
    uLLi = uLLi & uLLi;
    uLLi = uLLi & sLLi;
    // f = uLLi & f;
    // d = uLLi & d;
    // Ld = uLLi & Ld;

    /* signed long long int [long long int standard] */
    LLi = sLLi & b;
    LLi = sLLi & c;
    LLi = sLLi & uc;
    LLi = sLLi & sc;
    LLi = sLLi & i;
    LLi = sLLi & ui;
    LLi = sLLi & si;
    LLi = sLLi & Si;
    LLi = sLLi & uSi;
    LLi = sLLi & sSi;
    LLi = sLLi & Li;
    LLi = sLLi & uLi;
    LLi = sLLi & sLi;
    LLi = sLLi & LLi;
    uLLi = sLLi & uLLi;
    LLi = sLLi & sLLi;
    // f = sLLi & f;
    // d = sLLi & d;
    // Ld = sLLi & Ld;

    /* float */
    // f = f & b;
    // f = f & c;
    // f = f & uc;
    // f = f & sc;
    // f = f & i;
    // f = f & ui;
    // f = f & si;
    // f = f & Si;
    // f = f & uSi;
    // f = f & sSi;
    // f = f & Li;
    // f = f & uLi;
    // f = f & sLi;
    // f = f & LLi;
    // f = f & uLLi;
    // f = f & sLLi;
    // f = f & f;
    // d = f & d;
    // Ld = f & Ld;

    /* double */
    // d = d & b;
    // d = d & c;
    // d = d & uc;
    // d = d & sc;
    // d = d & i;
    // d = d & ui;
    // d = d & si;
    // d = d & Si;
    // d = d & uSi;
    // d = d & sSi;
    // d = d & Li;
    // d = d & uLi;
    // d = d & sLi;
    // d = d & LLi;
    // d = d & uLLi;
    // d = d & sLLi;
    // d = d & f;
    // d = d & d;
    // Ld = d & Ld;

    /* long double */
    // Ld = Ld & b;
    // Ld = Ld & c;
    // Ld = Ld & uc;
    // Ld = Ld & sc;
    // Ld = Ld & i;
    // Ld = Ld & ui;
    // Ld = Ld & si;
    // Ld = Ld & Si;
    // Ld = Ld & uSi;
    // Ld = Ld & sSi;
    // Ld = Ld & Li;
    // Ld = Ld & uLi;
    // Ld = Ld & sLi;
    // Ld = Ld & LLi;
    // Ld = Ld & uLLi;
    // Ld = Ld & sLLi;
    // Ld = Ld & f;
    // Ld = Ld & d;
    // Ld = Ld & Ld;


    /*
     * Bitwise OR
     */

    /* _Bool [int standard] */
    i = b | b;
    i = b | c;
    i = b | uc;
    i = b | sc;
    i = b | i;
    ui = b | ui;
    i = b | si;
    i = b | Si;
    i = b | uSi;
    i = b | sSi;
    Li = b | Li;
    uLi = b | uLi;
    Li = b | sLi;
    LLi = b | LLi;
    uLLi = b | uLLi;
    LLi = b | sLLi;
    // f = b | f;
    // d = b | d;
    // Ld = b | Ld;

    /* char [int standard] */
    i = c | b;
    i = c | c;
    i = c | uc;
    i = c | sc;
    i = c | i;
    ui = c | ui;
    i = c | si;
    i = c | Si;
    i = c | uSi;
    i = c | sSi;
    Li = c | Li;
    uLi = c | uLi;
    Li = c | sLi;
    LLi = c | LLi;
    uLLi = c | uLLi;
    LLi = c | sLLi;
    // f = c | f;
    // d = c | d;
    // Ld = c | Ld;

    /* unsigned char [int standard] */
    i = uc | b;
    i = uc | c;
    i = uc | uc;
    i = uc | sc;
    i = uc | i;
    ui = uc | ui;
    i = uc | si;
    i = uc | Si;
    i = uc | uSi;
    i = uc | sSi;
    Li = uc | Li;
    uLi = uc | uLi;
    Li = uc | sLi;
    LLi = uc | LLi;
    uLLi = uc | uLLi;
    LLi = uc | sLLi;
    // f = uc | f;
    // d = uc | d;
    // Ld = uc | Ld;

    /* signed char [int standard] */
    i = sc | b;
    i = sc | c;
    i = sc | uc;
    i = sc | sc;
    i = sc | i;
    ui = sc | ui;
    i = sc | si;
    i = sc | Si;
    i = sc | uSi;
    i = sc | sSi;
    Li = sc | Li;
    uLi = sc | uLi;
    Li = sc | sLi;
    LLi = sc | LLi;
    uLLi = sc | uLLi;
    LLi = sc | sLLi;
    // f = sc | f;
    // d = sc | d;
    // Ld = sc | Ld;

    /* int [int standard] */
    i = i | b;
    i = i | c;
    i = i | uc;
    i = i | sc;
    i = i | i;
    ui = i | ui;
    i = i | si;
    i = i | Si;
    i = i | uSi;
    i = i | sSi;
    Li = i | Li;
    uLi = i | uLi;
    Li = i | sLi;
    LLi = i | LLi;
    uLLi = i | uLLi;
    LLi = i | sLLi;
    // f = i | f;
    // d = i | d;
    // Ld = i | Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    ui = ui | b;
    ui = ui | c;
    ui = ui | uc;
    ui = ui | sc;
    ui = ui | i;
    ui = ui | ui;
    ui = ui | si;
    ui = ui | Si;
    ui = ui | uSi;
    ui = ui | sSi;
    uLi = ui | Li;
    uLi = ui | uLi;
    uLi = ui | sLi;
    LLi = ui | LLi;
    uLLi = ui | uLLi;
    LLi = ui | sLLi;
    // f = ui | f;
    // d = ui | d;
    // Ld = ui | Ld;

    /* signed int [int standard] */
    i = si | b;
    i = si | c;
    i = si | uc;
    i = si | sc;
    i = si | i;
    ui = si | ui;
    i = si | si;
    i = si | Si;
    i = si | uSi;
    i = si | sSi;
    Li = si | Li;
    uLi = si | uLi;
    Li = si | sLi;
    LLi = si | LLi;
    uLLi = si | uLLi;
    LLi = si | sLLi;
    // f = si | f;
    // d = si | d;
    // Ld = si | Ld;

    /* short int [int standard] */
    i = Si | b;
    i = Si | c;
    i = Si | uc;
    i = Si | sc;
    i = Si | i;
    ui = Si | ui;
    i = Si | si;
    i = Si | Si;
    i = Si | uSi;
    i = Si | sSi;
    Li = Si | Li;
    uLi = Si | uLi;
    Li = Si | sLi;
    LLi = Si | LLi;
    uLLi = Si | uLLi;
    LLi = Si | sLLi;
    // f = Si | f;
    // d = Si | d;
    // Ld = Si | Ld;

    /* unsigned short int [int standard] */
    i = uSi | b;
    i = uSi | c;
    i = uSi | uc;
    i = uSi | sc;
    i = uSi | i;
    ui = uSi | ui;
    i = uSi | si;
    i = uSi | Si;
    i = uSi | uSi;
    i = uSi | sSi;
    Li = uSi | Li;
    uLi = uSi | uLi;
    Li = uSi | sLi;
    LLi = uSi | LLi;
    uLLi = uSi | uLLi;
    LLi = uSi | sLLi;
    // f = uSi | f;
    // d = uSi | d;
    // Ld = uSi | Ld;

    /* signed short int [int standard] */
    i = sSi | b;
    i = sSi | c;
    i = sSi | uc;
    i = sSi | sc;
    i = sSi | i;
    ui = sSi | ui;
    i = sSi | si;
    i = sSi | Si;
    i = sSi | uSi;
    i = sSi | sSi;
    Li = sSi | Li;
    uLi = sSi | uLi;
    Li = sSi | sLi;
    LLi = sSi | LLi;
    uLLi = sSi | uLLi;
    LLi = sSi | sLLi;
    // f = sSi | f;
    // d = sSi | d;
    // Ld = sSi | Ld;

    /* long int [long int standard] */
    Li = Li | b;
    Li = Li | c;
    Li = Li | uc;
    Li = Li | sc;
    Li = Li | i;
    uLi = Li | ui;
    Li = Li | si;
    Li = Li | Si;
    Li = Li | uSi;
    Li = Li | sSi;
    Li = Li | Li;
    uLi = Li | uLi;
    Li = Li | sLi;
    LLi = Li | LLi;
    uLLi = Li | uLLi;
    LLi = Li | sLLi;
    // f = Li | f;
    // d = Li | d;
    // Ld = Li | Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    uLi = uLi | b;
    uLi = uLi | c;
    uLi = uLi | uc;
    uLi = uLi | sc;
    uLi = uLi | i;
    uLi = uLi | ui;
    uLi = uLi | si;
    uLi = uLi | Si;
    uLi = uLi | uSi;
    uLi = uLi | sSi;
    uLi = uLi | Li;
    uLi = uLi | uLi;
    uLi = uLi | sLi;
    LLi = uLi | LLi;
    uLLi = uLi | uLLi;
    LLi = uLi | sLLi;
    // f = uLi | f;
    // d = uLi | d;
    // Ld = uLi | Ld;

    /* signed long int [long int standard] */
    Li = sLi | b;
    Li = sLi | c;
    Li = sLi | uc;
    Li = sLi | sc;
    Li = sLi | i;
    uLi = sLi | ui;
    Li = sLi | si;
    Li = sLi | Si;
    Li = sLi | uSi;
    Li = sLi | sSi;
    Li = sLi | Li;
    uLi = sLi | uLi;
    Li = sLi | sLi;
    LLi = sLi | LLi;
    uLLi = sLi | uLLi;
    LLi = sLi | sLLi;
    // f = sLi | f;
    // d = sLi | d;
    // Ld = sLi | Ld;

    /* long long int [long long int standard] */
    LLi = LLi | b;
    LLi = LLi | c;
    LLi = LLi | uc;
    LLi = LLi | sc;
    LLi = LLi | i;
    LLi = LLi | ui;
    LLi = LLi | si;
    LLi = LLi | Si;
    LLi = LLi | uSi;
    LLi = LLi | sSi;
    LLi = LLi | Li;
    LLi = LLi | uLi;
    LLi = LLi | sLi;
    LLi = LLi | LLi;
    uLLi = LLi | uLLi;
    LLi = LLi | sLLi;
    // f = LLi | f;
    // d = LLi | d;
    // Ld = LLi | Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    uLLi = uLLi | b;
    uLLi = uLLi | c;
    uLLi = uLLi | uc;
    uLLi = uLLi | sc;
    uLLi = uLLi | i;
    uLLi = uLLi | ui;
    uLLi = uLLi | si;
    uLLi = uLLi | Si;
    uLLi = uLLi | uSi;
    uLLi = uLLi | sSi;
    uLLi = uLLi | Li;
    uLLi = uLLi | uLi;
    uLLi = uLLi | sLi;
    uLLi = uLLi | LLi;
    uLLi = uLLi | uLLi;
    uLLi = uLLi | sLLi;
    // f = uLLi | f;
    // d = uLLi | d;
    // Ld = uLLi | Ld;

    /* signed long long int [long long int standard] */
    LLi = sLLi | b;
    LLi = sLLi | c;
    LLi = sLLi | uc;
    LLi = sLLi | sc;
    LLi = sLLi | i;
    LLi = sLLi | ui;
    LLi = sLLi | si;
    LLi = sLLi | Si;
    LLi = sLLi | uSi;
    LLi = sLLi | sSi;
    LLi = sLLi | Li;
    LLi = sLLi | uLi;
    LLi = sLLi | sLi;
    LLi = sLLi | LLi;
    uLLi = sLLi | uLLi;
    LLi = sLLi | sLLi;
    // f = sLLi | f;
    // d = sLLi | d;
    // Ld = sLLi | Ld;

    /* float */
    // f = f | b;
    // f = f | c;
    // f = f | uc;
    // f = f | sc;
    // f = f | i;
    // f = f | ui;
    // f = f | si;
    // f = f | Si;
    // f = f | uSi;
    // f = f | sSi;
    // f = f | Li;
    // f = f | uLi;
    // f = f | sLi;
    // f = f | LLi;
    // f = f | uLLi;
    // f = f | sLLi;
    // f = f | f;
    // d = f | d;
    // Ld = f | Ld;

    /* double */
    // d = d | b;
    // d = d | c;
    // d = d | uc;
    // d = d | sc;
    // d = d | i;
    // d = d | ui;
    // d = d | si;
    // d = d | Si;
    // d = d | uSi;
    // d = d | sSi;
    // d = d | Li;
    // d = d | uLi;
    // d = d | sLi;
    // d = d | LLi;
    // d = d | uLLi;
    // d = d | sLLi;
    // d = d | f;
    // d = d | d;
    // Ld = d | Ld;

    /* long double */
    // Ld = Ld | b;
    // Ld = Ld | c;
    // Ld = Ld | uc;
    // Ld = Ld | sc;
    // Ld = Ld | i;
    // Ld = Ld | ui;
    // Ld = Ld | si;
    // Ld = Ld | Si;
    // Ld = Ld | uSi;
    // Ld = Ld | sSi;
    // Ld = Ld | Li;
    // Ld = Ld | uLi;
    // Ld = Ld | sLi;
    // Ld = Ld | LLi;
    // Ld = Ld | uLLi;
    // Ld = Ld | sLLi;
    // Ld = Ld | f;
    // Ld = Ld | d;
    // Ld = Ld | Ld;


    /*
     * Bitwise XOR
     */

    /* _Bool [int standard] */
    i = b ^ b;
    i = b ^ c;
    i = b ^ uc;
    i = b ^ sc;
    i = b ^ i;
    ui = b ^ ui;
    i = b ^ si;
    i = b ^ Si;
    i = b ^ uSi;
    i = b ^ sSi;
    Li = b ^ Li;
    uLi = b ^ uLi;
    Li = b ^ sLi;
    LLi = b ^ LLi;
    uLLi = b ^ uLLi;
    LLi = b ^ sLLi;
    // f = b ^ f;
    // d = b ^ d;
    // Ld = b ^ Ld;

    /* char [int standard] */
    i = c ^ b;
    i = c ^ c;
    i = c ^ uc;
    i = c ^ sc;
    i = c ^ i;
    ui = c ^ ui;
    i = c ^ si;
    i = c ^ Si;
    i = c ^ uSi;
    i = c ^ sSi;
    Li = c ^ Li;
    uLi = c ^ uLi;
    Li = c ^ sLi;
    LLi = c ^ LLi;
    uLLi = c ^ uLLi;
    LLi = c ^ sLLi;
    // f = c ^ f;
    // d = c ^ d;
    // Ld = c ^ Ld;

    /* unsigned char [int standard] */
    i = uc ^ b;
    i = uc ^ c;
    i = uc ^ uc;
    i = uc ^ sc;
    i = uc ^ i;
    ui = uc ^ ui;
    i = uc ^ si;
    i = uc ^ Si;
    i = uc ^ uSi;
    i = uc ^ sSi;
    Li = uc ^ Li;
    uLi = uc ^ uLi;
    Li = uc ^ sLi;
    LLi = uc ^ LLi;
    uLLi = uc ^ uLLi;
    LLi = uc ^ sLLi;
    // f = uc ^ f;
    // d = uc ^ d;
    // Ld = uc ^ Ld;

    /* signed char [int standard] */
    i = sc ^ b;
    i = sc ^ c;
    i = sc ^ uc;
    i = sc ^ sc;
    i = sc ^ i;
    ui = sc ^ ui;
    i = sc ^ si;
    i = sc ^ Si;
    i = sc ^ uSi;
    i = sc ^ sSi;
    Li = sc ^ Li;
    uLi = sc ^ uLi;
    Li = sc ^ sLi;
    LLi = sc ^ LLi;
    uLLi = sc ^ uLLi;
    LLi = sc ^ sLLi;
    // f = sc ^ f;
    // d = sc ^ d;
    // Ld = sc ^ Ld;

    /* int [int standard] */
    i = i ^ b;
    i = i ^ c;
    i = i ^ uc;
    i = i ^ sc;
    i = i ^ i;
    ui = i ^ ui;
    i = i ^ si;
    i = i ^ Si;
    i = i ^ uSi;
    i = i ^ sSi;
    Li = i ^ Li;
    uLi = i ^ uLi;
    Li = i ^ sLi;
    LLi = i ^ LLi;
    uLLi = i ^ uLLi;
    LLi = i ^ sLLi;
    // f = i ^ f;
    // d = i ^ d;
    // Ld = i ^ Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    ui = ui ^ b;
    ui = ui ^ c;
    ui = ui ^ uc;
    ui = ui ^ sc;
    ui = ui ^ i;
    ui = ui ^ ui;
    ui = ui ^ si;
    ui = ui ^ Si;
    ui = ui ^ uSi;
    ui = ui ^ sSi;
    uLi = ui ^ Li;
    uLi = ui ^ uLi;
    uLi = ui ^ sLi;
    LLi = ui ^ LLi;
    uLLi = ui ^ uLLi;
    LLi = ui ^ sLLi;
    // f = ui ^ f;
    // d = ui ^ d;
    // Ld = ui ^ Ld;

    /* signed int [int standard] */
    i = si ^ b;
    i = si ^ c;
    i = si ^ uc;
    i = si ^ sc;
    i = si ^ i;
    ui = si ^ ui;
    i = si ^ si;
    i = si ^ Si;
    i = si ^ uSi;
    i = si ^ sSi;
    Li = si ^ Li;
    uLi = si ^ uLi;
    Li = si ^ sLi;
    LLi = si ^ LLi;
    uLLi = si ^ uLLi;
    LLi = si ^ sLLi;
    // f = si ^ f;
    // d = si ^ d;
    // Ld = si ^ Ld;

    /* short int [int standard] */
    i = Si ^ b;
    i = Si ^ c;
    i = Si ^ uc;
    i = Si ^ sc;
    i = Si ^ i;
    ui = Si ^ ui;
    i = Si ^ si;
    i = Si ^ Si;
    i = Si ^ uSi;
    i = Si ^ sSi;
    Li = Si ^ Li;
    uLi = Si ^ uLi;
    Li = Si ^ sLi;
    LLi = Si ^ LLi;
    uLLi = Si ^ uLLi;
    LLi = Si ^ sLLi;
    // f = Si ^ f;
    // d = Si ^ d;
    // Ld = Si ^ Ld;

    /* unsigned short int [int standard] */
    i = uSi ^ b;
    i = uSi ^ c;
    i = uSi ^ uc;
    i = uSi ^ sc;
    i = uSi ^ i;
    ui = uSi ^ ui;
    i = uSi ^ si;
    i = uSi ^ Si;
    i = uSi ^ uSi;
    i = uSi ^ sSi;
    Li = uSi ^ Li;
    uLi = uSi ^ uLi;
    Li = uSi ^ sLi;
    LLi = uSi ^ LLi;
    uLLi = uSi ^ uLLi;
    LLi = uSi ^ sLLi;
    // f = uSi ^ f;
    // d = uSi ^ d;
    // Ld = uSi ^ Ld;

    /* signed short int [int standard] */
    i = sSi ^ b;
    i = sSi ^ c;
    i = sSi ^ uc;
    i = sSi ^ sc;
    i = sSi ^ i;
    ui = sSi ^ ui;
    i = sSi ^ si;
    i = sSi ^ Si;
    i = sSi ^ uSi;
    i = sSi ^ sSi;
    Li = sSi ^ Li;
    uLi = sSi ^ uLi;
    Li = sSi ^ sLi;
    LLi = sSi ^ LLi;
    uLLi = sSi ^ uLLi;
    LLi = sSi ^ sLLi;
    // f = sSi ^ f;
    // d = sSi ^ d;
    // Ld = sSi ^ Ld;

    /* long int [long int standard] */
    Li = Li ^ b;
    Li = Li ^ c;
    Li = Li ^ uc;
    Li = Li ^ sc;
    Li = Li ^ i;
    uLi = Li ^ ui;
    Li = Li ^ si;
    Li = Li ^ Si;
    Li = Li ^ uSi;
    Li = Li ^ sSi;
    Li = Li ^ Li;
    uLi = Li ^ uLi;
    Li = Li ^ sLi;
    LLi = Li ^ LLi;
    uLLi = Li ^ uLLi;
    LLi = Li ^ sLLi;
    // f = Li ^ f;
    // d = Li ^ d;
    // Ld = Li ^ Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    uLi = uLi ^ b;
    uLi = uLi ^ c;
    uLi = uLi ^ uc;
    uLi = uLi ^ sc;
    uLi = uLi ^ i;
    uLi = uLi ^ ui;
    uLi = uLi ^ si;
    uLi = uLi ^ Si;
    uLi = uLi ^ uSi;
    uLi = uLi ^ sSi;
    uLi = uLi ^ Li;
    uLi = uLi ^ uLi;
    uLi = uLi ^ sLi;
    LLi = uLi ^ LLi;
    uLLi = uLi ^ uLLi;
    LLi = uLi ^ sLLi;
    // f = uLi ^ f;
    // d = uLi ^ d;
    // Ld = uLi ^ Ld;

    /* signed long int [long int standard] */
    Li = sLi ^ b;
    Li = sLi ^ c;
    Li = sLi ^ uc;
    Li = sLi ^ sc;
    Li = sLi ^ i;
    uLi = sLi ^ ui;
    Li = sLi ^ si;
    Li = sLi ^ Si;
    Li = sLi ^ uSi;
    Li = sLi ^ sSi;
    Li = sLi ^ Li;
    uLi = sLi ^ uLi;
    Li = sLi ^ sLi;
    LLi = sLi ^ LLi;
    uLLi = sLi ^ uLLi;
    LLi = sLi ^ sLLi;
    // f = sLi ^ f;
    // d = sLi ^ d;
    // Ld = sLi ^ Ld;

    /* long long int [long long int standard] */
    LLi = LLi ^ b;
    LLi = LLi ^ c;
    LLi = LLi ^ uc;
    LLi = LLi ^ sc;
    LLi = LLi ^ i;
    LLi = LLi ^ ui;
    LLi = LLi ^ si;
    LLi = LLi ^ Si;
    LLi = LLi ^ uSi;
    LLi = LLi ^ sSi;
    LLi = LLi ^ Li;
    LLi = LLi ^ uLi;
    LLi = LLi ^ sLi;
    LLi = LLi ^ LLi;
    uLLi = LLi ^ uLLi;
    LLi = LLi ^ sLLi;
    // f = LLi ^ f;
    // d = LLi ^ d;
    // Ld = LLi ^ Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    uLLi = uLLi ^ b;
    uLLi = uLLi ^ c;
    uLLi = uLLi ^ uc;
    uLLi = uLLi ^ sc;
    uLLi = uLLi ^ i;
    uLLi = uLLi ^ ui;
    uLLi = uLLi ^ si;
    uLLi = uLLi ^ Si;
    uLLi = uLLi ^ uSi;
    uLLi = uLLi ^ sSi;
    uLLi = uLLi ^ Li;
    uLLi = uLLi ^ uLi;
    uLLi = uLLi ^ sLi;
    uLLi = uLLi ^ LLi;
    uLLi = uLLi ^ uLLi;
    uLLi = uLLi ^ sLLi;
    // f = uLLi ^ f;
    // d = uLLi ^ d;
    // Ld = uLLi ^ Ld;

    /* signed long long int [long long int standard] */
    LLi = sLLi ^ b;
    LLi = sLLi ^ c;
    LLi = sLLi ^ uc;
    LLi = sLLi ^ sc;
    LLi = sLLi ^ i;
    LLi = sLLi ^ ui;
    LLi = sLLi ^ si;
    LLi = sLLi ^ Si;
    LLi = sLLi ^ uSi;
    LLi = sLLi ^ sSi;
    LLi = sLLi ^ Li;
    LLi = sLLi ^ uLi;
    LLi = sLLi ^ sLi;
    LLi = sLLi ^ LLi;
    uLLi = sLLi ^ uLLi;
    LLi = sLLi ^ sLLi;
    // f = sLLi ^ f;
    // d = sLLi ^ d;
    // Ld = sLLi ^ Ld;

    /* float */
    // f = f ^ b;
    // f = f ^ c;
    // f = f ^ uc;
    // f = f ^ sc;
    // f = f ^ i;
    // f = f ^ ui;
    // f = f ^ si;
    // f = f ^ Si;
    // f = f ^ uSi;
    // f = f ^ sSi;
    // f = f ^ Li;
    // f = f ^ uLi;
    // f = f ^ sLi;
    // f = f ^ LLi;
    // f = f ^ uLLi;
    // f = f ^ sLLi;
    // f = f ^ f;
    // d = f ^ d;
    // Ld = f ^ Ld;

    /* double */
    // d = d ^ b;
    // d = d ^ c;
    // d = d ^ uc;
    // d = d ^ sc;
    // d = d ^ i;
    // d = d ^ ui;
    // d = d ^ si;
    // d = d ^ Si;
    // d = d ^ uSi;
    // d = d ^ sSi;
    // d = d ^ Li;
    // d = d ^ uLi;
    // d = d ^ sLi;
    // d = d ^ LLi;
    // d = d ^ uLLi;
    // d = d ^ sLLi;
    // d = d ^ f;
    // d = d ^ d;
    // Ld = d ^ Ld;

    /* long double */
    // Ld = Ld ^ b;
    // Ld = Ld ^ c;
    // Ld = Ld ^ uc;
    // Ld = Ld ^ sc;
    // Ld = Ld ^ i;
    // Ld = Ld ^ ui;
    // Ld = Ld ^ si;
    // Ld = Ld ^ Si;
    // Ld = Ld ^ uSi;
    // Ld = Ld ^ sSi;
    // Ld = Ld ^ Li;
    // Ld = Ld ^ uLi;
    // Ld = Ld ^ sLi;
    // Ld = Ld ^ LLi;
    // Ld = Ld ^ uLLi;
    // Ld = Ld ^ sLLi;
    // Ld = Ld ^ f;
    // Ld = Ld ^ d;
    // Ld = Ld ^ Ld;


    /*
     * Bitwise left SHIFT
     */

    /* _Bool [int standard] */
    i = b << b;
    i = b << c;
    i = b << uc;
    i = b << sc;
    i = b << i;
    ui = b << ui;
    i = b << si;
    i = b << Si;
    i = b << uSi;
    i = b << sSi;
    Li = b << Li;
    uLi = b << uLi;
    Li = b << sLi;
    LLi = b << LLi;
    uLLi = b << uLLi;
    LLi = b << sLLi;
    // f = b << f;
    // d = b << d;
    // Ld = b << Ld;

    /* char [int standard] */
    i = c << b;
    i = c << c;
    i = c << uc;
    i = c << sc;
    i = c << i;
    ui = c << ui;
    i = c << si;
    i = c << Si;
    i = c << uSi;
    i = c << sSi;
    Li = c << Li;
    uLi = c << uLi;
    Li = c << sLi;
    LLi = c << LLi;
    uLLi = c << uLLi;
    LLi = c << sLLi;
    // f = c << f;
    // d = c << d;
    // Ld = c << Ld;

    /* unsigned char [int standard] */
    i = uc << b;
    i = uc << c;
    i = uc << uc;
    i = uc << sc;
    i = uc << i;
    ui = uc << ui;
    i = uc << si;
    i = uc << Si;
    i = uc << uSi;
    i = uc << sSi;
    Li = uc << Li;
    uLi = uc << uLi;
    Li = uc << sLi;
    LLi = uc << LLi;
    uLLi = uc << uLLi;
    LLi = uc << sLLi;
    // f = uc << f;
    // d = uc << d;
    // Ld = uc << Ld;

    /* signed char [int standard] */
    i = sc << b;
    i = sc << c;
    i = sc << uc;
    i = sc << sc;
    i = sc << i;
    ui = sc << ui;
    i = sc << si;
    i = sc << Si;
    i = sc << uSi;
    i = sc << sSi;
    Li = sc << Li;
    uLi = sc << uLi;
    Li = sc << sLi;
    LLi = sc << LLi;
    uLLi = sc << uLLi;
    LLi = sc << sLLi;
    // f = sc << f;
    // d = sc << d;
    // Ld = sc << Ld;

    /* int [int standard] */
    i = i << b;
    i = i << c;
    i = i << uc;
    i = i << sc;
    i = i << i;
    ui = i << ui;
    i = i << si;
    i = i << Si;
    i = i << uSi;
    i = i << sSi;
    Li = i << Li;
    uLi = i << uLi;
    Li = i << sLi;
    LLi = i << LLi;
    uLLi = i << uLLi;
    LLi = i << sLLi;
    // f = i << f;
    // d = i << d;
    // Ld = i << Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    ui = ui << b;
    ui = ui << c;
    ui = ui << uc;
    ui = ui << sc;
    ui = ui << i;
    ui = ui << ui;
    ui = ui << si;
    ui = ui << Si;
    ui = ui << uSi;
    ui = ui << sSi;
    uLi = ui << Li;
    uLi = ui << uLi;
    uLi = ui << sLi;
    LLi = ui << LLi;
    uLLi = ui << uLLi;
    LLi = ui << sLLi;
    // f = ui << f;
    // d = ui << d;
    // Ld = ui << Ld;

    /* signed int [int standard] */
    i = si << b;
    i = si << c;
    i = si << uc;
    i = si << sc;
    i = si << i;
    ui = si << ui;
    i = si << si;
    i = si << Si;
    i = si << uSi;
    i = si << sSi;
    Li = si << Li;
    uLi = si << uLi;
    Li = si << sLi;
    LLi = si << LLi;
    uLLi = si << uLLi;
    LLi = si << sLLi;
    // f = si << f;
    // d = si << d;
    // Ld = si << Ld;

    /* short int [int standard] */
    i = Si << b;
    i = Si << c;
    i = Si << uc;
    i = Si << sc;
    i = Si << i;
    ui = Si << ui;
    i = Si << si;
    i = Si << Si;
    i = Si << uSi;
    i = Si << sSi;
    Li = Si << Li;
    uLi = Si << uLi;
    Li = Si << sLi;
    LLi = Si << LLi;
    uLLi = Si << uLLi;
    LLi = Si << sLLi;
    // f = Si << f;
    // d = Si << d;
    // Ld = Si << Ld;

    /* unsigned short int [int standard] */
    i = uSi << b;
    i = uSi << c;
    i = uSi << uc;
    i = uSi << sc;
    i = uSi << i;
    ui = uSi << ui;
    i = uSi << si;
    i = uSi << Si;
    i = uSi << uSi;
    i = uSi << sSi;
    Li = uSi << Li;
    uLi = uSi << uLi;
    Li = uSi << sLi;
    LLi = uSi << LLi;
    uLLi = uSi << uLLi;
    LLi = uSi << sLLi;
    // f = uSi << f;
    // d = uSi << d;
    // Ld = uSi << Ld;

    /* signed short int [int standard] */
    i = sSi << b;
    i = sSi << c;
    i = sSi << uc;
    i = sSi << sc;
    i = sSi << i;
    ui = sSi << ui;
    i = sSi << si;
    i = sSi << Si;
    i = sSi << uSi;
    i = sSi << sSi;
    Li = sSi << Li;
    uLi = sSi << uLi;
    Li = sSi << sLi;
    LLi = sSi << LLi;
    uLLi = sSi << uLLi;
    LLi = sSi << sLLi;
    // f = sSi << f;
    // d = sSi << d;
    // Ld = sSi << Ld;

    /* long int [long int standard] */
    Li = Li << b;
    Li = Li << c;
    Li = Li << uc;
    Li = Li << sc;
    Li = Li << i;
    uLi = Li << ui;
    Li = Li << si;
    Li = Li << Si;
    Li = Li << uSi;
    Li = Li << sSi;
    Li = Li << Li;
    uLi = Li << uLi;
    Li = Li << sLi;
    LLi = Li << LLi;
    uLLi = Li << uLLi;
    LLi = Li << sLLi;
    // f = Li << f;
    // d = Li << d;
    // Ld = Li << Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    uLi = uLi << b;
    uLi = uLi << c;
    uLi = uLi << uc;
    uLi = uLi << sc;
    uLi = uLi << i;
    uLi = uLi << ui;
    uLi = uLi << si;
    uLi = uLi << Si;
    uLi = uLi << uSi;
    uLi = uLi << sSi;
    uLi = uLi << Li;
    uLi = uLi << uLi;
    uLi = uLi << sLi;
    LLi = uLi << LLi;
    uLLi = uLi << uLLi;
    LLi = uLi << sLLi;
    // f = uLi << f;
    // d = uLi << d;
    // Ld = uLi << Ld;

    /* signed long int [long int standard] */
    Li = sLi << b;
    Li = sLi << c;
    Li = sLi << uc;
    Li = sLi << sc;
    Li = sLi << i;
    uLi = sLi << ui;
    Li = sLi << si;
    Li = sLi << Si;
    Li = sLi << uSi;
    Li = sLi << sSi;
    Li = sLi << Li;
    uLi = sLi << uLi;
    Li = sLi << sLi;
    LLi = sLi << LLi;
    uLLi = sLi << uLLi;
    LLi = sLi << sLLi;
    // f = sLi << f;
    // d = sLi << d;
    // Ld = sLi << Ld;

    /* long long int [long long int standard] */
    LLi = LLi << b;
    LLi = LLi << c;
    LLi = LLi << uc;
    LLi = LLi << sc;
    LLi = LLi << i;
    LLi = LLi << ui;
    LLi = LLi << si;
    LLi = LLi << Si;
    LLi = LLi << uSi;
    LLi = LLi << sSi;
    LLi = LLi << Li;
    LLi = LLi << uLi;
    LLi = LLi << sLi;
    LLi = LLi << LLi;
    uLLi = LLi << uLLi;
    LLi = LLi << sLLi;
    // f = LLi << f;
    // d = LLi << d;
    // Ld = LLi << Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    uLLi = uLLi << b;
    uLLi = uLLi << c;
    uLLi = uLLi << uc;
    uLLi = uLLi << sc;
    uLLi = uLLi << i;
    uLLi = uLLi << ui;
    uLLi = uLLi << si;
    uLLi = uLLi << Si;
    uLLi = uLLi << uSi;
    uLLi = uLLi << sSi;
    uLLi = uLLi << Li;
    uLLi = uLLi << uLi;
    uLLi = uLLi << sLi;
    uLLi = uLLi << LLi;
    uLLi = uLLi << uLLi;
    uLLi = uLLi << sLLi;
    // f = uLLi << f;
    // d = uLLi << d;
    // Ld = uLLi << Ld;

    /* signed long long int [long long int standard] */
    LLi = sLLi << b;
    LLi = sLLi << c;
    LLi = sLLi << uc;
    LLi = sLLi << sc;
    LLi = sLLi << i;
    LLi = sLLi << ui;
    LLi = sLLi << si;
    LLi = sLLi << Si;
    LLi = sLLi << uSi;
    LLi = sLLi << sSi;
    LLi = sLLi << Li;
    LLi = sLLi << uLi;
    LLi = sLLi << sLi;
    LLi = sLLi << LLi;
    uLLi = sLLi << uLLi;
    LLi = sLLi << sLLi;
    // f = sLLi << f;
    // d = sLLi << d;
    // Ld = sLLi << Ld;

    /* float */
    // f = f << b;
    // f = f << c;
    // f = f << uc;
    // f = f << sc;
    // f = f << i;
    // f = f << ui;
    // f = f << si;
    // f = f << Si;
    // f = f << uSi;
    // f = f << sSi;
    // f = f << Li;
    // f = f << uLi;
    // f = f << sLi;
    // f = f << LLi;
    // f = f << uLLi;
    // f = f << sLLi;
    // f = f << f;
    // d = f << d;
    // Ld = f << Ld;

    /* double */
    // d = d << b;
    // d = d << c;
    // d = d << uc;
    // d = d << sc;
    // d = d << i;
    // d = d << ui;
    // d = d << si;
    // d = d << Si;
    // d = d << uSi;
    // d = d << sSi;
    // d = d << Li;
    // d = d << uLi;
    // d = d << sLi;
    // d = d << LLi;
    // d = d << uLLi;
    // d = d << sLLi;
    // d = d << f;
    // d = d << d;
    // Ld = d << Ld;

    /* long double */
    // Ld = Ld << b;
    // Ld = Ld << c;
    // Ld = Ld << uc;
    // Ld = Ld << sc;
    // Ld = Ld << i;
    // Ld = Ld << ui;
    // Ld = Ld << si;
    // Ld = Ld << Si;
    // Ld = Ld << uSi;
    // Ld = Ld << sSi;
    // Ld = Ld << Li;
    // Ld = Ld << uLi;
    // Ld = Ld << sLi;
    // Ld = Ld << LLi;
    // Ld = Ld << uLLi;
    // Ld = Ld << sLLi;
    // Ld = Ld << f;
    // Ld = Ld << d;
    // Ld = Ld << Ld;


    /*
     * Bitwise right SHIFT
     */

    /* _Bool [int standard] */
    i = b >> b;
    i = b >> c;
    i = b >> uc;
    i = b >> sc;
    i = b >> i;
    ui = b >> ui;
    i = b >> si;
    i = b >> Si;
    i = b >> uSi;
    i = b >> sSi;
    Li = b >> Li;
    uLi = b >> uLi;
    Li = b >> sLi;
    LLi = b >> LLi;
    uLLi = b >> uLLi;
    LLi = b >> sLLi;
    // f = b >> f;
    // d = b >> d;
    // Ld = b >> Ld;

    /* char [int standard] */
    i = c >> b;
    i = c >> c;
    i = c >> uc;
    i = c >> sc;
    i = c >> i;
    ui = c >> ui;
    i = c >> si;
    i = c >> Si;
    i = c >> uSi;
    i = c >> sSi;
    Li = c >> Li;
    uLi = c >> uLi;
    Li = c >> sLi;
    LLi = c >> LLi;
    uLLi = c >> uLLi;
    LLi = c >> sLLi;
    // f = c >> f;
    // d = c >> d;
    // Ld = c >> Ld;

    /* unsigned char [int standard] */
    i = uc >> b;
    i = uc >> c;
    i = uc >> uc;
    i = uc >> sc;
    i = uc >> i;
    ui = uc >> ui;
    i = uc >> si;
    i = uc >> Si;
    i = uc >> uSi;
    i = uc >> sSi;
    Li = uc >> Li;
    uLi = uc >> uLi;
    Li = uc >> sLi;
    LLi = uc >> LLi;
    uLLi = uc >> uLLi;
    LLi = uc >> sLLi;
    // f = uc >> f;
    // d = uc >> d;
    // Ld = uc >> Ld;

    /* signed char [int standard] */
    i = sc >> b;
    i = sc >> c;
    i = sc >> uc;
    i = sc >> sc;
    i = sc >> i;
    ui = sc >> ui;
    i = sc >> si;
    i = sc >> Si;
    i = sc >> uSi;
    i = sc >> sSi;
    Li = sc >> Li;
    uLi = sc >> uLi;
    Li = sc >> sLi;
    LLi = sc >> LLi;
    uLLi = sc >> uLLi;
    LLi = sc >> sLLi;
    // f = sc >> f;
    // d = sc >> d;
    // Ld = sc >> Ld;

    /* int [int standard] */
    i = i >> b;
    i = i >> c;
    i = i >> uc;
    i = i >> sc;
    i = i >> i;
    ui = i >> ui;
    i = i >> si;
    i = i >> Si;
    i = i >> uSi;
    i = i >> sSi;
    Li = i >> Li;
    uLi = i >> uLi;
    Li = i >> sLi;
    LLi = i >> LLi;
    uLLi = i >> uLLi;
    LLi = i >> sLLi;
    // f = i >> f;
    // d = i >> d;
    // Ld = i >> Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    ui = ui >> b;
    ui = ui >> c;
    ui = ui >> uc;
    ui = ui >> sc;
    ui = ui >> i;
    ui = ui >> ui;
    ui = ui >> si;
    ui = ui >> Si;
    ui = ui >> uSi;
    ui = ui >> sSi;
    uLi = ui >> Li;
    uLi = ui >> uLi;
    uLi = ui >> sLi;
    LLi = ui >> LLi;
    uLLi = ui >> uLLi;
    LLi = ui >> sLLi;
    // f = ui >> f;
    // d = ui >> d;
    // Ld = ui >> Ld;

    /* signed int [int standard] */
    i = si >> b;
    i = si >> c;
    i = si >> uc;
    i = si >> sc;
    i = si >> i;
    ui = si >> ui;
    i = si >> si;
    i = si >> Si;
    i = si >> uSi;
    i = si >> sSi;
    Li = si >> Li;
    uLi = si >> uLi;
    Li = si >> sLi;
    LLi = si >> LLi;
    uLLi = si >> uLLi;
    LLi = si >> sLLi;
    // f = si >> f;
    // d = si >> d;
    // Ld = si >> Ld;

    /* short int [int standard] */
    i = Si >> b;
    i = Si >> c;
    i = Si >> uc;
    i = Si >> sc;
    i = Si >> i;
    ui = Si >> ui;
    i = Si >> si;
    i = Si >> Si;
    i = Si >> uSi;
    i = Si >> sSi;
    Li = Si >> Li;
    uLi = Si >> uLi;
    Li = Si >> sLi;
    LLi = Si >> LLi;
    uLLi = Si >> uLLi;
    LLi = Si >> sLLi;
    // f = Si >> f;
    // d = Si >> d;
    // Ld = Si >> Ld;

    /* unsigned short int [int standard] */
    i = uSi >> b;
    i = uSi >> c;
    i = uSi >> uc;
    i = uSi >> sc;
    i = uSi >> i;
    ui = uSi >> ui;
    i = uSi >> si;
    i = uSi >> Si;
    i = uSi >> uSi;
    i = uSi >> sSi;
    Li = uSi >> Li;
    uLi = uSi >> uLi;
    Li = uSi >> sLi;
    LLi = uSi >> LLi;
    uLLi = uSi >> uLLi;
    LLi = uSi >> sLLi;
    // f = uSi >> f;
    // d = uSi >> d;
    // Ld = uSi >> Ld;

    /* signed short int [int standard] */
    i = sSi >> b;
    i = sSi >> c;
    i = sSi >> uc;
    i = sSi >> sc;
    i = sSi >> i;
    ui = sSi >> ui;
    i = sSi >> si;
    i = sSi >> Si;
    i = sSi >> uSi;
    i = sSi >> sSi;
    Li = sSi >> Li;
    uLi = sSi >> uLi;
    Li = sSi >> sLi;
    LLi = sSi >> LLi;
    uLLi = sSi >> uLLi;
    LLi = sSi >> sLLi;
    // f = sSi >> f;
    // d = sSi >> d;
    // Ld = sSi >> Ld;

    /* long int [long int standard] */
    Li = Li >> b;
    Li = Li >> c;
    Li = Li >> uc;
    Li = Li >> sc;
    Li = Li >> i;
    uLi = Li >> ui;
    Li = Li >> si;
    Li = Li >> Si;
    Li = Li >> uSi;
    Li = Li >> sSi;
    Li = Li >> Li;
    uLi = Li >> uLi;
    Li = Li >> sLi;
    LLi = Li >> LLi;
    uLLi = Li >> uLLi;
    LLi = Li >> sLLi;
    // f = Li >> f;
    // d = Li >> d;
    // Ld = Li >> Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    uLi = uLi >> b;
    uLi = uLi >> c;
    uLi = uLi >> uc;
    uLi = uLi >> sc;
    uLi = uLi >> i;
    uLi = uLi >> ui;
    uLi = uLi >> si;
    uLi = uLi >> Si;
    uLi = uLi >> uSi;
    uLi = uLi >> sSi;
    uLi = uLi >> Li;
    uLi = uLi >> uLi;
    uLi = uLi >> sLi;
    LLi = uLi >> LLi;
    uLLi = uLi >> uLLi;
    LLi = uLi >> sLLi;
    // f = uLi >> f;
    // d = uLi >> d;
    // Ld = uLi >> Ld;

    /* signed long int [long int standard] */
    Li = sLi >> b;
    Li = sLi >> c;
    Li = sLi >> uc;
    Li = sLi >> sc;
    Li = sLi >> i;
    uLi = sLi >> ui;
    Li = sLi >> si;
    Li = sLi >> Si;
    Li = sLi >> uSi;
    Li = sLi >> sSi;
    Li = sLi >> Li;
    uLi = sLi >> uLi;
    Li = sLi >> sLi;
    LLi = sLi >> LLi;
    uLLi = sLi >> uLLi;
    LLi = sLi >> sLLi;
    // f = sLi >> f;
    // d = sLi >> d;
    // Ld = sLi >> Ld;

    /* long long int [long long int standard] */
    LLi = LLi >> b;
    LLi = LLi >> c;
    LLi = LLi >> uc;
    LLi = LLi >> sc;
    LLi = LLi >> i;
    LLi = LLi >> ui;
    LLi = LLi >> si;
    LLi = LLi >> Si;
    LLi = LLi >> uSi;
    LLi = LLi >> sSi;
    LLi = LLi >> Li;
    LLi = LLi >> uLi;
    LLi = LLi >> sLi;
    LLi = LLi >> LLi;
    uLLi = LLi >> uLLi;
    LLi = LLi >> sLLi;
    // f = LLi >> f;
    // d = LLi >> d;
    // Ld = LLi >> Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    uLLi = uLLi >> b;
    uLLi = uLLi >> c;
    uLLi = uLLi >> uc;
    uLLi = uLLi >> sc;
    uLLi = uLLi >> i;
    uLLi = uLLi >> ui;
    uLLi = uLLi >> si;
    uLLi = uLLi >> Si;
    uLLi = uLLi >> uSi;
    uLLi = uLLi >> sSi;
    uLLi = uLLi >> Li;
    uLLi = uLLi >> uLi;
    uLLi = uLLi >> sLi;
    uLLi = uLLi >> LLi;
    uLLi = uLLi >> uLLi;
    uLLi = uLLi >> sLLi;
    // f = uLLi >> f;
    // d = uLLi >> d;
    // Ld = uLLi >> Ld;

    /* signed long long int [long long int standard] */
    LLi = sLLi >> b;
    LLi = sLLi >> c;
    LLi = sLLi >> uc;
    LLi = sLLi >> sc;
    LLi = sLLi >> i;
    LLi = sLLi >> ui;
    LLi = sLLi >> si;
    LLi = sLLi >> Si;
    LLi = sLLi >> uSi;
    LLi = sLLi >> sSi;
    LLi = sLLi >> Li;
    LLi = sLLi >> uLi;
    LLi = sLLi >> sLi;
    LLi = sLLi >> LLi;
    uLLi = sLLi >> uLLi;
    LLi = sLLi >> sLLi;
    // f = sLLi >> f;
    // d = sLLi >> d;
    // Ld = sLLi >> Ld;

    /* float */
    // f = f >> b;
    // f = f >> c;
    // f = f >> uc;
    // f = f >> sc;
    // f = f >> i;
    // f = f >> ui;
    // f = f >> si;
    // f = f >> Si;
    // f = f >> uSi;
    // f = f >> sSi;
    // f = f >> Li;
    // f = f >> uLi;
    // f = f >> sLi;
    // f = f >> LLi;
    // f = f >> uLLi;
    // f = f >> sLLi;
    // f = f >> f;
    // d = f >> d;
    // Ld = f >> Ld;

    /* double */
    // d = d >> b;
    // d = d >> c;
    // d = d >> uc;
    // d = d >> sc;
    // d = d >> i;
    // d = d >> ui;
    // d = d >> si;
    // d = d >> Si;
    // d = d >> uSi;
    // d = d >> sSi;
    // d = d >> Li;
    // d = d >> uLi;
    // d = d >> sLi;
    // d = d >> LLi;
    // d = d >> uLLi;
    // d = d >> sLLi;
    // d = d >> f;
    // d = d >> d;
    // Ld = d >> Ld;

    /* long double */
    // Ld = Ld >> b;
    // Ld = Ld >> c;
    // Ld = Ld >> uc;
    // Ld = Ld >> sc;
    // Ld = Ld >> i;
    // Ld = Ld >> ui;
    // Ld = Ld >> si;
    // Ld = Ld >> Si;
    // Ld = Ld >> uSi;
    // Ld = Ld >> sSi;
    // Ld = Ld >> Li;
    // Ld = Ld >> uLi;
    // Ld = Ld >> sLi;
    // Ld = Ld >> LLi;
    // Ld = Ld >> uLLi;
    // Ld = Ld >> sLLi;
    // Ld = Ld >> f;
    // Ld = Ld >> d;
    // Ld = Ld >> Ld;


    /*
     * Bitwise NOT
     */

    #pragma warning(push)
    #pragma warning(disable: 4804)

    /* _Bool */
    i = ~ b;

    /* char */
    i = ~ c;

    /* unsigned char */
    i = ~ uc;

    /* signed char */
    i = ~ sc;

    /* int */
    i = ~ i;

    /* unsigned int */
    ui = ~ ui;

    /* signed int */
    i = ~ si;

    /* short int */
    i = ~ Si;

    /* unsigned short int */
    i = ~ uSi;

    /* signed short */
    i = ~ sSi;

    /* long int */
    Li = ~ Li;

    /* unsigned long int */
    uLi = ~ uLi;

    /* signed long int */
    Li = ~ sLi;

    /* long long int */
    LLi = ~ LLi;

    /* unsigned long long int */
    uLLi = ~ uLLi;

    /* signed long long int */
    LLi = ~ sLLi;

    /* float */
    // f = ~ f;

    /* double */
    // d = ~ d;

    /* long double */
    // Ld = ~ Ld;

    #pragma warning(pop)


    /***************************************************************************
     * Logical operations
     ***/

    /*
     * Logical AND
     */

    /* _Bool [int standard] */
    i = b && b;
    i = b && c;
    i = b && uc;
    i = b && sc;
    i = b && i;
    i = b && ui;
    i = b && si;
    i = b && Si;
    i = b && uSi;
    i = b && sSi;
    i = b && Li;
    i = b && uLi;
    i = b && sLi;
    i = b && LLi;
    i = b && uLLi;
    i = b && sLLi;
    i = b && f;
    i = b && d;
    i = b && Ld;

    /* char [int standard] */
    i = c && b;
    i = c && c;
    i = c && uc;
    i = c && sc;
    i = c && i;
    i = c && ui;
    i = c && si;
    i = c && Si;
    i = c && uSi;
    i = c && sSi;
    i = c && Li;
    i = c && uLi;
    i = c && sLi;
    i = c && LLi;
    i = c && uLLi;
    i = c && sLLi;
    i = c && f;
    i = c && d;
    i = c && Ld;

    /* unsigned char [int standard] */
    i = uc && b;
    i = uc && c;
    i = uc && uc;
    i = uc && sc;
    i = uc && i;
    i = uc && ui;
    i = uc && si;
    i = uc && Si;
    i = uc && uSi;
    i = uc && sSi;
    i = uc && Li;
    i = uc && uLi;
    i = uc && sLi;
    i = uc && LLi;
    i = uc && uLLi;
    i = uc && sLLi;
    i = uc && f;
    i = uc && d;
    i = uc && Ld;

    /* signed char [int standard] */
    i = sc && b;
    i = sc && c;
    i = sc && uc;
    i = sc && sc;
    i = sc && i;
    i = sc && ui;
    i = sc && si;
    i = sc && Si;
    i = sc && uSi;
    i = sc && sSi;
    i = sc && Li;
    i = sc && uLi;
    i = sc && sLi;
    i = sc && LLi;
    i = sc && uLLi;
    i = sc && sLLi;
    i = sc && f;
    i = sc && d;
    i = sc && Ld;

    /* int [int standard] */
    i = i && b;
    i = i && c;
    i = i && uc;
    i = i && sc;
    i = i && i;
    i = i && ui;
    i = i && si;
    i = i && Si;
    i = i && uSi;
    i = i && sSi;
    i = i && Li;
    i = i && uLi;
    i = i && sLi;
    i = i && LLi;
    i = i && uLLi;
    i = i && sLLi;
    i = i && f;
    i = i && d;
    i = i && Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    i = ui && b;
    i = ui && c;
    i = ui && uc;
    i = ui && sc;
    i = ui && i;
    i = ui && ui;
    i = ui && si;
    i = ui && Si;
    i = ui && uSi;
    i = ui && sSi;
    i = ui && Li;
    i = ui && uLi;
    i = ui && sLi;
    i = ui && LLi;
    i = ui && uLLi;
    i = ui && sLLi;
    i = ui && f;
    i = ui && d;
    i = ui && Ld;

    /* signed int [int standard] */
    i = si && b;
    i = si && c;
    i = si && uc;
    i = si && sc;
    i = si && i;
    i = si && ui;
    i = si && si;
    i = si && Si;
    i = si && uSi;
    i = si && sSi;
    i = si && Li;
    i = si && uLi;
    i = si && sLi;
    i = si && LLi;
    i = si && uLLi;
    i = si && sLLi;
    i = si && f;
    i = si && d;
    i = si && Ld;

    /* short int [int standard] */
    i = Si && b;
    i = Si && c;
    i = Si && uc;
    i = Si && sc;
    i = Si && i;
    i = Si && ui;
    i = Si && si;
    i = Si && Si;
    i = Si && uSi;
    i = Si && sSi;
    i = Si && Li;
    i = Si && uLi;
    i = Si && sLi;
    i = Si && LLi;
    i = Si && uLLi;
    i = Si && sLLi;
    i = Si && f;
    i = Si && d;
    i = Si && Ld;

    /* unsigned short int [int standard] */
    i = uSi && b;
    i = uSi && c;
    i = uSi && uc;
    i = uSi && sc;
    i = uSi && i;
    i = uSi && ui;
    i = uSi && si;
    i = uSi && Si;
    i = uSi && uSi;
    i = uSi && sSi;
    i = uSi && Li;
    i = uSi && uLi;
    i = uSi && sLi;
    i = uSi && LLi;
    i = uSi && uLLi;
    i = uSi && sLLi;
    i = uSi && f;
    i = uSi && d;
    i = uSi && Ld;

    /* signed short int [int standard] */
    i = sSi && b;
    i = sSi && c;
    i = sSi && uc;
    i = sSi && sc;
    i = sSi && i;
    i = sSi && ui;
    i = sSi && si;
    i = sSi && Si;
    i = sSi && uSi;
    i = sSi && sSi;
    i = sSi && Li;
    i = sSi && uLi;
    i = sSi && sLi;
    i = sSi && LLi;
    i = sSi && uLLi;
    i = sSi && sLLi;
    i = sSi && f;
    i = sSi && d;
    i = sSi && Ld;

    /* long int [long int standard] */
    i = Li && b;
    i = Li && c;
    i = Li && uc;
    i = Li && sc;
    i = Li && i;
    i = Li && ui;
    i = Li && si;
    i = Li && Si;
    i = Li && uSi;
    i = Li && sSi;
    i = Li && Li;
    i = Li && uLi;
    i = Li && sLi;
    i = Li && LLi;
    i = Li && uLLi;
    i = Li && sLLi;
    i = Li && f;
    i = Li && d;
    i = Li && Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    i = uLi && b;
    i = uLi && c;
    i = uLi && uc;
    i = uLi && sc;
    i = uLi && i;
    i = uLi && ui;
    i = uLi && si;
    i = uLi && Si;
    i = uLi && uSi;
    i = uLi && sSi;
    i = uLi && Li;
    i = uLi && uLi;
    i = uLi && sLi;
    i = uLi && LLi;
    i = uLi && uLLi;
    i = uLi && sLLi;
    i = uLi && f;
    i = uLi && d;
    i = uLi && Ld;

    /* signed long int [long int standard] */
    i = sLi && b;
    i = sLi && c;
    i = sLi && uc;
    i = sLi && sc;
    i = sLi && i;
    i = sLi && ui;
    i = sLi && si;
    i = sLi && Si;
    i = sLi && uSi;
    i = sLi && sSi;
    i = sLi && Li;
    i = sLi && uLi;
    i = sLi && sLi;
    i = sLi && LLi;
    i = sLi && uLLi;
    i = sLi && sLLi;
    i = sLi && f;
    i = sLi && d;
    i = sLi && Ld;

    /* long long int [long long int standard] */
    i = LLi && b;
    i = LLi && c;
    i = LLi && uc;
    i = LLi && sc;
    i = LLi && i;
    i = LLi && ui;
    i = LLi && si;
    i = LLi && Si;
    i = LLi && uSi;
    i = LLi && sSi;
    i = LLi && Li;
    i = LLi && uLi;
    i = LLi && sLi;
    i = LLi && LLi;
    i = LLi && uLLi;
    i = LLi && sLLi;
    i = LLi && f;
    i = LLi && d;
    i = LLi && Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    i = uLLi && b;
    i = uLLi && c;
    i = uLLi && uc;
    i = uLLi && sc;
    i = uLLi && i;
    i = uLLi && ui;
    i = uLLi && si;
    i = uLLi && Si;
    i = uLLi && uSi;
    i = uLLi && sSi;
    i = uLLi && Li;
    i = uLLi && uLi;
    i = uLLi && sLi;
    i = uLLi && LLi;
    i = uLLi && uLLi;
    i = uLLi && sLLi;
    i = uLLi && f;
    i = uLLi && d;
    i = uLLi && Ld;

    /* signed long long int [long long int standard] */
    i = sLLi && b;
    i = sLLi && c;
    i = sLLi && uc;
    i = sLLi && sc;
    i = sLLi && i;
    i = sLLi && ui;
    i = sLLi && si;
    i = sLLi && Si;
    i = sLLi && uSi;
    i = sLLi && sSi;
    i = sLLi && Li;
    i = sLLi && uLi;
    i = sLLi && sLi;
    i = sLLi && LLi;
    i = sLLi && uLLi;
    i = sLLi && sLLi;
    i = sLLi && f;
    i = sLLi && d;
    i = sLLi && Ld;

    /* float */
    i = f && b;
    i = f && c;
    i = f && uc;
    i = f && sc;
    i = f && i;
    i = f && ui;
    i = f && si;
    i = f && Si;
    i = f && uSi;
    i = f && sSi;
    i = f && Li;
    i = f && uLi;
    i = f && sLi;
    i = f && LLi;
    i = f && uLLi;
    i = f && sLLi;
    i = f && f;
    i = f && d;
    i = f && Ld;

    /* double */
    i = d && b;
    i = d && c;
    i = d && uc;
    i = d && sc;
    i = d && i;
    i = d && ui;
    i = d && si;
    i = d && Si;
    i = d && uSi;
    i = d && sSi;
    i = d && Li;
    i = d && uLi;
    i = d && sLi;
    i = d && LLi;
    i = d && uLLi;
    i = d && sLLi;
    i = d && f;
    i = d && d;
    i = d && Ld;

    /* long double */
    i = Ld && b;
    i = Ld && c;
    i = Ld && uc;
    i = Ld && sc;
    i = Ld && i;
    i = Ld && ui;
    i = Ld && si;
    i = Ld && Si;
    i = Ld && uSi;
    i = Ld && sSi;
    i = Ld && Li;
    i = Ld && uLi;
    i = Ld && sLi;
    i = Ld && LLi;
    i = Ld && uLLi;
    i = Ld && sLLi;
    i = Ld && f;
    i = Ld && d;
    i = Ld && Ld;


    /*
     * Logical OR
     */

    /* _Bool [int standard] */
    i = b || b;
    i = b || c;
    i = b || uc;
    i = b || sc;
    i = b || i;
    i = b || ui;
    i = b || si;
    i = b || Si;
    i = b || uSi;
    i = b || sSi;
    i = b || Li;
    i = b || uLi;
    i = b || sLi;
    i = b || LLi;
    i = b || uLLi;
    i = b || sLLi;
    i = b || f;
    i = b || d;
    i = b || Ld;

    /* char [int standard] */
    i = c || b;
    i = c || c;
    i = c || uc;
    i = c || sc;
    i = c || i;
    i = c || ui;
    i = c || si;
    i = c || Si;
    i = c || uSi;
    i = c || sSi;
    i = c || Li;
    i = c || uLi;
    i = c || sLi;
    i = c || LLi;
    i = c || uLLi;
    i = c || sLLi;
    i = c || f;
    i = c || d;
    i = c || Ld;

    /* unsigned char [int standard] */
    i = uc || b;
    i = uc || c;
    i = uc || uc;
    i = uc || sc;
    i = uc || i;
    i = uc || ui;
    i = uc || si;
    i = uc || Si;
    i = uc || uSi;
    i = uc || sSi;
    i = uc || Li;
    i = uc || uLi;
    i = uc || sLi;
    i = uc || LLi;
    i = uc || uLLi;
    i = uc || sLLi;
    i = uc || f;
    i = uc || d;
    i = uc || Ld;

    /* signed char [int standard] */
    i = sc || b;
    i = sc || c;
    i = sc || uc;
    i = sc || sc;
    i = sc || i;
    i = sc || ui;
    i = sc || si;
    i = sc || Si;
    i = sc || uSi;
    i = sc || sSi;
    i = sc || Li;
    i = sc || uLi;
    i = sc || sLi;
    i = sc || LLi;
    i = sc || uLLi;
    i = sc || sLLi;
    i = sc || f;
    i = sc || d;
    i = sc || Ld;

    /* int [int standard] */
    i = i || b;
    i = i || c;
    i = i || uc;
    i = i || sc;
    i = i || i;
    i = i || ui;
    i = i || si;
    i = i || Si;
    i = i || uSi;
    i = i || sSi;
    i = i || Li;
    i = i || uLi;
    i = i || sLi;
    i = i || LLi;
    i = i || uLLi;
    i = i || sLLi;
    i = i || f;
    i = i || d;
    i = i || Ld;

    /* unsigned int [int standard
       + subs(int, unsigned int)
       + subs(long int, unsigned long int)] */
    i = ui || b;
    i = ui || c;
    i = ui || uc;
    i = ui || sc;
    i = ui || i;
    i = ui || ui;
    i = ui || si;
    i = ui || Si;
    i = ui || uSi;
    i = ui || sSi;
    i = ui || Li;
    i = ui || uLi;
    i = ui || sLi;
    i = ui || LLi;
    i = ui || uLLi;
    i = ui || sLLi;
    i = ui || f;
    i = ui || d;
    i = ui || Ld;

    /* signed int [int standard] */
    i = si || b;
    i = si || c;
    i = si || uc;
    i = si || sc;
    i = si || i;
    i = si || ui;
    i = si || si;
    i = si || Si;
    i = si || uSi;
    i = si || sSi;
    i = si || Li;
    i = si || uLi;
    i = si || sLi;
    i = si || LLi;
    i = si || uLLi;
    i = si || sLLi;
    i = si || f;
    i = si || d;
    i = si || Ld;

    /* short int [int standard] */
    i = Si || b;
    i = Si || c;
    i = Si || uc;
    i = Si || sc;
    i = Si || i;
    i = Si || ui;
    i = Si || si;
    i = Si || Si;
    i = Si || uSi;
    i = Si || sSi;
    i = Si || Li;
    i = Si || uLi;
    i = Si || sLi;
    i = Si || LLi;
    i = Si || uLLi;
    i = Si || sLLi;
    i = Si || f;
    i = Si || d;
    i = Si || Ld;

    /* unsigned short int [int standard] */
    i = uSi || b;
    i = uSi || c;
    i = uSi || uc;
    i = uSi || sc;
    i = uSi || i;
    i = uSi || ui;
    i = uSi || si;
    i = uSi || Si;
    i = uSi || uSi;
    i = uSi || sSi;
    i = uSi || Li;
    i = uSi || uLi;
    i = uSi || sLi;
    i = uSi || LLi;
    i = uSi || uLLi;
    i = uSi || sLLi;
    i = uSi || f;
    i = uSi || d;
    i = uSi || Ld;

    /* signed short int [int standard] */
    i = sSi || b;
    i = sSi || c;
    i = sSi || uc;
    i = sSi || sc;
    i = sSi || i;
    i = sSi || ui;
    i = sSi || si;
    i = sSi || Si;
    i = sSi || uSi;
    i = sSi || sSi;
    i = sSi || Li;
    i = sSi || uLi;
    i = sSi || sLi;
    i = sSi || LLi;
    i = sSi || uLLi;
    i = sSi || sLLi;
    i = sSi || f;
    i = sSi || d;
    i = sSi || Ld;

    /* long int [long int standard] */
    i = Li || b;
    i = Li || c;
    i = Li || uc;
    i = Li || sc;
    i = Li || i;
    i = Li || ui;
    i = Li || si;
    i = Li || Si;
    i = Li || uSi;
    i = Li || sSi;
    i = Li || Li;
    i = Li || uLi;
    i = Li || sLi;
    i = Li || LLi;
    i = Li || uLLi;
    i = Li || sLLi;
    i = Li || f;
    i = Li || d;
    i = Li || Ld;

    /* unsigned long int [long int standard
       + subs(long int, unsigned long int)] */
    i = uLi || b;
    i = uLi || c;
    i = uLi || uc;
    i = uLi || sc;
    i = uLi || i;
    i = uLi || ui;
    i = uLi || si;
    i = uLi || Si;
    i = uLi || uSi;
    i = uLi || sSi;
    i = uLi || Li;
    i = uLi || uLi;
    i = uLi || sLi;
    i = uLi || LLi;
    i = uLi || uLLi;
    i = uLi || sLLi;
    i = uLi || f;
    i = uLi || d;
    i = uLi || Ld;

    /* signed long int [long int standard] */
    i = sLi || b;
    i = sLi || c;
    i = sLi || uc;
    i = sLi || sc;
    i = sLi || i;
    i = sLi || ui;
    i = sLi || si;
    i = sLi || Si;
    i = sLi || uSi;
    i = sLi || sSi;
    i = sLi || Li;
    i = sLi || uLi;
    i = sLi || sLi;
    i = sLi || LLi;
    i = sLi || uLLi;
    i = sLi || sLLi;
    i = sLi || f;
    i = sLi || d;
    i = sLi || Ld;

    /* long long int [long long int standard] */
    i = LLi || b;
    i = LLi || c;
    i = LLi || uc;
    i = LLi || sc;
    i = LLi || i;
    i = LLi || ui;
    i = LLi || si;
    i = LLi || Si;
    i = LLi || uSi;
    i = LLi || sSi;
    i = LLi || Li;
    i = LLi || uLi;
    i = LLi || sLi;
    i = LLi || LLi;
    i = LLi || uLLi;
    i = LLi || sLLi;
    i = LLi || f;
    i = LLi || d;
    i = LLi || Ld;

    /* unsigned long long int [long long int standard
       + subs(long long int, unsigned long long int)] */

    i = uLLi || b;
    i = uLLi || c;
    i = uLLi || uc;
    i = uLLi || sc;
    i = uLLi || i;
    i = uLLi || ui;
    i = uLLi || si;
    i = uLLi || Si;
    i = uLLi || uSi;
    i = uLLi || sSi;
    i = uLLi || Li;
    i = uLLi || uLi;
    i = uLLi || sLi;
    i = uLLi || LLi;
    i = uLLi || uLLi;
    i = uLLi || sLLi;
    i = uLLi || f;
    i = uLLi || d;
    i = uLLi || Ld;

    /* signed long long int [long long int standard] */
    i = sLLi || b;
    i = sLLi || c;
    i = sLLi || uc;
    i = sLLi || sc;
    i = sLLi || i;
    i = sLLi || ui;
    i = sLLi || si;
    i = sLLi || Si;
    i = sLLi || uSi;
    i = sLLi || sSi;
    i = sLLi || Li;
    i = sLLi || uLi;
    i = sLLi || sLi;
    i = sLLi || LLi;
    i = sLLi || uLLi;
    i = sLLi || sLLi;
    i = sLLi || f;
    i = sLLi || d;
    i = sLLi || Ld;

    /* float */
    i = f || b;
    i = f || c;
    i = f || uc;
    i = f || sc;
    i = f || i;
    i = f || ui;
    i = f || si;
    i = f || Si;
    i = f || uSi;
    i = f || sSi;
    i = f || Li;
    i = f || uLi;
    i = f || sLi;
    i = f || LLi;
    i = f || uLLi;
    i = f || sLLi;
    i = f || f;
    i = f || d;
    i = f || Ld;

    /* double */
    i = d || b;
    i = d || c;
    i = d || uc;
    i = d || sc;
    i = d || i;
    i = d || ui;
    i = d || si;
    i = d || Si;
    i = d || uSi;
    i = d || sSi;
    i = d || Li;
    i = d || uLi;
    i = d || sLi;
    i = d || LLi;
    i = d || uLLi;
    i = d || sLLi;
    i = d || f;
    i = d || d;
    i = d || Ld;

    /* long double */
    i = Ld || b;
    i = Ld || c;
    i = Ld || uc;
    i = Ld || sc;
    i = Ld || i;
    i = Ld || ui;
    i = Ld || si;
    i = Ld || Si;
    i = Ld || uSi;
    i = Ld || sSi;
    i = Ld || Li;
    i = Ld || uLi;
    i = Ld || sLi;
    i = Ld || LLi;
    i = Ld || uLLi;
    i = Ld || sLLi;
    i = Ld || f;
    i = Ld || d;
    i = Ld || Ld;


    /*
     * Logical NOT
     */

    /* _Bool */
    i = ! b;

    /* char */
    i = ! c;

    /* unsigned char */
    i = ! uc;

    /* signed char */
    i = ! sc;

    /* int */
    i = ! i;

    /* unsigned int */
    i = ! ui;

    /* signed int */
    i = ! si;

    /* short int */
    i = ! Si;

    /* unsigned short int */
    i = ! uSi;

    /* signed short */
    i = ! sSi;

    /* long int */
    i = ! Li;

    /* unsigned long int */
    i = ! uLi;

    /* signed long int */
    i = ! sLi;

    /* long long int */
    i = ! LLi;

    /* unsigned long long int */

    i = ! uLLi;

    /* signed long long int */
    i = ! sLLi;

    /* float */
    i = ! f;

    /* double */
    i = ! d;

    /* long double */
    i = ! Ld;


    /***************************************************************************
     * Incremente/Decrement operators
     ***/

    /*
     * Prefix INC
     */

    /* _Bool */
    b = ++ b;

    /* char */
    c = ++ c;

    /* unsigned char */
    uc = ++ uc;

    /* signed char */
    c = ++ sc;

    /* int */
    i = ++ i;

    /* unsigned int */
    ui = ++ ui;

    /* signed int */
    i = ++ si;

    /* short int */
    Si = ++ Si;

    /* unsigned short int */
    uSi = ++ uSi;

    /* signed short */
    Si = ++ sSi;

    /* long int */
    Li = ++ Li;

    /* unsigned long int */
    uLi = ++ uLi;

    /* signed long int */
    Li = ++ sLi;

    /* long long int */
    LLi = ++ LLi;

    /* unsigned long long int */
    uLLi = ++ uLLi;

    /* signed long long int */
    LLi = ++ sLLi;

    /* float */
    f = ++ f;

    /* double */
    d = ++ d;

    /* long double */
    Ld = ++ Ld;


    /*
     * Prefix DEC
     */

    /* _Bool */
    b = -- b;

    /* char */
    c = -- c;

    /* unsigned char */
    uc = -- uc;

    /* signed char */
    c = -- sc;

    /* int */
    i = -- i;

    /* unsigned int */
    ui = -- ui;

    /* signed int */
    i = -- si;

    /* short int */
    Si = -- Si;

    /* unsigned short int */
    uSi = -- uSi;

    /* signed short */
    Si = -- sSi;

    /* long int */
    Li = -- Li;

    /* unsigned long int */
    uLi = -- uLi;

    /* signed long int */
    Li = -- sLi;

    /* long long int */
    LLi = -- LLi;

    /* unsigned long long int */
    uLLi = -- uLLi;

    /* signed long long int */
    LLi = -- sLLi;

    /* float */
    f = -- f;

    /* double */
    d = -- d;

    /* long double */
    Ld = -- Ld;


    /*
     * Postfix INC
     */

    /* _Bool */
    b = b ++;

    /* char */
    c = c ++;

    /* unsigned char */
    uc = uc ++;

    /* signed char */
    c = sc ++;

    /* int */
    i = i ++;

    /* unsigned int */
    ui = ui ++;

    /* signed int */
    i = si ++;

    /* short int */
    Si = Si ++;

    /* unsigned short int */
    uSi = uSi ++;

    /* signed short */
    Si = sSi ++;

    /* long int */
    Li = Li ++;

    /* unsigned long int */
    uLi = uLi ++;

    /* signed long int */
    Li = sLi ++;

    /* long long int */
    LLi = LLi ++;

    /* unsigned long long int */
    uLLi = uLLi ++;

    /* signed long long int */
    LLi = sLLi ++;

    /* float */
    f = f ++;

    /* double */
    d = d ++;

    /* long double */
    Ld = Ld ++;


    /*
     * Postfix DEC
     */

    /* _Bool */
    b = b --;

    /* char */
    c = c --;

    /* unsigned char */
    uc = uc --;

    /* signed char */
    c = sc --;

    /* int */
    i = i --;

    /* unsigned int */
    ui = ui --;

    /* signed int */
    i = si --;

    /* short int */
    Si = Si --;

    /* unsigned short int */
    uSi = uSi --;

    /* signed short */
    Si = sSi --;

    /* long int */
    Li = Li --;

    /* unsigned long int */
    uLi = uLi --;

    /* signed long int */
    Li = sLi --;

    /* long long int */
    LLi = LLi --;

    /* unsigned long long int */
    uLLi = uLLi --;

    /* signed long long int */
    LLi = sLLi --;

    /* float */
    f = f --;

    /* double */
    d = d --;

    /* long double */
    Ld = Ld --;

    return 0;
}