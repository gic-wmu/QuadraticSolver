/* cunit.c
 The global constants for cunit and cunit_init(),
 which should be called befoer using the unit test 
macros in cunit.h
authors John Kapenga, Greg Ostroy*/

#include <stdio.h>
#include <float.h>
#include "cunit.h"

FILE    *cunit_log; 	// when cunit test macors print resu
double  cunit_dmacheps;

int cunit_init() {

cunit_dmacheps = FLT_EPSILON; //replaced original code with c standard float epsilon macro -Greg Ostroy
cunit_log = stderr;

return 0; 
}

