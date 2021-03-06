/*CS4900 
2/15/2017
Greg Ostroy

Test of parser

Copyright (C) 2017 Greg Ostroy see full notice in [installation path]/QuadraticSolver/doc/README
*/

#include <stdio.h>
#include "parser.h"
#include "../Cunit/cunit.h" 

int main(int argc, char* argv[])
{
	cunit_init();
	float a= 0.0;
	float b= 0.0;
	float c= 0.0;
	char str[100];
	int ret= parseCoefficients("1 2 1",&a,&b,&c);
	assert_int_eq(str,ret,0);

	ret= parseCoefficients("1 .2 .1",&a,&b,&c);
	assert_int_eq(str,ret,0);

	ret= parseCoefficients("1 .2",&a,&b,&c);
	assert_int_eq(str,ret,1);

	ret= parseCoefficients("1 monkey .1",&a,&b,&c);
	assert_int_eq(str,ret,1);

	ret= parseCoefficients("1 .2 .1 8",&a,&b,&c);
	assert_int_eq(str,ret,0);
	return 0;
	
}
