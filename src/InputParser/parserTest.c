/*CS4900 
2/15/2017
Greg Ostroy

Test for parser functions
*/

#include <stdlib.h>
#include"parser.h"
#include "../Cunit/cunit.h" 

int main()
{	
	float _a=0.0;
	float _b=0.0;
	float _c=0.0;
	float* a=&_a;
	float* b=&_b;
	float* c=&_c;
	char str[100];

	cunit_init();
	//valid numbers
	int result = parseCoefficients("2.545","3.5","5",a,b,c);
	assert_float_eq(str,*a,2.545f);
	assert_float_eq(str,*b,3.5f);
	assert_float_eq(str,*c,5.0f);
	assert_int_eq(str,result,0);
	//invalid numbers
	result = parseCoefficients("monkey","3.5","5",a,b,c);
	assert_int_eq(str,result,1);
	result = parseCoefficients("-8.2","3.5","5",a,b,c);
	assert_int_eq(str,result,1);	
	result = parseCoefficients("nan","3.5","5",a,b,c);
	assert_int_eq(str,result,1);

	return 0;
}

