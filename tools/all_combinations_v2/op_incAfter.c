// -*- coding: utf-8; mode: c; -*-

#include <stdio.h>
#include <stdbool.h>



typedef struct {
    int x;
    int y;
} struct1_t;

typedef struct {
    int x;
    int y;
    int z;
} struct2_t;




int main(void)
{
    bool b_0 = true;
    bool b_1 = true;
//> warning C4189: 'b_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     bool b_2 = true;
    unsigned char uc_0 = 'B';
    unsigned char uc_1 = 'B';
//> warning C4189: 'uc_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     unsigned char uc_2 = 'B';
    signed char sc_0 = 'C';
    signed char sc_1 = 'C';
//> warning C4189: 'sc_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     signed char sc_2 = 'C';
    unsigned short int uSi_0 = 1;
    unsigned short int uSi_1 = 1;
//> warning C4189: 'uSi_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     unsigned short int uSi_2 = 1;
    signed short int sSi_0 = 2;
    signed short int sSi_1 = 2;
//> warning C4189: 'sSi_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     signed short int sSi_2 = 2;
    unsigned int ui_0 = 3;
    unsigned int ui_1 = 3;
//> warning C4189: 'ui_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     unsigned int ui_2 = 3;
    signed int si_0 = 4;
    signed int si_1 = 4;
//> warning C4189: 'si_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     signed int si_2 = 4;
    unsigned long int uLi_0 = 5;
    unsigned long int uLi_1 = 5;
//> warning C4189: 'uLi_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     unsigned long int uLi_2 = 5;
    signed long int sLi_0 = 6;
    signed long int sLi_1 = 6;
//> warning C4189: 'sLi_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     signed long int sLi_2 = 6;
    unsigned long long int uLLi_0 = 7;
    unsigned long long int uLLi_1 = 7;
//> warning C4189: 'uLLi_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     unsigned long long int uLLi_2 = 7;
    signed long long int sLLi_0 = 8;
    signed long long int sLLi_1 = 8;
//> warning C4189: 'sLLi_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     signed long long int sLLi_2 = 8;
    float f_0 = 0.1f;
    float f_1 = 0.1f;
//> warning C4189: 'f_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     float f_2 = 0.1f;
    double d_0 = 0.2;
    double d_1 = 0.2;
//> warning C4189: 'd_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     double d_2 = 0.2;
    long double Ld_0 = 0.3;
    long double Ld_1 = 0.3;
//> warning C4189: 'Ld_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     long double Ld_2 = 0.3;
//> warning C4189: 'ai_0' : la variable local se ha inicializado pero no se hace referencia a ella
//     int ai_0[] = {1, 2, 3};
//> warning C4189: 'ai_1' : la variable local se ha inicializado pero no se hace referencia a ella
//     int ai_1[] = {1, 2, 3};
//> warning C4189: 'ai_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     int ai_2[] = {1, 2, 3};
//> warning C4189: 'ad_0' : la variable local se ha inicializado pero no se hace referencia a ella
//     double ad_0[] = {0.1, 0.2, 0.3};
//> warning C4189: 'ad_1' : la variable local se ha inicializado pero no se hace referencia a ella
//     double ad_1[] = {0.1, 0.2, 0.3};
//> warning C4189: 'ad_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     double ad_2[] = {0.1, 0.2, 0.3};
//> warning C4189: 'struct$si$si_0' : la variable local se ha inicializado pero no se hace referencia a ella
//     struct1_t struct$si$si_0 = {0, 0};
//> warning C4189: 'struct$si$si_1' : la variable local se ha inicializado pero no se hace referencia a ella
//     struct1_t struct$si$si_1 = {0, 0};
//> warning C4189: 'struct$si$si_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     struct1_t struct$si$si_2 = {0, 0};
//> warning C4189: 'struct$si$si$si_0' : la variable local se ha inicializado pero no se hace referencia a ella
//     struct2_t struct$si$si$si_0 = {0, 0, 0};
//> warning C4189: 'struct$si$si$si_1' : la variable local se ha inicializado pero no se hace referencia a ella
//     struct2_t struct$si$si$si_1 = {0, 0, 0};
//> warning C4189: 'struct$si$si$si_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     struct2_t struct$si$si$si_2 = {0, 0, 0};
    char * pc_0 = NULL;
    char * pc_1 = NULL;
//> warning C4189: 'pc_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     char * pc_2 = NULL;
    short int * pSi_0 = NULL;
    short int * pSi_1 = NULL;
//> warning C4189: 'pSi_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     short int * pSi_2 = NULL;
    int * pi_0 = NULL;
    int * pi_1 = NULL;
//> warning C4189: 'pi_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     int * pi_2 = NULL;
    long int * pLi_0 = NULL;
    long int * pLi_1 = NULL;
//> warning C4189: 'pLi_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     long int * pLi_2 = NULL;
    long long int * pLLi_0 = NULL;
    long long int * pLLi_1 = NULL;
//> warning C4189: 'pLLi_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     long long int * pLLi_2 = NULL;
    float * pf_0 = NULL;
    float * pf_1 = NULL;
//> warning C4189: 'pf_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     float * pf_2 = NULL;
    double * pd_0 = NULL;
    double * pd_1 = NULL;
//> warning C4189: 'pd_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     double * pd_2 = NULL;
    long double * pLd_0 = NULL;
    long double * pLd_1 = NULL;
//> error C2220: advertencia tratada como error; ning·n archivo 'object' generado
//> warning C4189: 'pLd_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     long double * pLd_2 = NULL;
//> warning C4189: 'pai_0' : la variable local se ha inicializado pero no se hace referencia a ella
//     int (* pai_0)[] = NULL;
//> warning C4189: 'pai_1' : la variable local se ha inicializado pero no se hace referencia a ella
//     int (* pai_1)[] = NULL;
//> warning C4189: 'pai_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     int (* pai_2)[] = NULL;
//> warning C4189: 'pad_0' : la variable local se ha inicializado pero no se hace referencia a ella
//     double (* pad_0)[] = NULL;
//> warning C4189: 'pad_1' : la variable local se ha inicializado pero no se hace referencia a ella
//     double (* pad_1)[] = NULL;
//> warning C4189: 'pad_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     double (* pad_2)[] = NULL;
    struct1_t * pstruct$si$si_0 = NULL;
    struct1_t * pstruct$si$si_1 = NULL;
//> warning C4189: 'pstruct$si$si_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     struct1_t * pstruct$si$si_2 = NULL;
    struct2_t * pstruct$si$si$si_0 = NULL;
    struct2_t * pstruct$si$si$si_1 = NULL;
//> warning C4189: 'pstruct$si$si$si_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     struct2_t * pstruct$si$si$si_2 = NULL;


    b_0 = b_1 ++;
    b_0 = uc_1 ++;
    b_0 = sc_1 ++;
    b_0 = uSi_1 ++;
    b_0 = sSi_1 ++;
    b_0 = ui_1 ++;
    b_0 = si_1 ++;
    b_0 = uLi_1 ++;
    b_0 = sLi_1 ++;
    b_0 = uLLi_1 ++;
    b_0 = sLLi_1 ++;
    b_0 = f_1 ++;
    b_0 = d_1 ++;
    b_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//     b_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//     b_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     b_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     b_0 = struct$si$si$si_1 ++;
    b_0 = pc_1 ++;
    b_0 = pSi_1 ++;
    b_0 = pi_1 ++;
    b_0 = pLi_1 ++;
    b_0 = pLLi_1 ++;
    b_0 = pf_1 ++;
    b_0 = pd_1 ++;
    b_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//     b_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//     b_0 = pad_1 ++;
    b_0 = pstruct$si$si_1 ++;
    b_0 = pstruct$si$si$si_1 ++;
    uc_0 = b_1 ++;
    uc_0 = uc_1 ++;
    uc_0 = sc_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned short' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = uSi_1 ++;
//> warning C4244: '=' : conversi≤n de 'short' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = sSi_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned int' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = ui_1 ++;
//> warning C4244: '=' : conversi≤n de 'int' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = si_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned long' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = uLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'long' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = sLi_1 ++;
//> warning C4242: '=' : conversi≤n de 'unsigned __int64' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = uLLi_1 ++;
//> warning C4242: '=' : conversi≤n de '__int64' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = sLLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'float' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'unsigned char'; posible pΘrdida de datos
//     uc_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     uc_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     uc_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     uc_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     uc_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     uc_0 = pc_1 ++;
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     uc_0 = pSi_1 ++;
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     uc_0 = pi_1 ++;
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     uc_0 = pLi_1 ++;
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     uc_0 = pLLi_1 ++;
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     uc_0 = pf_1 ++;
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     uc_0 = pd_1 ++;
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     uc_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     uc_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     uc_0 = pad_1 ++;
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     uc_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'unsigned char' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     uc_0 = pstruct$si$si$si_1 ++;
    sc_0 = b_1 ++;
    sc_0 = uc_1 ++;
    sc_0 = sc_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned short' a 'char'; posible pΘrdida de datos
//     sc_0 = uSi_1 ++;
//> warning C4244: '=' : conversi≤n de 'short' a 'char'; posible pΘrdida de datos
//     sc_0 = sSi_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned int' a 'char'; posible pΘrdida de datos
//     sc_0 = ui_1 ++;
//> warning C4244: '=' : conversi≤n de 'int' a 'char'; posible pΘrdida de datos
//     sc_0 = si_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned long' a 'char'; posible pΘrdida de datos
//     sc_0 = uLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'long' a 'char'; posible pΘrdida de datos
//     sc_0 = sLi_1 ++;
//> warning C4242: '=' : conversi≤n de 'unsigned __int64' a 'char'; posible pΘrdida de datos
//     sc_0 = uLLi_1 ++;
//> warning C4242: '=' : conversi≤n de '__int64' a 'char'; posible pΘrdida de datos
//     sc_0 = sLLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'float' a 'char'; posible pΘrdida de datos
//     sc_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a 'char'; posible pΘrdida de datos
//     sc_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'char'; posible pΘrdida de datos
//     sc_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     sc_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     sc_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     sc_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     sc_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     sc_0 = pc_1 ++;
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     sc_0 = pSi_1 ++;
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     sc_0 = pi_1 ++;
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     sc_0 = pLi_1 ++;
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     sc_0 = pLLi_1 ++;
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     sc_0 = pf_1 ++;
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     sc_0 = pd_1 ++;
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     sc_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     sc_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     sc_0 = pad_1 ++;
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     sc_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'char' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     sc_0 = pstruct$si$si$si_1 ++;
    uSi_0 = b_1 ++;
    uSi_0 = uc_1 ++;
    uSi_0 = sc_1 ++;
    uSi_0 = uSi_1 ++;
    uSi_0 = sSi_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned int' a 'unsigned short'; posible pΘrdida de datos
//     uSi_0 = ui_1 ++;
//> warning C4244: '=' : conversi≤n de 'int' a 'unsigned short'; posible pΘrdida de datos
//     uSi_0 = si_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned long' a 'unsigned short'; posible pΘrdida de datos
//     uSi_0 = uLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'long' a 'unsigned short'; posible pΘrdida de datos
//     uSi_0 = sLi_1 ++;
//> warning C4242: '=' : conversi≤n de 'unsigned __int64' a 'unsigned short'; posible pΘrdida de datos
//     uSi_0 = uLLi_1 ++;
//> warning C4242: '=' : conversi≤n de '__int64' a 'unsigned short'; posible pΘrdida de datos
//     uSi_0 = sLLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'float' a 'unsigned short'; posible pΘrdida de datos
//     uSi_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a 'unsigned short'; posible pΘrdida de datos
//     uSi_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'unsigned short'; posible pΘrdida de datos
//     uSi_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     uSi_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     uSi_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     uSi_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     uSi_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     uSi_0 = pc_1 ++;
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     uSi_0 = pSi_1 ++;
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     uSi_0 = pi_1 ++;
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     uSi_0 = pLi_1 ++;
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     uSi_0 = pLLi_1 ++;
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     uSi_0 = pf_1 ++;
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     uSi_0 = pd_1 ++;
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     uSi_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     uSi_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     uSi_0 = pad_1 ++;
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     uSi_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'unsigned short' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     uSi_0 = pstruct$si$si$si_1 ++;
    sSi_0 = b_1 ++;
    sSi_0 = uc_1 ++;
    sSi_0 = sc_1 ++;
    sSi_0 = uSi_1 ++;
    sSi_0 = sSi_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned int' a 'short'; posible pΘrdida de datos
//     sSi_0 = ui_1 ++;
//> warning C4244: '=' : conversi≤n de 'int' a 'short'; posible pΘrdida de datos
//     sSi_0 = si_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned long' a 'short'; posible pΘrdida de datos
//     sSi_0 = uLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'long' a 'short'; posible pΘrdida de datos
//     sSi_0 = sLi_1 ++;
//> warning C4242: '=' : conversi≤n de 'unsigned __int64' a 'short'; posible pΘrdida de datos
//     sSi_0 = uLLi_1 ++;
//> warning C4242: '=' : conversi≤n de '__int64' a 'short'; posible pΘrdida de datos
//     sSi_0 = sLLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'float' a 'short'; posible pΘrdida de datos
//     sSi_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a 'short'; posible pΘrdida de datos
//     sSi_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'short'; posible pΘrdida de datos
//     sSi_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     sSi_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     sSi_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     sSi_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     sSi_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     sSi_0 = pc_1 ++;
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     sSi_0 = pSi_1 ++;
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     sSi_0 = pi_1 ++;
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     sSi_0 = pLi_1 ++;
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     sSi_0 = pLLi_1 ++;
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     sSi_0 = pf_1 ++;
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     sSi_0 = pd_1 ++;
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     sSi_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     sSi_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     sSi_0 = pad_1 ++;
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     sSi_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'short' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     sSi_0 = pstruct$si$si$si_1 ++;
    ui_0 = b_1 ++;
    ui_0 = uc_1 ++;
    ui_0 = sc_1 ++;
    ui_0 = uSi_1 ++;
    ui_0 = sSi_1 ++;
    ui_0 = ui_1 ++;
    ui_0 = si_1 ++;
    ui_0 = uLi_1 ++;
    ui_0 = sLi_1 ++;
//> warning C4242: '=' : conversi≤n de 'unsigned __int64' a 'unsigned int'; posible pΘrdida de datos
//     ui_0 = uLLi_1 ++;
//> warning C4242: '=' : conversi≤n de '__int64' a 'unsigned int'; posible pΘrdida de datos
//     ui_0 = sLLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'float' a 'unsigned int'; posible pΘrdida de datos
//     ui_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a 'unsigned int'; posible pΘrdida de datos
//     ui_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'unsigned int'; posible pΘrdida de datos
//     ui_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     ui_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     ui_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     ui_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     ui_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     ui_0 = pc_1 ++;
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     ui_0 = pSi_1 ++;
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     ui_0 = pi_1 ++;
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     ui_0 = pLi_1 ++;
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     ui_0 = pLLi_1 ++;
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     ui_0 = pf_1 ++;
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     ui_0 = pd_1 ++;
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     ui_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     ui_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     ui_0 = pad_1 ++;
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     ui_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'unsigned int' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     ui_0 = pstruct$si$si$si_1 ++;
    si_0 = b_1 ++;
    si_0 = uc_1 ++;
    si_0 = sc_1 ++;
    si_0 = uSi_1 ++;
    si_0 = sSi_1 ++;
    si_0 = ui_1 ++;
    si_0 = si_1 ++;
    si_0 = uLi_1 ++;
    si_0 = sLi_1 ++;
//> warning C4242: '=' : conversi≤n de 'unsigned __int64' a 'int'; posible pΘrdida de datos
//     si_0 = uLLi_1 ++;
//> warning C4242: '=' : conversi≤n de '__int64' a 'int'; posible pΘrdida de datos
//     si_0 = sLLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'float' a 'int'; posible pΘrdida de datos
//     si_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a 'int'; posible pΘrdida de datos
//     si_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'int'; posible pΘrdida de datos
//     si_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     si_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     si_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     si_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     si_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     si_0 = pc_1 ++;
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     si_0 = pSi_1 ++;
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     si_0 = pi_1 ++;
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     si_0 = pLi_1 ++;
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     si_0 = pLLi_1 ++;
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     si_0 = pf_1 ++;
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     si_0 = pd_1 ++;
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     si_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     si_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     si_0 = pad_1 ++;
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     si_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'int' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     si_0 = pstruct$si$si$si_1 ++;
    uLi_0 = b_1 ++;
    uLi_0 = uc_1 ++;
    uLi_0 = sc_1 ++;
    uLi_0 = uSi_1 ++;
    uLi_0 = sSi_1 ++;
    uLi_0 = ui_1 ++;
    uLi_0 = si_1 ++;
    uLi_0 = uLi_1 ++;
    uLi_0 = sLi_1 ++;
//> warning C4242: '=' : conversi≤n de 'unsigned __int64' a 'unsigned long'; posible pΘrdida de datos
//     uLi_0 = uLLi_1 ++;
//> warning C4242: '=' : conversi≤n de '__int64' a 'unsigned long'; posible pΘrdida de datos
//     uLi_0 = sLLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'float' a 'unsigned long'; posible pΘrdida de datos
//     uLi_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a 'unsigned long'; posible pΘrdida de datos
//     uLi_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'unsigned long'; posible pΘrdida de datos
//     uLi_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     uLi_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     uLi_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     uLi_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     uLi_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     uLi_0 = pc_1 ++;
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     uLi_0 = pSi_1 ++;
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     uLi_0 = pi_1 ++;
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     uLi_0 = pLi_1 ++;
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     uLi_0 = pLLi_1 ++;
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     uLi_0 = pf_1 ++;
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     uLi_0 = pd_1 ++;
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     uLi_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     uLi_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     uLi_0 = pad_1 ++;
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     uLi_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'unsigned long' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     uLi_0 = pstruct$si$si$si_1 ++;
    sLi_0 = b_1 ++;
    sLi_0 = uc_1 ++;
    sLi_0 = sc_1 ++;
    sLi_0 = uSi_1 ++;
    sLi_0 = sSi_1 ++;
    sLi_0 = ui_1 ++;
    sLi_0 = si_1 ++;
    sLi_0 = uLi_1 ++;
    sLi_0 = sLi_1 ++;
//> warning C4242: '=' : conversi≤n de 'unsigned __int64' a 'long'; posible pΘrdida de datos
//     sLi_0 = uLLi_1 ++;
//> warning C4242: '=' : conversi≤n de '__int64' a 'long'; posible pΘrdida de datos
//     sLi_0 = sLLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'float' a 'long'; posible pΘrdida de datos
//     sLi_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a 'long'; posible pΘrdida de datos
//     sLi_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'long'; posible pΘrdida de datos
//     sLi_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     sLi_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     sLi_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     sLi_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     sLi_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     sLi_0 = pc_1 ++;
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     sLi_0 = pSi_1 ++;
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     sLi_0 = pi_1 ++;
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     sLi_0 = pLi_1 ++;
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     sLi_0 = pLLi_1 ++;
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     sLi_0 = pf_1 ++;
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     sLi_0 = pd_1 ++;
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     sLi_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     sLi_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     sLi_0 = pad_1 ++;
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     sLi_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'long' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     sLi_0 = pstruct$si$si$si_1 ++;
    uLLi_0 = b_1 ++;
    uLLi_0 = uc_1 ++;
    uLLi_0 = sc_1 ++;
    uLLi_0 = uSi_1 ++;
    uLLi_0 = sSi_1 ++;
    uLLi_0 = ui_1 ++;
    uLLi_0 = si_1 ++;
    uLLi_0 = uLi_1 ++;
    uLLi_0 = sLi_1 ++;
    uLLi_0 = uLLi_1 ++;
    uLLi_0 = sLLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'float' a 'unsigned __int64'; posible pΘrdida de datos
//     uLLi_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a 'unsigned __int64'; posible pΘrdida de datos
//     uLLi_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'unsigned __int64'; posible pΘrdida de datos
//     uLLi_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     uLLi_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     uLLi_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     uLLi_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     uLLi_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     uLLi_0 = pc_1 ++;
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     uLLi_0 = pSi_1 ++;
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     uLLi_0 = pi_1 ++;
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     uLLi_0 = pLi_1 ++;
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     uLLi_0 = pLLi_1 ++;
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     uLLi_0 = pf_1 ++;
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     uLLi_0 = pd_1 ++;
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     uLLi_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     uLLi_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     uLLi_0 = pad_1 ++;
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     uLLi_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'unsigned __int64' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     uLLi_0 = pstruct$si$si$si_1 ++;
    sLLi_0 = b_1 ++;
    sLLi_0 = uc_1 ++;
    sLLi_0 = sc_1 ++;
    sLLi_0 = uSi_1 ++;
    sLLi_0 = sSi_1 ++;
    sLLi_0 = ui_1 ++;
    sLLi_0 = si_1 ++;
    sLLi_0 = uLi_1 ++;
    sLLi_0 = sLi_1 ++;
    sLLi_0 = uLLi_1 ++;
    sLLi_0 = sLLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'float' a '__int64'; posible pΘrdida de datos
//     sLLi_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a '__int64'; posible pΘrdida de datos
//     sLLi_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a '__int64'; posible pΘrdida de datos
//     sLLi_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     sLLi_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     sLLi_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     sLLi_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     sLLi_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     sLLi_0 = pc_1 ++;
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     sLLi_0 = pSi_1 ++;
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     sLLi_0 = pi_1 ++;
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     sLLi_0 = pLi_1 ++;
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     sLLi_0 = pLLi_1 ++;
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     sLLi_0 = pf_1 ++;
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     sLLi_0 = pd_1 ++;
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     sLLi_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     sLLi_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     sLLi_0 = pad_1 ++;
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     sLLi_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : '__int64' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     sLLi_0 = pstruct$si$si$si_1 ++;
    f_0 = b_1 ++;
    f_0 = uc_1 ++;
    f_0 = sc_1 ++;
    f_0 = uSi_1 ++;
    f_0 = sSi_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned int' a 'float'; posible pΘrdida de datos
//     f_0 = ui_1 ++;
//> warning C4244: '=' : conversi≤n de 'int' a 'float'; posible pΘrdida de datos
//     f_0 = si_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned long' a 'float'; posible pΘrdida de datos
//     f_0 = uLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'long' a 'float'; posible pΘrdida de datos
//     f_0 = sLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned __int64' a 'float'; posible pΘrdida de datos
//     f_0 = uLLi_1 ++;
//> warning C4244: '=' : conversi≤n de '__int64' a 'float'; posible pΘrdida de datos
//     f_0 = sLLi_1 ++;
    f_0 = f_1 ++;
//> warning C4244: '=' : conversi≤n de 'double' a 'float'; posible pΘrdida de datos
//     f_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'float'; posible pΘrdida de datos
//     f_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int *' a 'float'
//     f_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double *' a 'float'
//     f_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     f_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     f_0 = struct$si$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'char *' a 'float'
//     f_0 = pc_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'short *' a 'float'
//     f_0 = pSi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int *' a 'float'
//     f_0 = pi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long *' a 'float'
//     f_0 = pLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de '__int64 *' a 'float'
//     f_0 = pLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float *' a 'float'
//     f_0 = pf_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double *' a 'float'
//     f_0 = pd_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double *' a 'float'
//     f_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int (*)[]' a 'float'
//     f_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double (*)[]' a 'float'
//     f_0 = pad_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'struct1_t *' a 'float'
//     f_0 = pstruct$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'struct2_t *' a 'float'
//     f_0 = pstruct$si$si$si_1 ++;
    d_0 = b_1 ++;
    d_0 = uc_1 ++;
    d_0 = sc_1 ++;
    d_0 = uSi_1 ++;
    d_0 = sSi_1 ++;
    d_0 = ui_1 ++;
    d_0 = si_1 ++;
    d_0 = uLi_1 ++;
    d_0 = sLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned __int64' a 'double'; posible pΘrdida de datos
//     d_0 = uLLi_1 ++;
//> warning C4244: '=' : conversi≤n de '__int64' a 'double'; posible pΘrdida de datos
//     d_0 = sLLi_1 ++;
    d_0 = f_1 ++;
    d_0 = d_1 ++;
//> warning C4244: '=' : conversi≤n de 'long double' a 'double'; posible pΘrdida de datos
//     d_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int *' a 'double'
//     d_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double *' a 'double'
//     d_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     d_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     d_0 = struct$si$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'char *' a 'double'
//     d_0 = pc_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'short *' a 'double'
//     d_0 = pSi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int *' a 'double'
//     d_0 = pi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long *' a 'double'
//     d_0 = pLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de '__int64 *' a 'double'
//     d_0 = pLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float *' a 'double'
//     d_0 = pf_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double *' a 'double'
//     d_0 = pd_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double *' a 'double'
//     d_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> fatal error C1003: el recuento de errores supera 100; se detiene la compilaci≤n
//     d_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double (*)[]' a 'double'
//     d_0 = pad_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'struct1_t *' a 'double'
//     d_0 = pstruct$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'struct2_t *' a 'double'
//     d_0 = pstruct$si$si$si_1 ++;
    Ld_0 = b_1 ++;
    Ld_0 = uc_1 ++;
    Ld_0 = sc_1 ++;
    Ld_0 = uSi_1 ++;
    Ld_0 = sSi_1 ++;
    Ld_0 = ui_1 ++;
    Ld_0 = si_1 ++;
    Ld_0 = uLi_1 ++;
    Ld_0 = sLi_1 ++;
//> warning C4244: '=' : conversi≤n de 'unsigned __int64' a 'long double'; posible pΘrdida de datos
//     Ld_0 = uLLi_1 ++;
//> warning C4244: '=' : conversi≤n de '__int64' a 'long double'; posible pΘrdida de datos
//     Ld_0 = sLLi_1 ++;
    Ld_0 = f_1 ++;
    Ld_0 = d_1 ++;
    Ld_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int *' a 'long double'
//     Ld_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double *' a 'long double'
//     Ld_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     Ld_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     Ld_0 = struct$si$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'char *' a 'long double'
//     Ld_0 = pc_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'short *' a 'long double'
//     Ld_0 = pSi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int *' a 'long double'
//     Ld_0 = pi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long *' a 'long double'
//     Ld_0 = pLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de '__int64 *' a 'long double'
//     Ld_0 = pLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float *' a 'long double'
//     Ld_0 = pf_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double *' a 'long double'
//     Ld_0 = pd_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double *' a 'long double'
//     Ld_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int (*)[]' a 'long double'
//     Ld_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double (*)[]' a 'long double'
//     Ld_0 = pad_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'struct1_t *' a 'long double'
//     Ld_0 = pstruct$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'struct2_t *' a 'long double'
//     Ld_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'bool'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = b_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = uc_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'char'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = sc_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = uSi_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'short'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = sSi_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = ui_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'int'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = si_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = uLi_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'long'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = sLi_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = uLLi_1 ++;
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de '__int64'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'int [3]'
//     ai_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'int [3]'
//     ai_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'int [3]'
//     ai_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'int [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     ai_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     ai_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a 'int [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a 'int [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pSi_1 ++;
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pi_1 ++;
//> warning C4057: '=' : 'int [3]' tiene un direccionamiento indirecto distinto de 'long *' para tipos base parecidos
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'int [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a 'int [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pf_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'int [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pd_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long double *' a 'int [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'int [3]' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a 'int [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a 'int [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ai_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'bool'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = b_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = uc_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'char'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = sc_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = uSi_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'short'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = sSi_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = ui_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'int'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = si_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = uLi_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'long'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = sLi_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = uLLi_1 ++;
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de '__int64'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'double [3]'
//     ad_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'double [3]'
//     ad_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'double [3]'
//     ad_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'double [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     ad_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     ad_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a 'double [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a 'double [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pSi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'double [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long *' a 'double [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'double [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a 'double [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pf_1 ++;
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pd_1 ++;
//> warning C4057: '=' : 'double [3]' tiene un direccionamiento indirecto distinto de 'long double *' para tipos base parecidos
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'double [3]' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a 'double [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a 'double [3]'
//> error C2106: '=' : el operando izquierdo debe ser valor L
//     ad_0 = pstruct$si$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'bool' a 'struct1_t'
//     struct$si$si_0 = b_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'unsigned char' a 'struct1_t'
//     struct$si$si_0 = uc_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'char' a 'struct1_t'
//     struct$si$si_0 = sc_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'unsigned short' a 'struct1_t'
//     struct$si$si_0 = uSi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'short' a 'struct1_t'
//     struct$si$si_0 = sSi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'unsigned int' a 'struct1_t'
//     struct$si$si_0 = ui_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int' a 'struct1_t'
//     struct$si$si_0 = si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'unsigned long' a 'struct1_t'
//     struct$si$si_0 = uLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long' a 'struct1_t'
//> fatal error C1003: el recuento de errores supera 100; se detiene la compilaci≤n
//     struct$si$si_0 = sLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'unsigned __int64' a 'struct1_t'
//     struct$si$si_0 = uLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de '__int64' a 'struct1_t'
//     struct$si$si_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'struct1_t'
//     struct$si$si_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'struct1_t'
//     struct$si$si_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'struct1_t'
//     struct$si$si_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int *' a 'struct1_t'
//     struct$si$si_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double *' a 'struct1_t'
//     struct$si$si_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     struct$si$si_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     struct$si$si_0 = struct$si$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'char *' a 'struct1_t'
//     struct$si$si_0 = pc_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'short *' a 'struct1_t'
//     struct$si$si_0 = pSi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int *' a 'struct1_t'
//     struct$si$si_0 = pi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long *' a 'struct1_t'
//     struct$si$si_0 = pLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de '__int64 *' a 'struct1_t'
//     struct$si$si_0 = pLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float *' a 'struct1_t'
//     struct$si$si_0 = pf_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double *' a 'struct1_t'
//     struct$si$si_0 = pd_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double *' a 'struct1_t'
//     struct$si$si_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int (*)[]' a 'struct1_t'
//     struct$si$si_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double (*)[]' a 'struct1_t'
//     struct$si$si_0 = pad_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'struct1_t *' a 'struct1_t'
//     struct$si$si_0 = pstruct$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'struct2_t *' a 'struct1_t'
//     struct$si$si_0 = pstruct$si$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'bool' a 'struct2_t'
//     struct$si$si$si_0 = b_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'unsigned char' a 'struct2_t'
//     struct$si$si$si_0 = uc_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'char' a 'struct2_t'
//     struct$si$si$si_0 = sc_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'unsigned short' a 'struct2_t'
//     struct$si$si$si_0 = uSi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'short' a 'struct2_t'
//     struct$si$si$si_0 = sSi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'unsigned int' a 'struct2_t'
//     struct$si$si$si_0 = ui_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int' a 'struct2_t'
//     struct$si$si$si_0 = si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'unsigned long' a 'struct2_t'
//     struct$si$si$si_0 = uLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long' a 'struct2_t'
//     struct$si$si$si_0 = sLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'unsigned __int64' a 'struct2_t'
//     struct$si$si$si_0 = uLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de '__int64' a 'struct2_t'
//     struct$si$si$si_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'struct2_t'
//     struct$si$si$si_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'struct2_t'
//     struct$si$si$si_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'struct2_t'
//     struct$si$si$si_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int *' a 'struct2_t'
//     struct$si$si$si_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double *' a 'struct2_t'
//     struct$si$si$si_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     struct$si$si$si_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     struct$si$si$si_0 = struct$si$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'char *' a 'struct2_t'
//     struct$si$si$si_0 = pc_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'short *' a 'struct2_t'
//     struct$si$si$si_0 = pSi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int *' a 'struct2_t'
//     struct$si$si$si_0 = pi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long *' a 'struct2_t'
//     struct$si$si$si_0 = pLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de '__int64 *' a 'struct2_t'
//     struct$si$si$si_0 = pLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float *' a 'struct2_t'
//     struct$si$si$si_0 = pf_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double *' a 'struct2_t'
//     struct$si$si$si_0 = pd_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double *' a 'struct2_t'
//     struct$si$si$si_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> error C2440: '=' : no se puede realizar la conversi≤n de 'int (*)[]' a 'struct2_t'
//     struct$si$si$si_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double (*)[]' a 'struct2_t'
//     struct$si$si$si_0 = pad_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'struct1_t *' a 'struct2_t'
//     struct$si$si$si_0 = pstruct$si$si_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'struct2_t *' a 'struct2_t'
//     struct$si$si$si_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pc_0 = b_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pc_0 = uc_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pc_0 = sc_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pc_0 = uSi_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pc_0 = sSi_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pc_0 = ui_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pc_0 = si_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pc_0 = uLi_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pc_0 = sLi_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pc_0 = uLLi_1 ++;
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pc_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'char *'
//     pc_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'char *'
//     pc_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'char *'
//     pc_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'char *'
//     pc_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'char *'
//     pc_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pc_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pc_0 = struct$si$si$si_1 ++;
    pc_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a 'char *'
//     pc_0 = pSi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'char *'
//     pc_0 = pi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long *' a 'char *'
//     pc_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'char *'
//     pc_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a 'char *'
//     pc_0 = pf_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'char *'
//     pc_0 = pd_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long double *' a 'char *'
//     pc_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     pc_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'char *' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     pc_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a 'char *'
//     pc_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a 'char *'
//     pc_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pSi_0 = b_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pSi_0 = uc_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pSi_0 = sc_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pSi_0 = uSi_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pSi_0 = sSi_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pSi_0 = ui_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pSi_0 = si_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pSi_0 = uLi_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pSi_0 = sLi_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pSi_0 = uLLi_1 ++;
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pSi_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'short *'
//     pSi_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'short *'
//     pSi_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'short *'
//     pSi_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'short *'
//     pSi_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'short *'
//     pSi_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pSi_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pSi_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a 'short *'
//     pSi_0 = pc_1 ++;
    pSi_0 = pSi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'short *'
//     pSi_0 = pi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long *' a 'short *'
//     pSi_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'short *'
//     pSi_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a 'short *'
//     pSi_0 = pf_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'short *'
//     pSi_0 = pd_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long double *' a 'short *'
//     pSi_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     pSi_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'short *' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     pSi_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a 'short *'
//     pSi_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a 'short *'
//     pSi_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pi_0 = b_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pi_0 = uc_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pi_0 = sc_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pi_0 = uSi_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pi_0 = sSi_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pi_0 = ui_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pi_0 = si_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pi_0 = uLi_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pi_0 = sLi_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pi_0 = uLLi_1 ++;
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pi_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'int *'
//     pi_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'int *'
//     pi_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'int *'
//     pi_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//     pi_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'int *'
//     pi_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pi_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pi_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a 'int *'
//     pi_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a 'int *'
//     pi_0 = pSi_1 ++;
    pi_0 = pi_1 ++;
//> warning C4057: '=' : 'int *' tiene un direccionamiento indirecto distinto de 'long *' para tipos base parecidos
//     pi_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'int *'
//     pi_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a 'int *'
//     pi_0 = pf_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'int *'
//     pi_0 = pd_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long double *' a 'int *'
//     pi_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     pi_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'int *' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     pi_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a 'int *'
//     pi_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a 'int *'
//     pi_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pLi_0 = b_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pLi_0 = uc_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pLi_0 = sc_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pLi_0 = uSi_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pLi_0 = sSi_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pLi_0 = ui_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pLi_0 = si_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pLi_0 = uLi_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pLi_0 = sLi_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pLi_0 = uLLi_1 ++;
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pLi_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'long *'
//     pLi_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'long *'
//     pLi_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'long *'
//     pLi_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4057: '=' : 'long *' tiene un direccionamiento indirecto distinto de 'int *' para tipos base parecidos
//     pLi_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'long *'
//     pLi_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pLi_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pLi_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a 'long *'
//     pLi_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a 'long *'
//     pLi_0 = pSi_1 ++;
//> warning C4057: '=' : 'long *' tiene un direccionamiento indirecto distinto de 'int *' para tipos base parecidos
//     pLi_0 = pi_1 ++;
    pLi_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'long *'
//     pLi_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a 'long *'
//     pLi_0 = pf_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'long *'
//     pLi_0 = pd_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long double *' a 'long *'
//     pLi_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     pLi_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'long *' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     pLi_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a 'long *'
//     pLi_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a 'long *'
//     pLi_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pLLi_0 = b_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pLLi_0 = uc_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pLLi_0 = sc_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pLLi_0 = uSi_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pLLi_0 = sSi_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pLLi_0 = ui_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pLLi_0 = si_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pLLi_0 = uLi_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pLLi_0 = sLi_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pLLi_0 = uLLi_1 ++;
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pLLi_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a '__int64 *'
//     pLLi_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a '__int64 *'
//     pLLi_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a '__int64 *'
//     pLLi_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'int *' a '__int64 *'
//     pLLi_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'double *' a '__int64 *'
//     pLLi_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//> fatal error C1003: el recuento de errores supera 100; se detiene la compilaci≤n
//     pLLi_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pLLi_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a '__int64 *'
//     pLLi_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a '__int64 *'
//     pLLi_0 = pSi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'int *' a '__int64 *'
//     pLLi_0 = pi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long *' a '__int64 *'
//     pLLi_0 = pLi_1 ++;
    pLLi_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a '__int64 *'
//     pLLi_0 = pf_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'double *' a '__int64 *'
//     pLLi_0 = pd_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long double *' a '__int64 *'
//     pLLi_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     pLLi_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : '__int64 *' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     pLLi_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a '__int64 *'
//     pLLi_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a '__int64 *'
//     pLLi_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pf_0 = b_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pf_0 = uc_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pf_0 = sc_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pf_0 = uSi_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pf_0 = sSi_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pf_0 = ui_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pf_0 = si_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pf_0 = uLi_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pf_0 = sLi_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pf_0 = uLLi_1 ++;
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pf_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'float *'
//     pf_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'float *'
//     pf_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'float *'
//     pf_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'float *'
//     pf_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'float *'
//     pf_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pf_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pf_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a 'float *'
//     pf_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a 'float *'
//     pf_0 = pSi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'float *'
//     pf_0 = pi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long *' a 'float *'
//     pf_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'float *'
//     pf_0 = pLLi_1 ++;
    pf_0 = pf_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'float *'
//     pf_0 = pd_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long double *' a 'float *'
//     pf_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     pf_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'float *' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     pf_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a 'float *'
//     pf_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a 'float *'
//     pf_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pd_0 = b_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pd_0 = uc_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pd_0 = sc_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pd_0 = uSi_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pd_0 = sSi_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pd_0 = ui_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pd_0 = si_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pd_0 = uLi_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pd_0 = sLi_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pd_0 = uLLi_1 ++;
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pd_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'double *'
//     pd_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'double *'
//     pd_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'double *'
//     pd_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'double *'
//     pd_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//     pd_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pd_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pd_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a 'double *'
//     pd_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a 'double *'
//     pd_0 = pSi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'double *'
//     pd_0 = pi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long *' a 'double *'
//     pd_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'double *'
//     pd_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a 'double *'
//     pd_0 = pf_1 ++;
    pd_0 = pd_1 ++;
//> warning C4057: '=' : 'double *' tiene un direccionamiento indirecto distinto de 'long double *' para tipos base parecidos
//     pd_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     pd_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'double *' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     pd_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a 'double *'
//     pd_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a 'double *'
//     pd_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pLd_0 = b_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pLd_0 = uc_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pLd_0 = sc_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pLd_0 = uSi_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pLd_0 = sSi_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pLd_0 = ui_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pLd_0 = si_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pLd_0 = uLi_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pLd_0 = sLi_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pLd_0 = uLLi_1 ++;
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pLd_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'long double *'
//     pLd_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'long double *'
//     pLd_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'long double *'
//     pLd_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'long double *'
//     pLd_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4057: '=' : 'long double *' tiene un direccionamiento indirecto distinto de 'double *' para tipos base parecidos
//     pLd_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pLd_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pLd_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a 'long double *'
//     pLd_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a 'long double *'
//     pLd_0 = pSi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'long double *'
//     pLd_0 = pi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long *' a 'long double *'
//     pLd_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'long double *'
//     pLd_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a 'long double *'
//     pLd_0 = pf_1 ++;
//> warning C4057: '=' : 'long double *' tiene un direccionamiento indirecto distinto de 'double *' para tipos base parecidos
//     pLd_0 = pd_1 ++;
    pLd_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     pLd_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'long double *' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     pLd_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a 'long double *'
//     pLd_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a 'long double *'
//     pLd_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pai_0 = b_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pai_0 = uc_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pai_0 = sc_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pai_0 = uSi_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pai_0 = sSi_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pai_0 = ui_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pai_0 = si_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pai_0 = uLi_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pai_0 = sLi_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pai_0 = uLLi_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pai_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'int (*)[]'
//     pai_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'int (*)[]'
//     pai_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'int (*)[]'
//     pai_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     pai_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     pai_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pai_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pai_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     pai_0 = pc_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     pai_0 = pSi_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     pai_0 = pi_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     pai_0 = pLi_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     pai_0 = pLLi_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     pai_0 = pf_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     pai_0 = pd_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     pai_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//     pai_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4133: '=' : tipos incompatibles, de 'double (*)[]' a 'int (*)[]'
//     pai_0 = pad_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     pai_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'int (*)[]' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     pai_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pad_0 = b_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pad_0 = uc_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pad_0 = sc_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pad_0 = uSi_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pad_0 = sSi_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pad_0 = ui_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pad_0 = si_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pad_0 = uLi_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pad_0 = sLi_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pad_0 = uLLi_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pad_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'double (*)[]'
//     pad_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'double (*)[]'
//     pad_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'double (*)[]'
//     pad_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     pad_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     pad_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pad_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pad_0 = struct$si$si$si_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'char *'
//     pad_0 = pc_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'short *'
//     pad_0 = pSi_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'int *'
//     pad_0 = pi_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'long *'
//     pad_0 = pLi_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de '__int64 *'
//     pad_0 = pLLi_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'float *'
//     pad_0 = pf_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'double *'
//     pad_0 = pd_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'long double *'
//     pad_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4133: '=' : tipos incompatibles, de 'int (*)[]' a 'double (*)[]'
//     pad_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//     pad_0 = pad_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'struct1_t *'
//     pad_0 = pstruct$si$si_1 ++;
//> warning C4047: '=' : 'double (*)[]' es distinto en los niveles de direccionamiento indirecto de 'struct2_t *'
//     pad_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pstruct$si$si_0 = b_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pstruct$si$si_0 = uc_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pstruct$si$si_0 = sc_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pstruct$si$si_0 = uSi_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pstruct$si$si_0 = sSi_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pstruct$si$si_0 = ui_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pstruct$si$si_0 = si_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pstruct$si$si_0 = uLi_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pstruct$si$si_0 = sLi_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pstruct$si$si_0 = uLLi_1 ++;
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pstruct$si$si_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'struct1_t *'
//     pstruct$si$si_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'struct1_t *'
//     pstruct$si$si_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'struct1_t *'
//     pstruct$si$si_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'struct1_t *'
//     pstruct$si$si_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'struct1_t *'
//     pstruct$si$si_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pstruct$si$si_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pstruct$si$si_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a 'struct1_t *'
//     pstruct$si$si_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a 'struct1_t *'
//     pstruct$si$si_0 = pSi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'struct1_t *'
//     pstruct$si$si_0 = pi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long *' a 'struct1_t *'
//     pstruct$si$si_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'struct1_t *'
//     pstruct$si$si_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a 'struct1_t *'
//     pstruct$si$si_0 = pf_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'struct1_t *'
//     pstruct$si$si_0 = pd_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long double *' a 'struct1_t *'
//     pstruct$si$si_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     pstruct$si$si_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'struct1_t *' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     pstruct$si$si_0 = pad_1 ++;
    pstruct$si$si_0 = pstruct$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct2_t *' a 'struct1_t *'
//     pstruct$si$si_0 = pstruct$si$si$si_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'bool'
//     pstruct$si$si$si_0 = b_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'unsigned char'
//     pstruct$si$si$si_0 = uc_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'char'
//     pstruct$si$si$si_0 = sc_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'unsigned short'
//     pstruct$si$si$si_0 = uSi_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'short'
//     pstruct$si$si$si_0 = sSi_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'unsigned int'
//     pstruct$si$si$si_0 = ui_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'int'
//     pstruct$si$si$si_0 = si_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'unsigned long'
//     pstruct$si$si$si_0 = uLi_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'long'
//     pstruct$si$si$si_0 = sLi_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'unsigned __int64'
//     pstruct$si$si$si_0 = uLLi_1 ++;
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de '__int64'
//     pstruct$si$si$si_0 = sLLi_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'float' a 'struct2_t *'
//     pstruct$si$si$si_0 = f_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'double' a 'struct2_t *'
//     pstruct$si$si$si_0 = d_1 ++;
//> error C2440: '=' : no se puede realizar la conversi≤n de 'long double' a 'struct2_t *'
//     pstruct$si$si$si_0 = Ld_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'struct2_t *'
//     pstruct$si$si$si_0 = ai_1 ++;
//> error C2105: '++' necesita valor L
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'struct2_t *'
//     pstruct$si$si$si_0 = ad_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pstruct$si$si$si_0 = struct$si$si_1 ++;
//> error C2088: '++' : no es vßlido para struct
//     pstruct$si$si$si_0 = struct$si$si$si_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'char *' a 'struct2_t *'
//     pstruct$si$si$si_0 = pc_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'short *' a 'struct2_t *'
//     pstruct$si$si$si_0 = pSi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'int *' a 'struct2_t *'
//     pstruct$si$si$si_0 = pi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long *' a 'struct2_t *'
//     pstruct$si$si$si_0 = pLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de '__int64 *' a 'struct2_t *'
//     pstruct$si$si$si_0 = pLLi_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'float *' a 'struct2_t *'
//     pstruct$si$si$si_0 = pf_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'double *' a 'struct2_t *'
//     pstruct$si$si$si_0 = pd_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'long double *' a 'struct2_t *'
//     pstruct$si$si$si_0 = pLd_1 ++;
//> error C2036: 'int (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'int (*)[]'
//     pstruct$si$si$si_0 = pai_1 ++;
//> error C2036: 'double (*)[]' : tama±o desconocido
//> warning C4047: '=' : 'struct2_t *' es distinto en los niveles de direccionamiento indirecto de 'double (*)[]'
//     pstruct$si$si$si_0 = pad_1 ++;
//> warning C4133: '=' : tipos incompatibles, de 'struct1_t *' a 'struct2_t *'
//     pstruct$si$si$si_0 = pstruct$si$si_1 ++;
    pstruct$si$si$si_0 = pstruct$si$si$si_1 ++;

    return 0;
}
