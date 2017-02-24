/*CS4900 
2/15/2017
autnorr John Kapenga

Some assert macros 
*/

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

extern FILE *cunit_log; //pointer to error log
extern double  cunit_dmacheps;//machine epsilon for float
int cunit_init();//function that initializes cunit_log and calibrates dmacheps 

#define cunit_open(log) { \
    if((cunit_log=fopen( log, "w") == NULL ) { \
      cunit_log = stderr; \
    } \
}

#define cunit_close fclose(cunit_log)

#define assert_float_eq(str,a,b) { \
  if(fabs(a - b)/(fabs(a) + fabs(b))>=cunit_dmacheps ) { \
    fprintf(cunit_log, "%s  LINE %d: %s, %f !== %f\n", \
              __FILE__ , __LINE__ , str ,  a , b ); \
  } \
}

#define assert_int_eq(str,a,b) { \
  if( a != b ) { \
    fprintf(cunit_log, "%s  LINE %d: %s, %d !== %d\n", \
              __FILE__ , __LINE__ , str ,  a , b ); \
  } \
}

