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
    int ai_1[] = {1, 2, 3};
//> warning C4189: 'ai_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     int ai_2[] = {1, 2, 3};
//> warning C4189: 'ad_0' : la variable local se ha inicializado pero no se hace referencia a ella
//     double ad_0[] = {0.1, 0.2, 0.3};
    double ad_1[] = {0.1, 0.2, 0.3};
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
    int (* pai_0)[] = NULL;
    int (* pai_1)[] = NULL;
//> warning C4189: 'pai_2' : la variable local se ha inicializado pero no se hace referencia a ella
//     int (* pai_2)[] = NULL;
    double (* pad_0)[] = NULL;
    double (* pad_1)[] = NULL;
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


    b_0 = ((bool) b_1);
    b_0 = ((bool) uc_1);
    b_0 = ((bool) sc_1);
    b_0 = ((bool) uSi_1);
    b_0 = ((bool) sSi_1);
    b_0 = ((bool) ui_1);
    b_0 = ((bool) si_1);
    b_0 = ((bool) uLi_1);
    b_0 = ((bool) sLi_1);
    b_0 = ((bool) uLLi_1);
    b_0 = ((bool) sLLi_1);
    b_0 = ((bool) f_1);
    b_0 = ((bool) d_1);
    b_0 = ((bool) Ld_1);
