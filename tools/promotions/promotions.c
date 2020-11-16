// -*- coding: utf-8; mode: c; -*-

/*
 * Based on: https://en.wikipedia.org/wiki/C_data_types
 */

#include <stdio.h>
#include "stdtypes.h"


#define LOG(x) do { \
    printf("DEBUG: %s\n", (x)); \
} (while 0)

int main(void)
{
    bool b = true;
    unsigned char uc = 'B';
    signed char sc = 'C';
    unsigned int ui = 2;
    signed int si = 3;
    unsigned short int uSi = 5;
    signed short int sSi = 6;
    unsigned long int uLi = 8;
    signed long int sLi = 9;
    unsigned long long int uLLi = 8;
    signed long long int sLLi = 9;
    float f = 0.1f;
    double d = 0.2;
    long double Ld = 0.3;
    
    /**************************************************************************/

    

    
    /***
    * bool
    ***/
    
    b = b;
    b = uc;
    b = sc;
    b = ui;
    b = si;
    b = uSi;
    b = sSi;
    b = uLi;
    b = sLi;
    b = uLLi;
    b = sLLi;
    b = f;
    b = d;
    b = Ld;
    

    
    /***
    * unsigned char
    ***/
    
    uc = b;
    uc = uc;
    uc = sc;
/*     uc = ui; warning C4242: '=' : conversión de 'unsigned int' a 'unsigned char'; posible pérdida de datos */
/*     uc = si; warning C4242: '=' : conversión de 'int' a 'unsigned char'; posible pérdida de datos */
/*     uc = uSi; warning C4242: '=' : conversión de 'unsigned short' a 'unsigned char'; posible pérdida de datos */
/*     uc = sSi; warning C4242: '=' : conversión de 'short' a 'unsigned char'; posible pérdida de datos */
/*     uc = uLi; warning C4242: '=' : conversión de 'unsigned long' a 'unsigned char'; posible pérdida de datos */
/*     uc = sLi; warning C4242: '=' : conversión de 'long' a 'unsigned char'; posible pérdida de datos */
/*     uc = uLLi; warning C4242: '=' : conversión de 'unsigned __int64' a 'unsigned char'; posible pérdida de datos */
/*     uc = sLLi; warning C4242: '=' : conversión de '__int64' a 'unsigned char'; posible pérdida de datos */
/*     uc = f; warning C4244: '=' : conversión de 'float' a 'unsigned char'; posible pérdida de datos */
/*     uc = d; warning C4244: '=' : conversión de 'double' a 'unsigned char'; posible pérdida de datos */
/*     uc = Ld; warning C4244: '=' : conversión de 'long double' a 'unsigned char'; posible pérdida de datos */
    

    
    /***
    * signed char
    ***/
    
    sc = b;
    sc = uc;
    sc = sc;
/*     sc = ui; warning C4242: '=' : conversión de 'unsigned int' a 'char'; posible pérdida de datos */
/*     sc = si; warning C4242: '=' : conversión de 'int' a 'char'; posible pérdida de datos */
/*     sc = uSi; warning C4242: '=' : conversión de 'unsigned short' a 'char'; posible pérdida de datos */
/*     sc = sSi; warning C4242: '=' : conversión de 'short' a 'char'; posible pérdida de datos */
/*     sc = uLi; warning C4242: '=' : conversión de 'unsigned long' a 'char'; posible pérdida de datos */
/*     sc = sLi; warning C4242: '=' : conversión de 'long' a 'char'; posible pérdida de datos */
/*     sc = uLLi; warning C4242: '=' : conversión de 'unsigned __int64' a 'char'; posible pérdida de datos */
/*     sc = sLLi; warning C4242: '=' : conversión de '__int64' a 'char'; posible pérdida de datos */
/*     sc = f; warning C4244: '=' : conversión de 'float' a 'char'; posible pérdida de datos */
/*     sc = d; warning C4244: '=' : conversión de 'double' a 'char'; posible pérdida de datos */
/*     sc = Ld; warning C4244: '=' : conversión de 'long double' a 'char'; posible pérdida de datos */
    

    
    /***
    * unsigned int
    ***/
    
    ui = b;
    ui = uc;
    ui = sc;
    ui = ui;
    ui = si;
    ui = uSi;
    ui = sSi;
    ui = uLi;
    ui = sLi;
/*     ui = uLLi; warning C4242: '=' : conversión de 'unsigned __int64' a 'unsigned int'; posible pérdida de datos */
/*     ui = sLLi; warning C4242: '=' : conversión de '__int64' a 'unsigned int'; posible pérdida de datos */
/*     ui = f; warning C4244: '=' : conversión de 'float' a 'unsigned int'; posible pérdida de datos */
/*     ui = d; warning C4244: '=' : conversión de 'double' a 'unsigned int'; posible pérdida de datos */
/*     ui = Ld; warning C4244: '=' : conversión de 'long double' a 'unsigned int'; posible pérdida de datos */
    

    
    /***
    * signed int
    ***/
    
    si = b;
    si = uc;
    si = sc;
    si = ui;
    si = si;
    si = uSi;
    si = sSi;
    si = uLi;
    si = sLi;
/*     si = uLLi; warning C4242: '=' : conversión de 'unsigned __int64' a 'int'; posible pérdida de datos */
/*     si = sLLi; warning C4242: '=' : conversión de '__int64' a 'int'; posible pérdida de datos */
/*     si = f; warning C4244: '=' : conversión de 'float' a 'int'; posible pérdida de datos */
/*     si = d; warning C4244: '=' : conversión de 'double' a 'int'; posible pérdida de datos */
/*     si = Ld; warning C4244: '=' : conversión de 'long double' a 'int'; posible pérdida de datos */
    

    
    /***
    * unsigned short int
    ***/
    
    uSi = b;
    uSi = uc;
    uSi = sc;
/*     uSi = ui; warning C4242: '=' : conversión de 'unsigned int' a 'unsigned short'; posible pérdida de datos */
/*     uSi = si; warning C4242: '=' : conversión de 'int' a 'unsigned short'; posible pérdida de datos */
    uSi = uSi;
    uSi = sSi;
/*     uSi = uLi; warning C4242: '=' : conversión de 'unsigned long' a 'unsigned short'; posible pérdida de datos */
/*     uSi = sLi; warning C4242: '=' : conversión de 'long' a 'unsigned short'; posible pérdida de datos */
/*     uSi = uLLi; warning C4242: '=' : conversión de 'unsigned __int64' a 'unsigned short'; posible pérdida de datos */
/*     uSi = sLLi; warning C4242: '=' : conversión de '__int64' a 'unsigned short'; posible pérdida de datos */
/*     uSi = f; warning C4244: '=' : conversión de 'float' a 'unsigned short'; posible pérdida de datos */
/*     uSi = d; warning C4244: '=' : conversión de 'double' a 'unsigned short'; posible pérdida de datos */
/*     uSi = Ld; warning C4244: '=' : conversión de 'long double' a 'unsigned short'; posible pérdida de datos */
    

    
    /***
    * signed short int
    ***/
    
    sSi = b;
    sSi = uc;
    sSi = sc;
/*     sSi = ui; warning C4242: '=' : conversión de 'unsigned int' a 'short'; posible pérdida de datos */
/*     sSi = si; warning C4242: '=' : conversión de 'int' a 'short'; posible pérdida de datos */
    sSi = uSi;
    sSi = sSi;
/*     sSi = uLi; warning C4242: '=' : conversión de 'unsigned long' a 'short'; posible pérdida de datos */
/*     sSi = sLi; warning C4242: '=' : conversión de 'long' a 'short'; posible pérdida de datos */
/*     sSi = uLLi; warning C4242: '=' : conversión de 'unsigned __int64' a 'short'; posible pérdida de datos */
/*     sSi = sLLi; warning C4242: '=' : conversión de '__int64' a 'short'; posible pérdida de datos */
/*     sSi = f; warning C4244: '=' : conversión de 'float' a 'short'; posible pérdida de datos */
/*     sSi = d; warning C4244: '=' : conversión de 'double' a 'short'; posible pérdida de datos */
/*     sSi = Ld; warning C4244: '=' : conversión de 'long double' a 'short'; posible pérdida de datos */
    

    
    /***
    * unsigned long int
    ***/
    
    uLi = b;
    uLi = uc;
    uLi = sc;
    uLi = ui;
    uLi = si;
    uLi = uSi;
    uLi = sSi;
    uLi = uLi;
    uLi = sLi;
/*     uLi = uLLi; warning C4242: '=' : conversión de 'unsigned __int64' a 'unsigned long'; posible pérdida de datos */
/*     uLi = sLLi; warning C4242: '=' : conversión de '__int64' a 'unsigned long'; posible pérdida de datos */
/*     uLi = f; warning C4244: '=' : conversión de 'float' a 'unsigned long'; posible pérdida de datos */
/*     uLi = d; warning C4244: '=' : conversión de 'double' a 'unsigned long'; posible pérdida de datos */
/*     uLi = Ld; warning C4244: '=' : conversión de 'long double' a 'unsigned long'; posible pérdida de datos */
    

    
    /***
    * signed long int
    ***/
    
    sLi = b;
    sLi = uc;
    sLi = sc;
    sLi = ui;
    sLi = si;
    sLi = uSi;
    sLi = sSi;
    sLi = uLi;
    sLi = sLi;
/*     sLi = uLLi; warning C4242: '=' : conversión de 'unsigned __int64' a 'long'; posible pérdida de datos */
/*     sLi = sLLi; warning C4242: '=' : conversión de '__int64' a 'long'; posible pérdida de datos */
/*     sLi = f; warning C4244: '=' : conversión de 'float' a 'long'; posible pérdida de datos */
/*     sLi = d; warning C4244: '=' : conversión de 'double' a 'long'; posible pérdida de datos */
/*     sLi = Ld; warning C4244: '=' : conversión de 'long double' a 'long'; posible pérdida de datos */
    

    
    /***
    * unsigned long long int
    ***/
    
    uLLi = b;
    uLLi = uc;
    uLLi = sc;
    uLLi = ui;
    uLLi = si;
    uLLi = uSi;
    uLLi = sSi;
    uLLi = uLi;
    uLLi = sLi;
    uLLi = uLLi;
    uLLi = sLLi;
/*     uLLi = f; warning C4244: '=' : conversión de 'float' a 'unsigned __int64'; posible pérdida de datos */
/*     uLLi = d; warning C4244: '=' : conversión de 'double' a 'unsigned __int64'; posible pérdida de datos */
/*     uLLi = Ld; warning C4244: '=' : conversión de 'long double' a 'unsigned __int64'; posible pérdida de datos */
    

    
    /***
    * signed long long int
    ***/
    
    sLLi = b;
    sLLi = uc;
    sLLi = sc;
    sLLi = ui;
    sLLi = si;
    sLLi = uSi;
    sLLi = sSi;
    sLLi = uLi;
    sLLi = sLi;
    sLLi = uLLi;
    sLLi = sLLi;
/*     sLLi = f; warning C4244: '=' : conversión de 'float' a '__int64'; posible pérdida de datos */
/*     sLLi = d; warning C4244: '=' : conversión de 'double' a '__int64'; posible pérdida de datos */
/*     sLLi = Ld; warning C4244: '=' : conversión de 'long double' a '__int64'; posible pérdida de datos */
    

    
    /***
    * float
    ***/
    
    f = b;
    f = uc;
    f = sc;
/*     f = ui; warning C4244: '=' : conversión de 'unsigned int' a 'float'; posible pérdida de datos */
/*     f = si; warning C4244: '=' : conversión de 'int' a 'float'; posible pérdida de datos */
    f = uSi;
    f = sSi;
/*     f = uLi; warning C4244: '=' : conversión de 'unsigned long' a 'float'; posible pérdida de datos */
/*     f = sLi; warning C4244: '=' : conversión de 'long' a 'float'; posible pérdida de datos */
/*     f = uLLi; warning C4244: '=' : conversión de 'unsigned __int64' a 'float'; posible pérdida de datos */
/*     f = sLLi; warning C4244: '=' : conversión de '__int64' a 'float'; posible pérdida de datos */
    f = f;
/*     f = d; warning C4244: '=' : conversión de 'double' a 'float'; posible pérdida de datos */
/*     f = Ld; warning C4244: '=' : conversión de 'long double' a 'float'; posible pérdida de datos */
    

    
    /***
    * double
    ***/
    
    d = b;
    d = uc;
    d = sc;
    d = ui;
    d = si;
    d = uSi;
    d = sSi;
    d = uLi;
    d = sLi;
/*     d = uLLi; warning C4244: '=' : conversión de 'unsigned __int64' a 'double'; posible pérdida de datos */
/*     d = sLLi; warning C4244: '=' : conversión de '__int64' a 'double'; posible pérdida de datos */
    d = f;
    d = d;
/*     d = Ld; warning C4244: '=' : conversión de 'long double' a 'double'; posible pérdida de datos */
    

    
    /***
    * long double
    ***/
    
    Ld = b;
    Ld = uc;
    Ld = sc;
    Ld = ui;
    Ld = si;
    Ld = uSi;
    Ld = sSi;
    Ld = uLi;
    Ld = sLi;
/*     Ld = uLLi; warning C4244: '=' : conversión de 'unsigned __int64' a 'long double'; posible pérdida de datos */
/*     Ld = sLLi; warning C4244: '=' : conversión de '__int64' a 'long double'; posible pérdida de datos */
    Ld = f;
    Ld = d;
    Ld = Ld;
    return 0;
}
