/*CS4900 
2/15/2017
Greg Ostroy

Test for square root function
*/

#include <stdlib.h>
#include "../Cunit/cunit.h" 
#include "squareRoot.h"

int main()
{
	cunit_init();
	double result=0.0;
	char str[100];
	float a=1.0f;
	float b=2.0f;
	float c=1.0f;
	int output=squareRoot(a,b,c,&result);
	assert_int_eq(str,output,0); 
	assert_float_eq(str,result,0.0); 

	a=1.0f;
	b=4.0f;
	c=3.0f;
	output=squareRoot(a,b,c,&result);
	assert_int_eq(str,output,1); 
	assert_float_eq(str,result,2.0);

	a=1.0f;
	b=3.0f;
	c=4.0f;
	output=squareRoot(a,b,c,&result);
	assert_int_eq(str,output,-1); 

	a=1.0f;
	b=4.4f;
	c=3.2f;
	output=squareRoot(a,b,c,&result);
	assert_float_eq(str,result,2.56125); 

	a=1.0f;
	b=0.2f;
	c=0.01f;
	output=squareRoot(a,b,c,&result);
	assert_int_eq(str,output,0); 
	return 0;
}