//> error C2220: advertencia tratada como error; ning·n archivo 'object' generado
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int [3]' a 'bool'
//     b_0 = ((bool) ai_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double [3]' a 'bool'
//     b_0 = ((bool) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'bool'
//     b_0 = ((bool) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'bool'
//     b_0 = ((bool) struct$si$si$si_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'char *' a 'bool'
//     b_0 = ((bool) pc_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'short *' a 'bool'
//     b_0 = ((bool) pSi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int *' a 'bool'
//     b_0 = ((bool) pi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'long *' a 'bool'
//     b_0 = ((bool) pLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64 *' a 'bool'
//     b_0 = ((bool) pLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'float *' a 'bool'
//     b_0 = ((bool) pf_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double *' a 'bool'
//     b_0 = ((bool) pd_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'long double *' a 'bool'
//     b_0 = ((bool) pLd_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int (*)[]' a 'bool'
//     b_0 = ((bool) pai_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double (*)[]' a 'bool'
//     b_0 = ((bool) pad_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'struct1_t *' a 'bool'
//     b_0 = ((bool) pstruct$si$si_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'struct2_t *' a 'bool'
//     b_0 = ((bool) pstruct$si$si$si_1);
    uc_0 = ((unsigned char) b_1);
    uc_0 = ((unsigned char) uc_1);
    uc_0 = ((unsigned char) sc_1);
    uc_0 = ((unsigned char) uSi_1);
    uc_0 = ((unsigned char) sSi_1);
    uc_0 = ((unsigned char) ui_1);
    uc_0 = ((unsigned char) si_1);
    uc_0 = ((unsigned char) uLi_1);
    uc_0 = ((unsigned char) sLi_1);
    uc_0 = ((unsigned char) uLLi_1);
    uc_0 = ((unsigned char) sLLi_1);
    uc_0 = ((unsigned char) f_1);
    uc_0 = ((unsigned char) d_1);
    uc_0 = ((unsigned char) Ld_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int [3]' a 'unsigned char'
//     uc_0 = ((unsigned char) ai_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double [3]' a 'unsigned char'
//     uc_0 = ((unsigned char) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'unsigned char'
//     uc_0 = ((unsigned char) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'unsigned char'
//     uc_0 = ((unsigned char) struct$si$si$si_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'char *' a 'unsigned char'
//     uc_0 = ((unsigned char) pc_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'short *' a 'unsigned char'
//     uc_0 = ((unsigned char) pSi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int *' a 'unsigned char'
//     uc_0 = ((unsigned char) pi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'long *' a 'unsigned char'
//     uc_0 = ((unsigned char) pLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64 *' a 'unsigned char'
//     uc_0 = ((unsigned char) pLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'float *' a 'unsigned char'
//     uc_0 = ((unsigned char) pf_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double *' a 'unsigned char'
//     uc_0 = ((unsigned char) pd_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'long double *' a 'unsigned char'
//     uc_0 = ((unsigned char) pLd_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int (*)[]' a 'unsigned char'
//     uc_0 = ((unsigned char) pai_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double (*)[]' a 'unsigned char'
//     uc_0 = ((unsigned char) pad_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'struct1_t *' a 'unsigned char'
//     uc_0 = ((unsigned char) pstruct$si$si_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'struct2_t *' a 'unsigned char'
//     uc_0 = ((unsigned char) pstruct$si$si$si_1);
    sc_0 = ((signed char) b_1);
    sc_0 = ((signed char) uc_1);
    sc_0 = ((signed char) sc_1);
    sc_0 = ((signed char) uSi_1);
    sc_0 = ((signed char) sSi_1);
    sc_0 = ((signed char) ui_1);
    sc_0 = ((signed char) si_1);
    sc_0 = ((signed char) uLi_1);
    sc_0 = ((signed char) sLi_1);
    sc_0 = ((signed char) uLLi_1);
    sc_0 = ((signed char) sLLi_1);
    sc_0 = ((signed char) f_1);
    sc_0 = ((signed char) d_1);
    sc_0 = ((signed char) Ld_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int [3]' a 'char'
//     sc_0 = ((signed char) ai_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double [3]' a 'char'
//     sc_0 = ((signed char) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'char'
//     sc_0 = ((signed char) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'char'
//     sc_0 = ((signed char) struct$si$si$si_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'char *' a 'char'
//     sc_0 = ((signed char) pc_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'short *' a 'char'
//     sc_0 = ((signed char) pSi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int *' a 'char'
//     sc_0 = ((signed char) pi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'long *' a 'char'
//     sc_0 = ((signed char) pLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64 *' a 'char'
//     sc_0 = ((signed char) pLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'float *' a 'char'
//     sc_0 = ((signed char) pf_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double *' a 'char'
//     sc_0 = ((signed char) pd_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'long double *' a 'char'
//     sc_0 = ((signed char) pLd_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int (*)[]' a 'char'
//     sc_0 = ((signed char) pai_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double (*)[]' a 'char'
//     sc_0 = ((signed char) pad_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'struct1_t *' a 'char'
//     sc_0 = ((signed char) pstruct$si$si_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'struct2_t *' a 'char'
//     sc_0 = ((signed char) pstruct$si$si$si_1);
    uSi_0 = ((unsigned short int) b_1);
    uSi_0 = ((unsigned short int) uc_1);
    uSi_0 = ((unsigned short int) sc_1);
    uSi_0 = ((unsigned short int) uSi_1);
    uSi_0 = ((unsigned short int) sSi_1);
    uSi_0 = ((unsigned short int) ui_1);
    uSi_0 = ((unsigned short int) si_1);
    uSi_0 = ((unsigned short int) uLi_1);
    uSi_0 = ((unsigned short int) sLi_1);
    uSi_0 = ((unsigned short int) uLLi_1);
    uSi_0 = ((unsigned short int) sLLi_1);
    uSi_0 = ((unsigned short int) f_1);
    uSi_0 = ((unsigned short int) d_1);
    uSi_0 = ((unsigned short int) Ld_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int [3]' a 'unsigned short'
//     uSi_0 = ((unsigned short int) ai_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double [3]' a 'unsigned short'
//     uSi_0 = ((unsigned short int) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'unsigned short'
//     uSi_0 = ((unsigned short int) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'unsigned short'
//     uSi_0 = ((unsigned short int) struct$si$si$si_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'char *' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pc_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'short *' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pSi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int *' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'long *' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64 *' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'float *' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pf_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double *' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pd_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'long double *' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pLd_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int (*)[]' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pai_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double (*)[]' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pad_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'struct1_t *' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pstruct$si$si_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'struct2_t *' a 'unsigned short'
//     uSi_0 = ((unsigned short int) pstruct$si$si$si_1);
    sSi_0 = ((signed short int) b_1);
    sSi_0 = ((signed short int) uc_1);
    sSi_0 = ((signed short int) sc_1);
    sSi_0 = ((signed short int) uSi_1);
    sSi_0 = ((signed short int) sSi_1);
    sSi_0 = ((signed short int) ui_1);
    sSi_0 = ((signed short int) si_1);
    sSi_0 = ((signed short int) uLi_1);
    sSi_0 = ((signed short int) sLi_1);
    sSi_0 = ((signed short int) uLLi_1);
    sSi_0 = ((signed short int) sLLi_1);
    sSi_0 = ((signed short int) f_1);
    sSi_0 = ((signed short int) d_1);
    sSi_0 = ((signed short int) Ld_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int [3]' a 'short'
//     sSi_0 = ((signed short int) ai_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double [3]' a 'short'
//     sSi_0 = ((signed short int) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'short'
//     sSi_0 = ((signed short int) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'short'
//     sSi_0 = ((signed short int) struct$si$si$si_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'char *' a 'short'
//     sSi_0 = ((signed short int) pc_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'short *' a 'short'
//     sSi_0 = ((signed short int) pSi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int *' a 'short'
//     sSi_0 = ((signed short int) pi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'long *' a 'short'
//     sSi_0 = ((signed short int) pLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64 *' a 'short'
//     sSi_0 = ((signed short int) pLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'float *' a 'short'
//     sSi_0 = ((signed short int) pf_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double *' a 'short'
//     sSi_0 = ((signed short int) pd_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'long double *' a 'short'
//     sSi_0 = ((signed short int) pLd_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'int (*)[]' a 'short'
//     sSi_0 = ((signed short int) pai_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'double (*)[]' a 'short'
//     sSi_0 = ((signed short int) pad_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'struct1_t *' a 'short'
//     sSi_0 = ((signed short int) pstruct$si$si_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'struct2_t *' a 'short'
//     sSi_0 = ((signed short int) pstruct$si$si$si_1);
    ui_0 = ((unsigned int) b_1);
    ui_0 = ((unsigned int) uc_1);
    ui_0 = ((unsigned int) sc_1);
    ui_0 = ((unsigned int) uSi_1);
    ui_0 = ((unsigned int) sSi_1);
    ui_0 = ((unsigned int) ui_1);
    ui_0 = ((unsigned int) si_1);
    ui_0 = ((unsigned int) uLi_1);
    ui_0 = ((unsigned int) sLi_1);
    ui_0 = ((unsigned int) uLLi_1);
    ui_0 = ((unsigned int) sLLi_1);
    ui_0 = ((unsigned int) f_1);
    ui_0 = ((unsigned int) d_1);
    ui_0 = ((unsigned int) Ld_1);
    ui_0 = ((unsigned int) ai_1);
    ui_0 = ((unsigned int) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'unsigned int'
//     ui_0 = ((unsigned int) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'unsigned int'
//     ui_0 = ((unsigned int) struct$si$si$si_1);
    ui_0 = ((unsigned int) pc_1);
    ui_0 = ((unsigned int) pSi_1);
    ui_0 = ((unsigned int) pi_1);
    ui_0 = ((unsigned int) pLi_1);
    ui_0 = ((unsigned int) pLLi_1);
    ui_0 = ((unsigned int) pf_1);
    ui_0 = ((unsigned int) pd_1);
    ui_0 = ((unsigned int) pLd_1);
    ui_0 = ((unsigned int) pai_1);
    ui_0 = ((unsigned int) pad_1);
    ui_0 = ((unsigned int) pstruct$si$si_1);
    ui_0 = ((unsigned int) pstruct$si$si$si_1);
    si_0 = ((signed int) b_1);
    si_0 = ((signed int) uc_1);
    si_0 = ((signed int) sc_1);
    si_0 = ((signed int) uSi_1);
    si_0 = ((signed int) sSi_1);
    si_0 = ((signed int) ui_1);
    si_0 = ((signed int) si_1);
    si_0 = ((signed int) uLi_1);
    si_0 = ((signed int) sLi_1);
    si_0 = ((signed int) uLLi_1);
    si_0 = ((signed int) sLLi_1);
    si_0 = ((signed int) f_1);
    si_0 = ((signed int) d_1);
    si_0 = ((signed int) Ld_1);
    si_0 = ((signed int) ai_1);
    si_0 = ((signed int) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'int'
//     si_0 = ((signed int) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'int'
//     si_0 = ((signed int) struct$si$si$si_1);
    si_0 = ((signed int) pc_1);
    si_0 = ((signed int) pSi_1);
    si_0 = ((signed int) pi_1);
    si_0 = ((signed int) pLi_1);
    si_0 = ((signed int) pLLi_1);
    si_0 = ((signed int) pf_1);
    si_0 = ((signed int) pd_1);
    si_0 = ((signed int) pLd_1);
    si_0 = ((signed int) pai_1);
    si_0 = ((signed int) pad_1);
    si_0 = ((signed int) pstruct$si$si_1);
    si_0 = ((signed int) pstruct$si$si$si_1);
    uLi_0 = ((unsigned long int) b_1);
    uLi_0 = ((unsigned long int) uc_1);
    uLi_0 = ((unsigned long int) sc_1);
    uLi_0 = ((unsigned long int) uSi_1);
    uLi_0 = ((unsigned long int) sSi_1);
    uLi_0 = ((unsigned long int) ui_1);
    uLi_0 = ((unsigned long int) si_1);
    uLi_0 = ((unsigned long int) uLi_1);
    uLi_0 = ((unsigned long int) sLi_1);
    uLi_0 = ((unsigned long int) uLLi_1);
    uLi_0 = ((unsigned long int) sLLi_1);
    uLi_0 = ((unsigned long int) f_1);
    uLi_0 = ((unsigned long int) d_1);
    uLi_0 = ((unsigned long int) Ld_1);
    uLi_0 = ((unsigned long int) ai_1);
    uLi_0 = ((unsigned long int) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'unsigned long'
//     uLi_0 = ((unsigned long int) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'unsigned long'
//     uLi_0 = ((unsigned long int) struct$si$si$si_1);
    uLi_0 = ((unsigned long int) pc_1);
    uLi_0 = ((unsigned long int) pSi_1);
    uLi_0 = ((unsigned long int) pi_1);
    uLi_0 = ((unsigned long int) pLi_1);
    uLi_0 = ((unsigned long int) pLLi_1);
    uLi_0 = ((unsigned long int) pf_1);
    uLi_0 = ((unsigned long int) pd_1);
    uLi_0 = ((unsigned long int) pLd_1);
    uLi_0 = ((unsigned long int) pai_1);
    uLi_0 = ((unsigned long int) pad_1);
    uLi_0 = ((unsigned long int) pstruct$si$si_1);
    uLi_0 = ((unsigned long int) pstruct$si$si$si_1);
    sLi_0 = ((signed long int) b_1);
    sLi_0 = ((signed long int) uc_1);
    sLi_0 = ((signed long int) sc_1);
    sLi_0 = ((signed long int) uSi_1);
    sLi_0 = ((signed long int) sSi_1);
    sLi_0 = ((signed long int) ui_1);
    sLi_0 = ((signed long int) si_1);
    sLi_0 = ((signed long int) uLi_1);
    sLi_0 = ((signed long int) sLi_1);
    sLi_0 = ((signed long int) uLLi_1);
    sLi_0 = ((signed long int) sLLi_1);
    sLi_0 = ((signed long int) f_1);
    sLi_0 = ((signed long int) d_1);
    sLi_0 = ((signed long int) Ld_1);
    sLi_0 = ((signed long int) ai_1);
    sLi_0 = ((signed long int) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'long'
//     sLi_0 = ((signed long int) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'long'
//     sLi_0 = ((signed long int) struct$si$si$si_1);
    sLi_0 = ((signed long int) pc_1);
    sLi_0 = ((signed long int) pSi_1);
    sLi_0 = ((signed long int) pi_1);
    sLi_0 = ((signed long int) pLi_1);
    sLi_0 = ((signed long int) pLLi_1);
    sLi_0 = ((signed long int) pf_1);
    sLi_0 = ((signed long int) pd_1);
    sLi_0 = ((signed long int) pLd_1);
    sLi_0 = ((signed long int) pai_1);
    sLi_0 = ((signed long int) pad_1);
    sLi_0 = ((signed long int) pstruct$si$si_1);
    sLi_0 = ((signed long int) pstruct$si$si$si_1);
    uLLi_0 = ((unsigned long long int) b_1);
    uLLi_0 = ((unsigned long long int) uc_1);
    uLLi_0 = ((unsigned long long int) sc_1);
    uLLi_0 = ((unsigned long long int) uSi_1);
    uLLi_0 = ((unsigned long long int) sSi_1);
    uLLi_0 = ((unsigned long long int) ui_1);
    uLLi_0 = ((unsigned long long int) si_1);
    uLLi_0 = ((unsigned long long int) uLi_1);
    uLLi_0 = ((unsigned long long int) sLi_1);
    uLLi_0 = ((unsigned long long int) uLLi_1);
    uLLi_0 = ((unsigned long long int) sLLi_1);
    uLLi_0 = ((unsigned long long int) f_1);
    uLLi_0 = ((unsigned long long int) d_1);
    uLLi_0 = ((unsigned long long int) Ld_1);
    uLLi_0 = ((unsigned long long int) ai_1);
    uLLi_0 = ((unsigned long long int) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'unsigned __int64'
//     uLLi_0 = ((unsigned long long int) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'unsigned __int64'
//     uLLi_0 = ((unsigned long long int) struct$si$si$si_1);
//> error C2220: advertencia tratada como error; ning·n archivo 'object' generado
//> warning C4826: La conversi≤n de 'char *' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pc_1);
//> warning C4826: La conversi≤n de 'short *' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pSi_1);
//> warning C4826: La conversi≤n de 'int *' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pi_1);
//> warning C4826: La conversi≤n de 'long *' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pLi_1);
//> warning C4826: La conversi≤n de '__int64 *' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pLLi_1);
//> warning C4826: La conversi≤n de 'float *' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pf_1);
//> warning C4826: La conversi≤n de 'double *' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pd_1);
//> warning C4826: La conversi≤n de 'long double *' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pLd_1);
//> warning C4826: La conversi≤n de 'int (*)[]' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pai_1);
//> warning C4826: La conversi≤n de 'double (*)[]' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pad_1);
//> warning C4826: La conversi≤n de 'struct1_t *' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pstruct$si$si_1);
//> warning C4826: La conversi≤n de 'struct2_t *' a 'unsigned __int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     uLLi_0 = ((unsigned long long int) pstruct$si$si$si_1);
    sLLi_0 = ((signed long long int) b_1);
    sLLi_0 = ((signed long long int) uc_1);
    sLLi_0 = ((signed long long int) sc_1);
    sLLi_0 = ((signed long long int) uSi_1);
    sLLi_0 = ((signed long long int) sSi_1);
    sLLi_0 = ((signed long long int) ui_1);
    sLLi_0 = ((signed long long int) si_1);
    sLLi_0 = ((signed long long int) uLi_1);
    sLLi_0 = ((signed long long int) sLi_1);
    sLLi_0 = ((signed long long int) uLLi_1);
    sLLi_0 = ((signed long long int) sLLi_1);
    sLLi_0 = ((signed long long int) f_1);
    sLLi_0 = ((signed long long int) d_1);
    sLLi_0 = ((signed long long int) Ld_1);
    sLLi_0 = ((signed long long int) ai_1);
    sLLi_0 = ((signed long long int) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a '__int64'
//     sLLi_0 = ((signed long long int) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a '__int64'
//     sLLi_0 = ((signed long long int) struct$si$si$si_1);
//> warning C4826: La conversi≤n de 'char *' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pc_1);
//> warning C4826: La conversi≤n de 'short *' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pSi_1);
//> warning C4826: La conversi≤n de 'int *' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pi_1);
//> warning C4826: La conversi≤n de 'long *' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pLi_1);
//> warning C4826: La conversi≤n de '__int64 *' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pLLi_1);
//> warning C4826: La conversi≤n de 'float *' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pf_1);
//> warning C4826: La conversi≤n de 'double *' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pd_1);
//> warning C4826: La conversi≤n de 'long double *' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pLd_1);
//> warning C4826: La conversi≤n de 'int (*)[]' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pai_1);
//> warning C4826: La conversi≤n de 'double (*)[]' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pad_1);
//> warning C4826: La conversi≤n de 'struct1_t *' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pstruct$si$si_1);
//> warning C4826: La conversi≤n de 'struct2_t *' a '__int64' produce una extensi≤n de signo. Esto puede provocar un comportamiento en tiempo de ejecuci≤n inesperado.
//     sLLi_0 = ((signed long long int) pstruct$si$si$si_1);
    f_0 = ((float) b_1);
    f_0 = ((float) uc_1);
    f_0 = ((float) sc_1);
    f_0 = ((float) uSi_1);
    f_0 = ((float) sSi_1);
    f_0 = ((float) ui_1);
    f_0 = ((float) si_1);
    f_0 = ((float) uLi_1);
    f_0 = ((float) sLi_1);
    f_0 = ((float) uLLi_1);
    f_0 = ((float) sLLi_1);
    f_0 = ((float) f_1);
    f_0 = ((float) d_1);
    f_0 = ((float) Ld_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int [3]' a 'float'
//     f_0 = ((float) ai_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double [3]' a 'float'
//     f_0 = ((float) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'float'
//     f_0 = ((float) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'float'
//     f_0 = ((float) struct$si$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'char *' a 'float'
//     f_0 = ((float) pc_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'short *' a 'float'
//     f_0 = ((float) pSi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int *' a 'float'
//     f_0 = ((float) pi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long *' a 'float'
//     f_0 = ((float) pLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de '__int64 *' a 'float'
//     f_0 = ((float) pLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float *' a 'float'
//     f_0 = ((float) pf_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double *' a 'float'
//     f_0 = ((float) pd_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double *' a 'float'
//     f_0 = ((float) pLd_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int (*)[]' a 'float'
//     f_0 = ((float) pai_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double (*)[]' a 'float'
//     f_0 = ((float) pad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t *' a 'float'
//     f_0 = ((float) pstruct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t *' a 'float'
//     f_0 = ((float) pstruct$si$si$si_1);
    d_0 = ((double) b_1);
    d_0 = ((double) uc_1);
    d_0 = ((double) sc_1);
    d_0 = ((double) uSi_1);
    d_0 = ((double) sSi_1);
    d_0 = ((double) ui_1);
    d_0 = ((double) si_1);
    d_0 = ((double) uLi_1);
    d_0 = ((double) sLi_1);
    d_0 = ((double) uLLi_1);
    d_0 = ((double) sLLi_1);
    d_0 = ((double) f_1);
    d_0 = ((double) d_1);
    d_0 = ((double) Ld_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int [3]' a 'double'
//     d_0 = ((double) ai_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double [3]' a 'double'
//     d_0 = ((double) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'double'
//     d_0 = ((double) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'double'
//     d_0 = ((double) struct$si$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'char *' a 'double'
//     d_0 = ((double) pc_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'short *' a 'double'
//     d_0 = ((double) pSi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int *' a 'double'
//     d_0 = ((double) pi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long *' a 'double'
//     d_0 = ((double) pLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de '__int64 *' a 'double'
//     d_0 = ((double) pLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float *' a 'double'
//     d_0 = ((double) pf_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double *' a 'double'
//     d_0 = ((double) pd_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double *' a 'double'
//     d_0 = ((double) pLd_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int (*)[]' a 'double'
//     d_0 = ((double) pai_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double (*)[]' a 'double'
//     d_0 = ((double) pad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t *' a 'double'
//     d_0 = ((double) pstruct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t *' a 'double'
//     d_0 = ((double) pstruct$si$si$si_1);
    Ld_0 = ((long double) b_1);
    Ld_0 = ((long double) uc_1);
    Ld_0 = ((long double) sc_1);
    Ld_0 = ((long double) uSi_1);
    Ld_0 = ((long double) sSi_1);
    Ld_0 = ((long double) ui_1);
    Ld_0 = ((long double) si_1);
    Ld_0 = ((long double) uLi_1);
    Ld_0 = ((long double) sLi_1);
    Ld_0 = ((long double) uLLi_1);
    Ld_0 = ((long double) sLLi_1);
    Ld_0 = ((long double) f_1);
    Ld_0 = ((long double) d_1);
    Ld_0 = ((long double) Ld_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int [3]' a 'long double'
//     Ld_0 = ((long double) ai_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double [3]' a 'long double'
//     Ld_0 = ((long double) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'long double'
//     Ld_0 = ((long double) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'long double'
//     Ld_0 = ((long double) struct$si$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'char *' a 'long double'
//     Ld_0 = ((long double) pc_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'short *' a 'long double'
//     Ld_0 = ((long double) pSi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int *' a 'long double'
//     Ld_0 = ((long double) pi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long *' a 'long double'
//     Ld_0 = ((long double) pLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de '__int64 *' a 'long double'
//     Ld_0 = ((long double) pLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float *' a 'long double'
//     Ld_0 = ((long double) pf_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double *' a 'long double'
//     Ld_0 = ((long double) pd_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double *' a 'long double'
//     Ld_0 = ((long double) pLd_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int (*)[]' a 'long double'
//     Ld_0 = ((long double) pai_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double (*)[]' a 'long double'
//     Ld_0 = ((long double) pad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t *' a 'long double'
//     Ld_0 = ((long double) pstruct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t *' a 'long double'
//     Ld_0 = ((long double) pstruct$si$si$si_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) b_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) uc_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) sc_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) uSi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) sSi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) ui_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) si_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) uLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) sLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) uLLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) sLLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) f_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) d_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) Ld_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) ai_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) ad_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) struct$si$si_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) struct$si$si$si_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pc_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pSi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pLLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pf_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pd_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pLd_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pai_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pad_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pstruct$si$si_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ai_0 = ((int []) pstruct$si$si$si_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//> fatal error C1003: el recuento de errores supera 100; se detiene la compilaci≤n
//     ad_0 = ((double []) b_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) uc_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) sc_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) uSi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) sSi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) ui_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) si_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) uLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) sLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) uLLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) sLLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) f_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) d_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) Ld_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) ai_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) ad_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) struct$si$si_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) struct$si$si$si_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pc_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pSi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pLLi_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pf_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pd_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pLd_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pai_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pad_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pstruct$si$si_1);
//> error C2067: la conversi≤n a tipo de matriz no es vßlida
//     ad_0 = ((double []) pstruct$si$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'bool' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) b_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'unsigned char' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) uc_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'char' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) sc_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'unsigned short' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) uSi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'short' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) sSi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'unsigned int' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) ui_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'unsigned long' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) uLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) sLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'unsigned __int64' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) uLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de '__int64' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) Ld_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int [3]' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) ai_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double [3]' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) struct$si$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'char *' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pc_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'short *' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pSi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int *' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long *' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de '__int64 *' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float *' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pf_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double *' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pd_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double *' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pLd_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int (*)[]' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pai_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double (*)[]' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t *' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pstruct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t *' a 'struct1_t'
//     struct$si$si_0 = ((struct1_t) pstruct$si$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'bool' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) b_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'unsigned char' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) uc_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'char' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) sc_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'unsigned short' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) uSi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'short' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) sSi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'unsigned int' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) ui_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'unsigned long' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) uLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) sLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'unsigned __int64' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) uLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de '__int64' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) Ld_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int [3]' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) ai_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double [3]' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) struct$si$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'char *' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pc_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'short *' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pSi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int *' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long *' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de '__int64 *' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float *' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pf_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double *' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pd_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double *' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pLd_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'int (*)[]' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pai_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double (*)[]' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t *' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pstruct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t *' a 'struct2_t'
//     struct$si$si$si_0 = ((struct2_t) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'char *' de mayor tama±o
//     pc_0 = ((char *) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'char *' de mayor tama±o
//     pc_0 = ((char *) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'char *' de mayor tama±o
//     pc_0 = ((char *) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'char *' de mayor tama±o
//     pc_0 = ((char *) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'char *' de mayor tama±o
//     pc_0 = ((char *) sSi_1);
    pc_0 = ((char *) ui_1);
    pc_0 = ((char *) si_1);
    pc_0 = ((char *) uLi_1);
    pc_0 = ((char *) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'char *'
//     pc_0 = ((char *) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'char *'
//     pc_0 = ((char *) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'char *'
//     pc_0 = ((char *) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'char *'
//     pc_0 = ((char *) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'char *'
//     pc_0 = ((char *) Ld_1);
    pc_0 = ((char *) ai_1);
    pc_0 = ((char *) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'char *'
//     pc_0 = ((char *) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'char *'
//     pc_0 = ((char *) struct$si$si$si_1);
    pc_0 = ((char *) pc_1);
    pc_0 = ((char *) pSi_1);
    pc_0 = ((char *) pi_1);
    pc_0 = ((char *) pLi_1);
    pc_0 = ((char *) pLLi_1);
    pc_0 = ((char *) pf_1);
    pc_0 = ((char *) pd_1);
    pc_0 = ((char *) pLd_1);
    pc_0 = ((char *) pai_1);
    pc_0 = ((char *) pad_1);
    pc_0 = ((char *) pstruct$si$si_1);
    pc_0 = ((char *) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'short *' de mayor tama±o
//     pSi_0 = ((short int *) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'short *' de mayor tama±o
//     pSi_0 = ((short int *) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'short *' de mayor tama±o
//     pSi_0 = ((short int *) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'short *' de mayor tama±o
//     pSi_0 = ((short int *) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'short *' de mayor tama±o
//     pSi_0 = ((short int *) sSi_1);
    pSi_0 = ((short int *) ui_1);
    pSi_0 = ((short int *) si_1);
    pSi_0 = ((short int *) uLi_1);
    pSi_0 = ((short int *) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'short *'
//     pSi_0 = ((short int *) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'short *'
//     pSi_0 = ((short int *) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'short *'
//     pSi_0 = ((short int *) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'short *'
//     pSi_0 = ((short int *) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'short *'
//     pSi_0 = ((short int *) Ld_1);
    pSi_0 = ((short int *) ai_1);
    pSi_0 = ((short int *) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'short *'
//     pSi_0 = ((short int *) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'short *'
//     pSi_0 = ((short int *) struct$si$si$si_1);
    pSi_0 = ((short int *) pc_1);
    pSi_0 = ((short int *) pSi_1);
    pSi_0 = ((short int *) pi_1);
    pSi_0 = ((short int *) pLi_1);
    pSi_0 = ((short int *) pLLi_1);
    pSi_0 = ((short int *) pf_1);
    pSi_0 = ((short int *) pd_1);
    pSi_0 = ((short int *) pLd_1);
    pSi_0 = ((short int *) pai_1);
    pSi_0 = ((short int *) pad_1);
    pSi_0 = ((short int *) pstruct$si$si_1);
    pSi_0 = ((short int *) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'int *' de mayor tama±o
//     pi_0 = ((int *) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'int *' de mayor tama±o
//     pi_0 = ((int *) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'int *' de mayor tama±o
//     pi_0 = ((int *) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'int *' de mayor tama±o
//     pi_0 = ((int *) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'int *' de mayor tama±o
//     pi_0 = ((int *) sSi_1);
    pi_0 = ((int *) ui_1);
    pi_0 = ((int *) si_1);
    pi_0 = ((int *) uLi_1);
    pi_0 = ((int *) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'int *'
//     pi_0 = ((int *) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'int *'
//     pi_0 = ((int *) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'int *'
//     pi_0 = ((int *) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'int *'
//> fatal error C1003: el recuento de errores supera 100; se detiene la compilaci≤n
//     pi_0 = ((int *) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'int *'
//     pi_0 = ((int *) Ld_1);
    pi_0 = ((int *) ai_1);
    pi_0 = ((int *) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'int *'
//     pi_0 = ((int *) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'int *'
//     pi_0 = ((int *) struct$si$si$si_1);
    pi_0 = ((int *) pc_1);
    pi_0 = ((int *) pSi_1);
    pi_0 = ((int *) pi_1);
    pi_0 = ((int *) pLi_1);
    pi_0 = ((int *) pLLi_1);
    pi_0 = ((int *) pf_1);
    pi_0 = ((int *) pd_1);
    pi_0 = ((int *) pLd_1);
    pi_0 = ((int *) pai_1);
    pi_0 = ((int *) pad_1);
    pi_0 = ((int *) pstruct$si$si_1);
    pi_0 = ((int *) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'long *' de mayor tama±o
//     pLi_0 = ((long int *) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'long *' de mayor tama±o
//     pLi_0 = ((long int *) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'long *' de mayor tama±o
//     pLi_0 = ((long int *) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'long *' de mayor tama±o
//     pLi_0 = ((long int *) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'long *' de mayor tama±o
//     pLi_0 = ((long int *) sSi_1);
    pLi_0 = ((long int *) ui_1);
    pLi_0 = ((long int *) si_1);
    pLi_0 = ((long int *) uLi_1);
    pLi_0 = ((long int *) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'long *'
//     pLi_0 = ((long int *) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'long *'
//     pLi_0 = ((long int *) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'long *'
//     pLi_0 = ((long int *) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'long *'
//     pLi_0 = ((long int *) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'long *'
//     pLi_0 = ((long int *) Ld_1);
    pLi_0 = ((long int *) ai_1);
    pLi_0 = ((long int *) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'long *'
//     pLi_0 = ((long int *) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'long *'
//     pLi_0 = ((long int *) struct$si$si$si_1);
    pLi_0 = ((long int *) pc_1);
    pLi_0 = ((long int *) pSi_1);
    pLi_0 = ((long int *) pi_1);
    pLi_0 = ((long int *) pLi_1);
    pLi_0 = ((long int *) pLLi_1);
    pLi_0 = ((long int *) pf_1);
    pLi_0 = ((long int *) pd_1);
    pLi_0 = ((long int *) pLd_1);
    pLi_0 = ((long int *) pai_1);
    pLi_0 = ((long int *) pad_1);
    pLi_0 = ((long int *) pstruct$si$si_1);
    pLi_0 = ((long int *) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a '__int64 *' de mayor tama±o
//     pLLi_0 = ((long long int *) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a '__int64 *' de mayor tama±o
//     pLLi_0 = ((long long int *) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a '__int64 *' de mayor tama±o
//     pLLi_0 = ((long long int *) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a '__int64 *' de mayor tama±o
//     pLLi_0 = ((long long int *) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a '__int64 *' de mayor tama±o
//     pLLi_0 = ((long long int *) sSi_1);
    pLLi_0 = ((long long int *) ui_1);
    pLLi_0 = ((long long int *) si_1);
    pLLi_0 = ((long long int *) uLi_1);
    pLLi_0 = ((long long int *) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a '__int64 *'
//     pLLi_0 = ((long long int *) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a '__int64 *'
//     pLLi_0 = ((long long int *) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a '__int64 *'
//     pLLi_0 = ((long long int *) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a '__int64 *'
//     pLLi_0 = ((long long int *) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a '__int64 *'
//     pLLi_0 = ((long long int *) Ld_1);
    pLLi_0 = ((long long int *) ai_1);
    pLLi_0 = ((long long int *) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a '__int64 *'
//     pLLi_0 = ((long long int *) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a '__int64 *'
//     pLLi_0 = ((long long int *) struct$si$si$si_1);
    pLLi_0 = ((long long int *) pc_1);
    pLLi_0 = ((long long int *) pSi_1);
    pLLi_0 = ((long long int *) pi_1);
    pLLi_0 = ((long long int *) pLi_1);
    pLLi_0 = ((long long int *) pLLi_1);
    pLLi_0 = ((long long int *) pf_1);
    pLLi_0 = ((long long int *) pd_1);
    pLLi_0 = ((long long int *) pLd_1);
    pLLi_0 = ((long long int *) pai_1);
    pLLi_0 = ((long long int *) pad_1);
    pLLi_0 = ((long long int *) pstruct$si$si_1);
    pLLi_0 = ((long long int *) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'float *' de mayor tama±o
//     pf_0 = ((float *) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'float *' de mayor tama±o
//     pf_0 = ((float *) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'float *' de mayor tama±o
//     pf_0 = ((float *) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'float *' de mayor tama±o
//     pf_0 = ((float *) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'float *' de mayor tama±o
//     pf_0 = ((float *) sSi_1);
    pf_0 = ((float *) ui_1);
    pf_0 = ((float *) si_1);
    pf_0 = ((float *) uLi_1);
    pf_0 = ((float *) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'float *'
//     pf_0 = ((float *) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'float *'
//     pf_0 = ((float *) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'float *'
//     pf_0 = ((float *) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'float *'
//     pf_0 = ((float *) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'float *'
//     pf_0 = ((float *) Ld_1);
    pf_0 = ((float *) ai_1);
    pf_0 = ((float *) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'float *'
//     pf_0 = ((float *) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'float *'
//     pf_0 = ((float *) struct$si$si$si_1);
    pf_0 = ((float *) pc_1);
    pf_0 = ((float *) pSi_1);
    pf_0 = ((float *) pi_1);
    pf_0 = ((float *) pLi_1);
    pf_0 = ((float *) pLLi_1);
    pf_0 = ((float *) pf_1);
    pf_0 = ((float *) pd_1);
    pf_0 = ((float *) pLd_1);
    pf_0 = ((float *) pai_1);
    pf_0 = ((float *) pad_1);
    pf_0 = ((float *) pstruct$si$si_1);
    pf_0 = ((float *) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'double *' de mayor tama±o
//     pd_0 = ((double *) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'double *' de mayor tama±o
//     pd_0 = ((double *) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'double *' de mayor tama±o
//     pd_0 = ((double *) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'double *' de mayor tama±o
//     pd_0 = ((double *) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'double *' de mayor tama±o
//     pd_0 = ((double *) sSi_1);
    pd_0 = ((double *) ui_1);
    pd_0 = ((double *) si_1);
    pd_0 = ((double *) uLi_1);
    pd_0 = ((double *) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'double *'
//     pd_0 = ((double *) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'double *'
//     pd_0 = ((double *) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'double *'
//     pd_0 = ((double *) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'double *'
//     pd_0 = ((double *) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'double *'
//     pd_0 = ((double *) Ld_1);
    pd_0 = ((double *) ai_1);
    pd_0 = ((double *) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'double *'
//     pd_0 = ((double *) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'double *'
//     pd_0 = ((double *) struct$si$si$si_1);
    pd_0 = ((double *) pc_1);
    pd_0 = ((double *) pSi_1);
    pd_0 = ((double *) pi_1);
    pd_0 = ((double *) pLi_1);
    pd_0 = ((double *) pLLi_1);
    pd_0 = ((double *) pf_1);
    pd_0 = ((double *) pd_1);
    pd_0 = ((double *) pLd_1);
    pd_0 = ((double *) pai_1);
    pd_0 = ((double *) pad_1);
    pd_0 = ((double *) pstruct$si$si_1);
    pd_0 = ((double *) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'long double *' de mayor tama±o
//     pLd_0 = ((long double *) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'long double *' de mayor tama±o
//     pLd_0 = ((long double *) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'long double *' de mayor tama±o
//     pLd_0 = ((long double *) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'long double *' de mayor tama±o
//     pLd_0 = ((long double *) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'long double *' de mayor tama±o
//     pLd_0 = ((long double *) sSi_1);
    pLd_0 = ((long double *) ui_1);
    pLd_0 = ((long double *) si_1);
    pLd_0 = ((long double *) uLi_1);
    pLd_0 = ((long double *) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'long double *'
//     pLd_0 = ((long double *) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'long double *'
//     pLd_0 = ((long double *) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'long double *'
//     pLd_0 = ((long double *) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'long double *'
//     pLd_0 = ((long double *) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'long double *'
//     pLd_0 = ((long double *) Ld_1);
    pLd_0 = ((long double *) ai_1);
    pLd_0 = ((long double *) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'long double *'
//     pLd_0 = ((long double *) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'long double *'
//     pLd_0 = ((long double *) struct$si$si$si_1);
    pLd_0 = ((long double *) pc_1);
    pLd_0 = ((long double *) pSi_1);
    pLd_0 = ((long double *) pi_1);
    pLd_0 = ((long double *) pLi_1);
    pLd_0 = ((long double *) pLLi_1);
    pLd_0 = ((long double *) pf_1);
    pLd_0 = ((long double *) pd_1);
    pLd_0 = ((long double *) pLd_1);
    pLd_0 = ((long double *) pai_1);
    pLd_0 = ((long double *) pad_1);
    pLd_0 = ((long double *) pstruct$si$si_1);
    pLd_0 = ((long double *) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'int (*)[]' de mayor tama±o
//     pai_0 = ((int (*)[]) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'int (*)[]' de mayor tama±o
//     pai_0 = ((int (*)[]) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'int (*)[]' de mayor tama±o
//     pai_0 = ((int (*)[]) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'int (*)[]' de mayor tama±o
//     pai_0 = ((int (*)[]) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'int (*)[]' de mayor tama±o
//     pai_0 = ((int (*)[]) sSi_1);
    pai_0 = ((int (*)[]) ui_1);
    pai_0 = ((int (*)[]) si_1);
    pai_0 = ((int (*)[]) uLi_1);
    pai_0 = ((int (*)[]) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'int (*)[]'
//     pai_0 = ((int (*)[]) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'int (*)[]'
//     pai_0 = ((int (*)[]) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'int (*)[]'
//     pai_0 = ((int (*)[]) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'int (*)[]'
//     pai_0 = ((int (*)[]) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'int (*)[]'
//     pai_0 = ((int (*)[]) Ld_1);
    pai_0 = ((int (*)[]) ai_1);
    pai_0 = ((int (*)[]) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'int (*)[]'
//     pai_0 = ((int (*)[]) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'int (*)[]'
//     pai_0 = ((int (*)[]) struct$si$si$si_1);
    pai_0 = ((int (*)[]) pc_1);
    pai_0 = ((int (*)[]) pSi_1);
    pai_0 = ((int (*)[]) pi_1);
    pai_0 = ((int (*)[]) pLi_1);
    pai_0 = ((int (*)[]) pLLi_1);
    pai_0 = ((int (*)[]) pf_1);
    pai_0 = ((int (*)[]) pd_1);
    pai_0 = ((int (*)[]) pLd_1);
    pai_0 = ((int (*)[]) pai_1);
    pai_0 = ((int (*)[]) pad_1);
    pai_0 = ((int (*)[]) pstruct$si$si_1);
    pai_0 = ((int (*)[]) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'double (*)[]' de mayor tama±o
//     pad_0 = ((double (*)[]) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'double (*)[]' de mayor tama±o
//     pad_0 = ((double (*)[]) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'double (*)[]' de mayor tama±o
//     pad_0 = ((double (*)[]) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'double (*)[]' de mayor tama±o
//     pad_0 = ((double (*)[]) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'double (*)[]' de mayor tama±o
//     pad_0 = ((double (*)[]) sSi_1);
    pad_0 = ((double (*)[]) ui_1);
    pad_0 = ((double (*)[]) si_1);
    pad_0 = ((double (*)[]) uLi_1);
    pad_0 = ((double (*)[]) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'double (*)[]'
//     pad_0 = ((double (*)[]) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'double (*)[]'
//     pad_0 = ((double (*)[]) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'double (*)[]'
//     pad_0 = ((double (*)[]) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'double (*)[]'
//     pad_0 = ((double (*)[]) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'double (*)[]'
//     pad_0 = ((double (*)[]) Ld_1);
    pad_0 = ((double (*)[]) ai_1);
    pad_0 = ((double (*)[]) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'double (*)[]'
//     pad_0 = ((double (*)[]) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'double (*)[]'
//     pad_0 = ((double (*)[]) struct$si$si$si_1);
    pad_0 = ((double (*)[]) pc_1);
    pad_0 = ((double (*)[]) pSi_1);
    pad_0 = ((double (*)[]) pi_1);
    pad_0 = ((double (*)[]) pLi_1);
    pad_0 = ((double (*)[]) pLLi_1);
    pad_0 = ((double (*)[]) pf_1);
    pad_0 = ((double (*)[]) pd_1);
    pad_0 = ((double (*)[]) pLd_1);
    pad_0 = ((double (*)[]) pai_1);
    pad_0 = ((double (*)[]) pad_1);
    pad_0 = ((double (*)[]) pstruct$si$si_1);
    pad_0 = ((double (*)[]) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'struct1_t *' de mayor tama±o
//     pstruct$si$si_0 = ((struct1_t *) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'struct1_t *' de mayor tama±o
//     pstruct$si$si_0 = ((struct1_t *) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'struct1_t *' de mayor tama±o
//     pstruct$si$si_0 = ((struct1_t *) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'struct1_t *' de mayor tama±o
//     pstruct$si$si_0 = ((struct1_t *) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'struct1_t *' de mayor tama±o
//     pstruct$si$si_0 = ((struct1_t *) sSi_1);
    pstruct$si$si_0 = ((struct1_t *) ui_1);
    pstruct$si$si_0 = ((struct1_t *) si_1);
    pstruct$si$si_0 = ((struct1_t *) uLi_1);
    pstruct$si$si_0 = ((struct1_t *) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'struct1_t *'
//     pstruct$si$si_0 = ((struct1_t *) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'struct1_t *'
//     pstruct$si$si_0 = ((struct1_t *) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'struct1_t *'
//     pstruct$si$si_0 = ((struct1_t *) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'struct1_t *'
//     pstruct$si$si_0 = ((struct1_t *) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'struct1_t *'
//     pstruct$si$si_0 = ((struct1_t *) Ld_1);
    pstruct$si$si_0 = ((struct1_t *) ai_1);
    pstruct$si$si_0 = ((struct1_t *) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'struct1_t *'
//     pstruct$si$si_0 = ((struct1_t *) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'struct1_t *'
//     pstruct$si$si_0 = ((struct1_t *) struct$si$si$si_1);
    pstruct$si$si_0 = ((struct1_t *) pc_1);
    pstruct$si$si_0 = ((struct1_t *) pSi_1);
    pstruct$si$si_0 = ((struct1_t *) pi_1);
    pstruct$si$si_0 = ((struct1_t *) pLi_1);
    pstruct$si$si_0 = ((struct1_t *) pLLi_1);
    pstruct$si$si_0 = ((struct1_t *) pf_1);
    pstruct$si$si_0 = ((struct1_t *) pd_1);
    pstruct$si$si_0 = ((struct1_t *) pLd_1);
    pstruct$si$si_0 = ((struct1_t *) pai_1);
    pstruct$si$si_0 = ((struct1_t *) pad_1);
    pstruct$si$si_0 = ((struct1_t *) pstruct$si$si_1);
    pstruct$si$si_0 = ((struct1_t *) pstruct$si$si$si_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'bool' a 'struct2_t *' de mayor tama±o
//     pstruct$si$si$si_0 = ((struct2_t *) b_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned char' a 'struct2_t *' de mayor tama±o
//     pstruct$si$si$si_0 = ((struct2_t *) uc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'char' a 'struct2_t *' de mayor tama±o
//     pstruct$si$si$si_0 = ((struct2_t *) sc_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'unsigned short' a 'struct2_t *' de mayor tama±o
//     pstruct$si$si$si_0 = ((struct2_t *) uSi_1);
//> warning C4306: 'conversi≤n de tipo' :conversi≤n de 'short' a 'struct2_t *' de mayor tama±o
//     pstruct$si$si$si_0 = ((struct2_t *) sSi_1);
    pstruct$si$si$si_0 = ((struct2_t *) ui_1);
    pstruct$si$si$si_0 = ((struct2_t *) si_1);
    pstruct$si$si$si_0 = ((struct2_t *) uLi_1);
    pstruct$si$si$si_0 = ((struct2_t *) sLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de 'unsigned __int64' a 'struct2_t *'
//     pstruct$si$si$si_0 = ((struct2_t *) uLLi_1);
//> warning C4305: 'conversi≤n de tipo' : truncamiento de '__int64' a 'struct2_t *'
//     pstruct$si$si$si_0 = ((struct2_t *) sLLi_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'float' a 'struct2_t *'
//     pstruct$si$si$si_0 = ((struct2_t *) f_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'double' a 'struct2_t *'
//     pstruct$si$si$si_0 = ((struct2_t *) d_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'long double' a 'struct2_t *'
//     pstruct$si$si$si_0 = ((struct2_t *) Ld_1);
    pstruct$si$si$si_0 = ((struct2_t *) ai_1);
    pstruct$si$si$si_0 = ((struct2_t *) ad_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct1_t' a 'struct2_t *'
//     pstruct$si$si$si_0 = ((struct2_t *) struct$si$si_1);
//> error C2440: 'conversi≤n de tipo' : no se puede realizar la conversi≤n de 'struct2_t' a 'struct2_t *'
//     pstruct$si$si$si_0 = ((struct2_t *) struct$si$si$si_1);
    pstruct$si$si$si_0 = ((struct2_t *) pc_1);
    pstruct$si$si$si_0 = ((struct2_t *) pSi_1);
    pstruct$si$si$si_0 = ((struct2_t *) pi_1);
    pstruct$si$si$si_0 = ((struct2_t *) pLi_1);
    pstruct$si$si$si_0 = ((struct2_t *) pLLi_1);
    pstruct$si$si$si_0 = ((struct2_t *) pf_1);
    pstruct$si$si$si_0 = ((struct2_t *) pd_1);
    pstruct$si$si$si_0 = ((struct2_t *) pLd_1);
    pstruct$si$si$si_0 = ((struct2_t *) pai_1);
    pstruct$si$si$si_0 = ((struct2_t *) pad_1);
    pstruct$si$si$si_0 = ((struct2_t *) pstruct$si$si_1);
    pstruct$si$si$si_0 = ((struct2_t *) pstruct$si$si$si_1);

    return 0;
}
